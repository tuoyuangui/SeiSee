#include "gfxobjhsrslab.h"

GfxObjHsrsLab::GfxObjHsrsLab(QObject *parent)
    : GfxObj(parent)
{
}

GfxObjHsrsLab::~GfxObjHsrsLab()
{
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
    int xb = m_view->width() - 1;

    int ya = 0;
    int yb = m_view->height() - 1;

    //    QFont labelFont;
    //    labelFont.setPixelSize(11);
    //    labelFont.setStyleHint(QFont::Courier);
    //    QFontMetrics labelMetrics(labelFont);

    int rowHeight = gfx->GetFontMetrics().height() + 2;
    int labelDescent = gfx->GetFontMetrics().descent();
    int nh;
    int Nh = m_hdrs.count();

    for (nh = 0; nh < Nh; nh++) {
        QString hname = m_hdrs[Nh - nh - 1];
        int baseline = yb - 1 - 8 - labelDescent - nh * rowHeight;

        gfx->DrawText(2, baseline, hname);
    }
}
