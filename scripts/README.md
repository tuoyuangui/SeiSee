# 安装包脚本使用说明

本目录提供 Windows Inno Setup 安装程序和 Linux AppImage 两种打包脚本。脚本会从项目源码构建 Release 版本，并将安装包写入项目根目录下的 `dist` 文件夹。

## 从 SVG 重新生成数据文件图标

`render-file-icons.ps1` 使用 Qt SVG 模块，从 `SeiSeeMp/images` 中的四个 SVG 源文件重新生成对应的 PNG 文件。需要安装 Qt（包含 QtSvg）、C++ 编译器和 qmake；Windows 上使用 Qt 5.15.2 MinGW 8.1，Linux 上如果要运行这个图标生成脚本，需另行安装 PowerShell 7、Qt 开发包及 make。PowerShell 7 只用于运行此 `.ps1` 图标脚本；Linux Docker 打包和 Linux AppImage 发布脚本均使用 Bash，不依赖 PowerShell。

在项目根目录运行（Windows PowerShell 或已安装 PowerShell 7 的 Linux）：

```powershell
./scripts/render-file-icons.ps1
```

默认输出 512×512 PNG。Qt 或 MinGW 安装在其他目录时，可指定工具路径；Linux 上可将 Qt 的 `bin` 目录传给 `-QtBin`。也可以通过 `-Size` 调整输出尺寸：

```powershell
.\scripts\render-file-icons.ps1 `
  -QtBin "C:\Qt\5.15.2\mingw81_64\bin" `
  -MinGWBin "C:\Qt\Tools\mingw810_64\bin" `
  -Size 512
```

脚本会从 `segyfile.svg`、`segdfile.svg`、`sufile.svg` 和 `cstfile.svg` 生成对应 PNG。SVG 是源文件，修改后重新运行脚本即可更新 PNG。

## Windows 安装程序

### 前置条件

- 64 位 Windows
- Qt 5.15.2 MinGW 8.1
- Inno Setup 6

脚本调用 Qt `bin` 目录下的 `windeployqt` 扫描 Release 程序，并将其识别出的 Qt DLL、平台插件、其他运行库和所需的 MinGW 运行库放入安装包。

Inno Setup 安装程序使用 `SeiSeeMp/images/SeiSeeSetup.ico`；安装后的应用仍使用 `SeiSeeMp.ico`。修改安装图标时，应从独立的 `SeiSeeSetup.svg` 重新生成透明 PNG 和多尺寸 ICO，再运行打包脚本。

安装向导会显示安装目录页面，默认位置为当前系统的 64 位 Program Files 下的 `SeiSee` 文件夹，用户可以在安装时选择其他位置。

Windows 应用和安装快捷方式使用相同的 AppUserModelID，以保持任务栏分组和图标一致。若已经固定过旧快捷方式，升级后请先取消固定，再从新版开始菜单快捷方式启动并重新固定。

### 配置和运行

打开 [package-windows.ps1](./package-windows.ps1)，按本机安装位置修改文件开头的默认路径：

```powershell
[string]$QtBin = "C:\Qt\5.15.2\mingw81_64\bin",
[string]$MinGWBin = "C:\Qt\Tools\mingw810_64\bin",
[string]$InnoSetupCompiler = "C:\Program Files (x86)\Inno Setup 6\ISCC.exe",
```

在 PowerShell 中进入项目目录后运行：

```powershell
cd E:\MyFiles\code\SeiSee
.\scripts\package-windows.ps1
```

如当前用户的 PowerShell 执行策略不允许运行脚本，可只在当前窗口临时放行：

```powershell
Set-ExecutionPolicy -Scope Process -ExecutionPolicy Bypass
.\scripts\package-windows.ps1
```

也可以不改脚本文件，直接传入工具路径和并行构建任务数。Windows 安装包版本始终从 `SeiSeeMp/mainwindow.h` 中的 `#define VERSION` 读取：

```powershell
.\scripts\package-windows.ps1 `
  -QtBin "C:\Qt\5.15.2\mingw81_64\bin" `
  -MinGWBin "C:\Qt\Tools\mingw810_64\bin" `
  -InnoSetupCompiler "C:\Program Files (x86)\Inno Setup 6\ISCC.exe" `
  -Jobs 8
```

生成的安装程序位于 `dist\windows`，文件名中的版本号也取自 `SeiSeeMp/mainwindow.h`。

## Linux AppImage

