<div align="center">
  <h1 align="center">地震数据查看器SeisSee</h1>
</div>

<div align="center">一个支持多平台的地震数据查看工具,源代码开发者为：https://mail.dmng.ru/freeware/</div>
<br>
<p align="center">
  <a href="https://github.com/wangweiwei104/SeisSee/releases/latest">
    <img src="https://img.shields.io/github/v/release/wangweiwei104/SeisSee" />
  </a>
  <a href="https://github.com/wangweiwei104/SeisSee/releases/latest">
    <img src="https://img.shields.io/github/downloads/wangweiwei104/SeisSee/total" />
  </a>
  <a href="https://github.com/wangweiwei104/SeisSee/fork">
    <img src="https://img.shields.io/github/forks/wangweiwei104/SeisSee" />
  </a>
  <a href="https://github.com/wangweiwei104/SeisSee/star">
    <img src="https://img.shields.io/github/stars/wangweiwei104/SeisSee" />
  </a>
</p>

## 界面
<p align="center">
  <a >
    <img src="home.png" alt="界面展示截图" />    
  </a>
  主界面

</p>

## 功能

- ✅ 数据查看

## 安装方法

### Windows

需要 Qt 5.15.2 MinGW 8.1、Inno Setup 6.3 或更高版本，并将项目使用的 Qt 和 MinGW `bin` 目录配置在默认路径或传入参数。脚本通过 `windeployqt` 扫描并打包应用所需的 Qt DLL、平台插件和运行库；安装包版本从 `SeiSeeMp/mainwindow.h` 中的 `#define VERSION` 自动读取：

```powershell
.\scripts\package-windows.ps1
```

可通过 `-QtBin`、`-MinGWBin`、`-InnoSetupCompiler` 和 `-Jobs` 覆盖工具路径及构建参数。安装程序输出到 `dist/windows`。

### Linux

需要 Qt 5 开发环境、C++ 编译工具、`linuxdeploy`、`linuxdeploy-plugin-qt` 和 `appimagetool`，并在 x86_64 Linux 上运行。默认安装包版本为 `4.0.0-alpha.1`：

```bash
chmod +x scripts/package-linux.sh
./scripts/package-linux.sh
```

可通过 `QMAKE`、`MAKE`、`LINUXDEPLOY`、`APPIMAGETOOL`、`VERSION` 和 `JOBS` 环境变量覆盖工具及构建参数。AppImage 输出到 `dist/linux`。建议在目标用户所需支持范围内较旧的 Linux 发行版上构建，以提高 glibc 兼容性。

## 第三方库

- [qt-toast](https://github.com/niklashenning/qt-toast)：截图操作提示，源码及 MIT 许可证位于 `third_party/qt-toast`，通过独立 qmake 静态库项目构建。通知定位使用 Qt `QScreen::availableGeometry()`，适配 Windows 任务栏及 Linux 桌面保留区域。

## 更新日志

[更新日志](./CHANGELOG.md)

## 赞赏

<div>暂不需要~</div>


## 关注

不用


## 免责声明

本项目仅供学习交流用途，开发者不负任何责任

## 许可证

[MIT](./LICENSE) License &copy; 2025-PRESENT [wangweiwei104](https://github.com/wangweiwei104)
