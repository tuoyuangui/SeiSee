#include "gfxobjhsrslab.h"
#include "gfxstyle.h"

GfxObjHsrsLab::GfxObjHsrsLab(QObject *parent)
    : GfxObj(parent)
{
}

GfxObjHsrsLab::~GfxObjHsrsLab()
{
}

int GfxObjHsrsLab::TextStartX() const
{
    return m_view ? m_view->getGfx()->ScaleX(GfxStyle::HeaderLabelTextStart)
                  : 0;
}

void GfxObjHsrsLab::setHdrList(QList<QString> v)
{
    m_hdrs = v;

    Preset();
}

void GfxObjHsrsLab::DoDraw()
{
    if (m_view == NULL)
        return;

    int xa = 0;
    int xb = m_view->width() - GfxStyle::AxisLineWidthPixels;

    int ya = 0;
    int yb = m_view->height() - GfxStyle::AxisLineWidthPixels;

    int rowHeight = gfx->GetFontMetrics().height() +
                    gfx->ScaleY(GfxStyle::HeaderLabelRowGap);
    int labelDescent = gfx->GetFontMetrics().descent();
    int leftPadding = TextStartX();
    int bottomPadding = gfx->ScaleY(GfxStyle::HeaderLabelBottomPadding);
    int nh;
    int Nh = m_hdrs.count();

    for (nh = 0; nh < Nh; nh++) {
        QString hname = m_hdrs[Nh - nh - 1];
        int baseline = yb - GfxStyle::AxisLineWidthPixels - bottomPadding -
                       labelDescent - nh * rowHeight;

        gfx->DrawText(leftPadding, baseline, hname);
    }
}