### 使用 Docker 构建

推荐使用仓库根目录的 `docker/linux.Dockerfile`。它在 CentOS 7 兼容的 manylinux2014 环境（glibc 2.17）中使用宿主机 `/home/ww/Qt/5.15.2/gcc_64` 下的 Qt 5.15.2 编译并创建 AppImage，目标支持 CentOS 7 及以上和 Ubuntu 20.04 及以上的 x86_64 系统。容器会配置 `QMAKE`、`PATH`、`LD_LIBRARY_PATH`、`QT_PLUGIN_PATH`、`QT_QPA_PLATFORM_PLUGIN_PATH`、`QML2_IMPORT_PATH`、`CMAKE_PREFIX_PATH` 和 `PKG_CONFIG_PATH`：

```bash
docker build -f docker/linux.Dockerfile -t seisee-linux-builder .
mkdir -p dist/linux
```

之后每次打包，在项目根目录运行：

```bash
VERSION="$(sed -nE 's/^[[:space:]]*#[[:space:]]*define[[:space:]]+VERSION[[:space:]]+"([^"]+)".*/\1/p' SeiSeeMp/mainwindow.h)"
test -n "$VERSION" || { echo "无法从 SeiSeeMp/mainwindow.h 读取 VERSION" >&2; exit 1; }

docker run --rm \
  --user "$(id -u):$(id -g)" \
  -e VERSION="$VERSION" \
  -e JOBS="$(nproc)" \
  -v /home/ww/Qt:/home/ww/Qt:ro \
  -v "$PWD:/workspace" \
  seisee-linux-builder
```

脚本会从 `SeiSeeMp/mainwindow.h` 中读取 `#define VERSION`，并将其传给容器作为安装包版本。`docker build` 只需首次运行，或修改 Dockerfile/容器工具后重新运行。打包时会将当前项目目录挂载到容器，使用最新源码并把产物写入宿主机的 `dist/linux`。镜像构建需要网络访问 AppImage 工具的下载地址；Qt SDK 从宿主机只读挂载，不会在镜像中重新下载。此 Docker 配置仅构建 x86_64 Linux AppImage，不提供图形桌面容器。

### 前置条件

- x86_64 Linux
- Qt 5 开发环境及 C++ 编译工具
- `linuxdeploy`
- `linuxdeploy-plugin-qt`（需能从 `PATH` 找到）
- `appimagetool`

Ubuntu 本机开发可通过 `sudo apt install build-essential gdb` 安装编译器、Make 和调试器。
使用 Qt 的 XCB 图形平台插件还需要安装 `libxcb-xinerama0`：`sudo apt install libxcb-xinerama0`。缺少它时，Qt 可能显示已找到 `libqxcb.so`，但仍无法加载 XCB 平台插件。

建议在计划支持的较旧 Linux 发行版上构建，以提高生成的 AppImage 对不同 glibc 版本的兼容性。

### 本机 Qt 环境变量

在本机直接构建时，从项目根目录加载环境配置脚本，然后运行打包脚本：

```bash
source scripts/qt-env.sh
./scripts/package-linux.sh
```

该脚本默认使用 `/home/ww/Qt/5.15.2/gcc_64`，设置 `QT_ROOT`、`QMAKE`、`PATH`、`LD_LIBRARY_PATH`、`QT_PLUGIN_PATH`、`QT_QPA_PLATFORM_PLUGIN_PATH`、`QML2_IMPORT_PATH`、`CMAKE_PREFIX_PATH` 和 `PKG_CONFIG_PATH`。如 Qt 安装在其他位置，可先设置 `QT_ROOT` 覆盖默认值。本机的 `~/.bashrc` 已直接配置这些环境变量；改动后执行 `source ~/.bashrc` 使当前终端生效，新开的 Bash 终端会自动加载。

### 运行

在 Linux shell 中从项目目录运行：

```bash
chmod +x scripts/package-linux.sh
./scripts/package-linux.sh
```

可以通过环境变量指定工具路径、版本和构建并行度：

```bash
QMAKE=/path/to/qmake \
MAKE=/path/to/make \
LINUXDEPLOY=/path/to/linuxdeploy \
APPIMAGETOOL=/path/to/appimagetool \
VERSION=4.0.0-alpha.1 \
JOBS=8 \
./scripts/package-linux.sh
```

默认使用 `qmake`、`make`、`linuxdeploy` 和 `appimagetool`。生成的文件位于 `dist/linux`，默认文件名为 `SeiSee-4.0.0-alpha.1-x86_64.AppImage`。

