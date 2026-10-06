# 安装包脚本使用说明

本目录提供 Windows Inno Setup 安装程序和 Linux AppImage 两种打包脚本。脚本会从项目源码构建 Release 版本，并将安装包写入项目根目录下的 `dist` 文件夹。

## 从 SVG 重新生成数据文件图标

`render-file-icons.ps1` 使用 Qt SVG 模块，从 `SeiSeeMp/images` 中的四个 SVG 源文件重新生成对应的 PNG 文件。需要安装 Qt（包含 QtSvg）、C++ 编译器和 qmake；Windows 上使用 Qt 5.15.2 MinGW 8.1，Linux 上需安装 PowerShell 7、Qt 开发包及 make。

在项目根目录运行（Windows PowerShell 或 Linux PowerShell 7）：

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

也可以不改脚本文件，直接传入工具路径、版本和并行构建任务数：

```powershell
.\scripts\package-windows.ps1 `
  -QtBin "C:\Qt\5.15.2\mingw81_64\bin" `
  -MinGWBin "C:\Qt\Tools\mingw810_64\bin" `
  -InnoSetupCompiler "C:\Program Files (x86)\Inno Setup 6\ISCC.exe" `
  -Version "3.0-alpha.37" `
  -Jobs 8
```

生成的安装程序位于 `dist\windows`，默认文件名为 `SeiSee-3.0-alpha.37-Setup.exe`。

## Linux AppImage

### 前置条件

- x86_64 Linux
- Qt 5 开发环境及 C++ 编译工具
- `linuxdeploy`
- `linuxdeploy-plugin-qt`（需能从 `PATH` 找到）
- `appimagetool`

建议在计划支持的较旧 Linux 发行版上构建，以提高生成的 AppImage 对不同 glibc 版本的兼容性。

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
VERSION=3.0-alpha.37 \
JOBS=8 \
./scripts/package-linux.sh
```

默认使用 `qmake`、`make`、`linuxdeploy` 和 `appimagetool`。生成的文件位于 `dist/linux`，默认文件名为 `SeiSee-3.0-alpha.37-x86_64.AppImage`。

## 常见问题

- 脚本会检查必需的编译和打包工具；缺少工具时会指出未找到的命令或文件。
- 脚本在独立临时目录准备打包内容，结束时自动清理；项目构建输出仍按 qmake 项目配置生成。
- 如果构建失败，请先检查 Qt 版本、编译器与项目配置是否匹配，再根据终端输出修复编译错误。
