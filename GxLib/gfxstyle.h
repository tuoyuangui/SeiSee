#ifndef GFXSTYLE_H
#define GFXSTYLE_H

#include <QFont>

namespace GfxStyle {

    // DPI 与物理单位换算基准。
    constexpr int ReferenceDpi = 96;
    constexpr double MillimetersPerInch = 25.4;
    constexpr double MillimetersPerMeter = 1000.0;
    // 0 表示使用当前屏幕 DPI，而不是固定 DPI。
    constexpr int UseScreenDpi = 0;
    // Appearance 菜单提供给用户选择的常见固定 DPI。
    static const int CommonDisplayDpis[] = {ReferenceDpi, 120, 144, 168,
                                            192,          240, 288, 384};
    constexpr int CommonDisplayDpiCount =
        sizeof(CommonDisplayDpis) / sizeof(CommonDisplayDpis[0]);

    // 地震图、坐标轴及 Time 标签共用的字体设置。
    // LabelFontPointSize 使用 point size；不是 pixel size。
    constexpr double LabelFontPointSize = 8.25;
    constexpr QFont::StyleHint LabelFontStyleHint = QFont::Courier;
    static const char LabelFontFamily[] = "Courier New";
    static const char LabelFontResource[] = ":/fonts/TIMES.TTF";
    static const char TimeLabelText[] = "Time";
    static const char TimeAxisWidthSample[] = "0000";
    // 以下两项使用 pixel size；它们是 Qt UI 字体字号，不是 point size。
    constexpr int MainWindowDefaultFontPixelSize = 13;
    constexpr int TextEditorFontPixelSize = 11;

    // 以下距离以 ReferenceDpi (96 DPI) 下的像素为单位，
    // 绘制时经 ScaleX/ScaleY 换算为当前 DPI 下的像素；不是字体字号。
    // 时间轴：标签与轴线的间距、刻度延伸长度、标签纵向微调。
    constexpr int TimeAxisLabelGap = 8;
    constexpr int TimeAxisTickLength = 6;
    constexpr int TimeAxisLabelYOffset = 2;

    // 道头坐标轴及道头文字区域的刻度和排版间距。
    constexpr int HeaderAxisMinTickSpacing = 4;
    constexpr int HeaderAxisLabelGap = 8;
    constexpr int HeaderAxisTickLength = 6;
    constexpr int HeaderAxisLineGap = 2;
    constexpr int HeaderLabelTextStart = 2;
    constexpr int HeaderLabelRowGap = 2;
    constexpr int HeaderLabelBottomPadding = 8;

    // 主窗口坐标轴区域与旋转 Time 标签之间的布局参数。
    constexpr int TimeLabelPadding = 8;
    constexpr int TimeLabelToAxisGap = 2;
    constexpr int TimeLabelTopOffset = 4;
    constexpr int HeaderRowsBottomPadding = 12;

    // 轴线宽度是实际 pixel size，固定为 1px，不随 DPI 放大。
    constexpr int AxisLineWidthPixels = 1;

} // namespace GfxStyle

#endif // GFXSTYLE_H