## GitHub Release

在 `CHANGELOG.md` 中填写并审核当前版本对应的更新内容。发布脚本会从 `SeiSeeMp/mainwindow.h` 读取版本号，预览该版本的更新说明，并只选择文件名包含该版本号的 `dist` 文件，避免把旧版本安装包一并上传。

先运行预览并检查输出：

```powershell
.\scripts\publish-github-release.ps1
```

确认更新说明和待上传文件无误后，安装 [GitHub CLI](https://cli.github.com/) 并运行 `gh auth login`。如需先在 GitHub 上复核，可创建草稿 Release 并上传文件：

```powershell
.\scripts\publish-github-release.ps1 -CreateDraft
```

脚本默认只预览，不会创建 Release。确认内容无误且希望直接正式发布时，使用 `-Publish`；该操作会立即创建并公开 Release：

```powershell
.\scripts\publish-github-release.ps1 -Publish
```

`-CreateDraft` 和 `-Publish` 不能同时使用。可分别添加 `-WhatIf` 模拟创建草稿或正式发布时将执行的操作。

### 发布 Linux AppImage

先确认 `dist/linux` 中有与 `SeiSeeMp/mainwindow.h` 版本一致的 AppImage，并在 [CHANGELOG.md](../CHANGELOG.md) 中维护该版本的发布说明。脚本从版本宏读取发布标签，从对应的 Changelog 章节读取新建 Release 的说明。

在仓库根目录预览（Linux 使用 Bash；Windows 可在 Git Bash 或 WSL 中运行）：

```bash
bash ./scripts/publish-linux-release.sh
```

确认版本和文件无误后发布：

```bash
bash ./scripts/publish-linux-release.sh --publish
```

发布前需安装 [GitHub CLI](https://cli.github.com/) 并运行 `gh auth login`。如果该版本的 Release 已存在（例如已发布 Windows 安装程序），脚本只上传 Linux AppImage；同名 Linux 文件会被替换，原有 Windows 附件、Release 说明和发布状态保持不变。如果 Release 尚不存在，则根据 `CHANGELOG.md` 创建 Release 并附上 Linux AppImage。默认不带 `--publish` 时只预览，不会连接 GitHub 或上传文件；如需发布到其他仓库，可传入 `--repo OWNER/REPO`。

## 开发环境

### VS Code（Windows 和 Linux 共用）

仓库中的 `.vscode` 配置同时包含 Windows 和 Linux 工具链：任务会按当前操作系统选择 qmake、make、运行程序及 Qt Designer；调试器分别提供 Linux 和 Windows 启动项。C/C++ 扩展的配置可在状态栏的配置选择器中切换 `Linux` 或 `Windows MinGW`。两边需要分别安装与各自 Qt 工具链相匹配的 C/C++ 扩展及编译工具。qmake 会在源码目录生成平台相关的 Makefile 和目标文件；如果在同一工作区切换操作系统，先运行 `Clean build outputs` 再重新构建。

### Git 用户名和邮箱

Git 提交需要配置作者姓名和邮箱。为当前用户的所有仓库设置（全局配置）：

```bash
git config --global user.name "你的姓名"
git config --global user.email "你的邮箱"
```

如果只想为当前仓库设置，请先进入项目目录，再省略 `--global`。查看当前仓库最终生效的配置：

```bash
git config user.name
git config user.email
```

仓库级配置优先于全局配置。提交记录会包含配置的姓名和邮箱；如果不希望公开个人邮箱，可以使用代码托管平台提供的隐私邮箱地址。此配置用于标记提交作者，不会设置 GitHub 登录或推送认证。

## 项目依赖说明

- [qt-toast](https://github.com/niklashenning/qt-toast)：截图操作提示，源码及 MIT 许可证位于 `third_party/qt-toast`，通过独立 qmake 静态库项目构建。通知定位使用 Qt `QScreen::availableGeometry()`，适配 Windows 任务栏及 Linux 桌面保留区域。

## 常见问题

- 脚本会检查必需的编译和打包工具；缺少工具时会指出未找到的命令或文件。
- 脚本在独立临时目录准备打包内容，结束时自动清理；项目构建输出仍按 qmake 项目配置生成。
- 如果构建失败，请先检查 Qt 版本、编译器与项目配置是否匹配，再根据终端输出修复编译错误。
