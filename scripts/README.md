# 安装包脚本使用说明

本目录提供 Windows Inno Setup 安装程序和 Linux AppImage 两种打包脚本。脚本会从项目源码构建 Release 版本，并将安装包写入项目根目录下的 `dist` 文件夹。

## Windows 安装程序

### 前置条件

- 64 位 Windows
- Qt 5.15.2 MinGW 8.1
- Inno Setup 6

脚本调用 Qt `bin` 目录下的 `windeployqt` 扫描 Release 程序，并将其识别出的 Qt DLL、平台插件、其他运行库和所需的 MinGW 运行库放入安装包。

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
