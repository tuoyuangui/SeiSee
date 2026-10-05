#ifndef GFXSTYLE_H
#define GFXSTYLE_H

#include <QFont>
#include <QScreen>

namespace GfxStyle {

    // DPI 与物理单位换算基准。
    constexpr int ReferenceDpi = 96;
    constexpr double MillimetersPerInch = 25.4;
    constexpr double MillimetersPerMeter = 1000.0;
    // 0 表示使用当前屏幕 DPI，而不是固定 DPI。
    constexpr int UseScreenDpi = 0;
    // Qt normalizes logical DPI to 96 when high-DPI scaling is enabled.
    // Include the screen scale factor to recover the effective screen DPI.
    inline int ScreenDpiX(const QScreen *screen)
    {
        return screen
                   ? qMax(1, qRound(screen->logicalDotsPerInchX() *
                                    screen->devicePixelRatio()))
                   : ReferenceDpi;
    }

    inline int ScreenDpiY(const QScreen *screen)
    {
        return screen
                   ? qMax(1, qRound(screen->logicalDotsPerInchY() *
                                    screen->devicePixelRatio()))
                   : ReferenceDpi;
    }

    // Appearance 菜单提供给用户选择的常见固定 DPI。
    static const int CommonDisplayDpis[] = {ReferenceDpi, 120, 144, 168,
                                            192,          240, 288, 384};
    constexpr int CommonDisplayDpiCount =
        sizeof(CommonDisplayDpis) / sizeof(CommonDisplayDpis[0]);

    // 应用界面字体；Qt 资源路径对应 fonts/Roboto-Regular-14.ttf。
    static const char UiFontResource[] = ":/fonts/Roboto-Regular-14.ttf";
    static const char UiFontFamily[] = "Roboto";
    constexpr double UiFontPointSize = 9.75;
    constexpr double DirectoryGridFontPointSize = 8.0;
    constexpr double AboutTitleFontPointSize = 22.0;
    constexpr double AboutSubtitleFontPointSize = 10.0;
    constexpr double AboutProductFontPointSize = 12.0;
    constexpr double AboutDetailsFontPointSize = 10.0;
    constexpr double SaveAsLabelFontPointSize = 8.0;

    // InfoTxt 和 TxtHdrEdit 使用 Courier New 等宽字体。
    static const char TextEditorFontFamily[] = "Courier New";
    constexpr QFont::StyleHint TextEditorFontStyleHint = QFont::Courier;
    constexpr double TextEditorFontPointSize = 8.25;

    // 地震图、坐标轴及 Time 标签字体字号，单位为 point。
    constexpr double LabelFontPointSize = 8.25;
    static const char LabelFontFamily[] = "Times New Roman";
    // Qt 资源路径对应 SeiSeeMp/fonts/TIMES.TTF。
    static const char LabelFontResource[] = ":/fonts/TIMES.TTF";
    constexpr QFont::StyleHint LabelFontStyleHint = QFont::Serif;
    static const char TimeLabelText[] = "Time";
    static const char TimeAxisWidthSample[] = "0000";

    // SeiSeeMp 初始窗口尺寸，单位为 Qt 逻辑像素。
    constexpr int MainWindowWidth = 1282;
    constexpr int MainWindowHeight = 702;
    constexpr int AboutDialogWidth = 387;
    constexpr int AboutDialogHeight = 228;
    constexpr int AxisDialogWidth = 698;
    constexpr int AxisDialogHeight = 478;
    constexpr int EditHeaderDialogWidth = 726;
    constexpr int EditHeaderDialogHeight = 618;
    constexpr int ProcParmDialogWidth = 340;
    constexpr int ProcParmDialogHeight = 414;
    constexpr int ProcParmDialogMaxWidth = 360;
    constexpr int SaveAsDialogWidth = 661;
    constexpr int SaveAsDialogHeight = 550;

    // SeiSeeMp 表格列宽，单位为 96 DPI 下的逻辑像素。
    constexpr int HiddenTableColumnWidth = 0;
    constexpr int DirectoryTypeColumnWidth = 50;
    constexpr int HeaderValueColumnWidth = 70;
    constexpr int BinaryHeaderBytesColumnWidth = 65;
    constexpr int TraceHeaderBytesColumnWidth = 60;
    constexpr int TraceHeaderNameColumnWidth = 65;
    constexpr int TraceDataColumnWidth = 80;
    constexpr int HeaderCheckColumnWidth = 20;
    constexpr int AvailableHeaderColumnWidth = 80;
    constexpr int EditHeaderValueColumnWidth = 65;
    constexpr int SaveHeaderNameColumnWidth = 60;

    // MyStringTable 列宽，按当前字体中的字符宽度或内容自适应。
    constexpr int TableColumnHorizontalPadding = 8;
    constexpr int DirectoryTypeCharacterCount = 5;
    constexpr int BinaryHeaderValueCharacterCount = 6;
    constexpr int HeaderBytesCharacterCount = 7;
    constexpr int HeaderNameCharacterCount = 7;
    constexpr int TraceDataIndexCharacterCount = 7;
    constexpr int TraceDataTimeCharacterCount = 7;
    constexpr int AvailableHeaderNameCharacterCount = 7;
    constexpr int SelectedHeaderNameCharacterCount = 15;

    // SeiSeeMp 道头表格myhugetable表格列宽，单位为字符所占的个数。
    constexpr int TraceHeaderValueCharacterCount = 11;

    // SeiSeeMp 紧凑型布局间距，单位为 96 DPI 下的逻辑像素。
    constexpr int CompactLayoutMargin = 1;
    constexpr int CompactLayoutSpacing = 1;
    constexpr int ZeroLayoutMargin = 0;
    constexpr int ZeroLayoutSpacing = 0;
    constexpr int ScrollBarAreaMargin = 0;

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
