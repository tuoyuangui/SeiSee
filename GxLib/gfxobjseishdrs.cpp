#include <QFont>
#include <QFontMetrics>
#include <stdio.h>

#include "gfxobjseishdrs.h"
#include "gfxstyle.h"
#include "gfxview.h"

#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))

GfxObjSeisHdrs::GfxObjSeisHdrs(QObject *parent)
    : GfxObjSeis(parent)
{
    m_bottomSide = false;
}

void GfxObjSeisHdrs::setBottomSide(bool v)
{
    m_bottomSide = v;
    Update();
}

void GfxObjSeisHdrs::setHdrList(QList<QString> v)
{
    m_hdrs = v;

    Preset();
}

void GfxObjSeisHdrs::DoDraw()
{
    if (m_view == NULL)
        return;

    double X1 = min(m_X1, m_X2);
    double X2 = max(m_X1, m_X2);

    int x1 = x2pix(X1);
    int x2 = x2pix(X2);

    if (x1 > x2) {
        int tmp = x1;
        x1 = x2;
        x2 = tmp;
    }

    int y1 = 0;                //   y2pix(Y1);
    int y2 = m_view->height(); //   y2pix(Y2);

    //  gfx->DrawRect(x1,y1,x2-1,y2-1,0);
    int axisY = m_bottomSide ? y1 : y2 - GfxStyle::AxisLineWidthPixels;

    gfx->DrawLine(x1, axisY,
                  m_view->width() - GfxStyle::AxisLineWidthPixels, axisY, 0);

    if (!s_src || s_src->Nt() < 1)
        return;

    int ht = gfx->GetFontMetrics().height();
    int labelAscent = gfx->GetFontMetrics().ascent();
    int labelDescent = gfx->GetFontMetrics().descent();
    int wto = gfx->GetTextWidth("123456789");

    int traceCount = s_src->Nt();
    if (traceCount < 2)
        return;

    double pl = pix2x(L);
    double pr = pix2x(R);
    int nl = s_src->Tx(pl);
    int nr = s_src->Tx(pr);
    int n1 = s_src->Tx(m_X1);
    int n2 = s_src->Tx(m_X2);
    int nc;

    if (nl > nr) {
        int tmp = nr;
        nr = nl;
        nl = tmp;
    }
    if (n1 > n2) {
        int tmp = n2;
        n2 = n1;
        n1 = tmp;
    }

    if (nl < 0)
        nl = 0;
    if (nr < 0)
        nr = traceCount - 1;
    if (n1 < 0)
        n1 = 0;
    if (n2 < 0)
        n2 = traceCount - 1;
    if (nl >= traceCount)
        nl = traceCount - 1;
    if (nr >= traceCount)
        nr = traceCount - 1;
    if (n1 >= traceCount - 1)
        n1 = traceCount - 2;
    if (n2 >= traceCount)
        n2 = traceCount - 1;

    double xp, xc;

    xp = x2fpix(s_src->Tp(n1));
    xc = x2fpix(s_src->Tp(n1 + 1));

    double pixelsPerTrace = fabs(xp - xc);
    if (pixelsPerTrace == 0)
        return;

    int minTickSpacing = gfx->ScaleX(GfxStyle::HeaderAxisMinTickSpacing);
    int tickStep = max(1, int(minTickSpacing / pixelsPerTrace));
    int labelStep = max(1, int(ceil(wto / pixelsPerTrace)));
    labelStep =
        max(tickStep, ((labelStep + tickStep - 1) / tickStep) * tickStep);

    int firstTick = (nl / tickStep - 10) * tickStep;
    int lastTick = (nr / tickStep + 10) * tickStep;
    int tickDirection = m_bottomSide ? 1 : -1;
    int Nh = m_hdrs.count();
    int labelGap = gfx->ScaleY(GfxStyle::HeaderAxisLabelGap);
    int tickLength = gfx->ScaleY(GfxStyle::HeaderAxisTickLength);
    int lineGap = gfx->ScaleY(GfxStyle::HeaderAxisLineGap);

    char lab[1024];
    for (nc = firstTick; nc <= lastTick; nc += tickStep) {
        if (nc < 0 || nc >= s_src->Nt())
            continue;

        xc = x2pix(s_src->Tp(nc));
        bool hasLabel = (nc % labelStep) == 0;
        if (!hasLabel)
            continue;
        if (nc == traceCount - 1)
            continue;

        gfx->DrawVLine(xc, axisY, axisY + tickDirection * tickLength, 0, 0);

        for (int nh = 0; nh < Nh; nh++) {
            QString hname = m_hdrs[Nh - nh - 1];
            double v = s_src->Th(nc, hname);

            int iv = v;
            if (iv == v)
                sprintf(lab, "%d", iv);
            else
                sprintf(lab, "%g", v);

            int textWidth = gfx->GetTextWidth(lab);
            int textX = xc - textWidth / 2;
            int baseline =
                m_bottomSide ? axisY + labelGap + labelAscent + nh * (ht + lineGap)
                             : axisY - labelGap - labelDescent - nh * (ht + lineGap);

            if (textX > x1 && textX + textWidth < x2)
                gfx->DrawText(textX, baseline, lab);
        }
    }
}
