#include "gfxobjtimelab.h"

GfxObjTimeLab::GfxObjTimeLab(QObject *parent):
    GfxObj(parent)
{

}

GfxObjTimeLab::~GfxObjTimeLab()
{

}

void GfxObjTimeLab::DoDraw()
{
    int hto = gfx->GetTextHeight();
    int ht2 = hto>>1; // >> == /2
    QString yLabel = "Time";
    int s = y2pix(m_Y1);
    int wt  = gfx->GetTextWidth(yLabel);
    gfx->DrawText (ht2+2,s+wt,yLabel,0,90);
}

void GfxObjTimeLab::setTransparent()
{
    gfx->setAttribute(Qt::WA_TransparentForMouseEvents);
    gfx->setAttribute(Qt::WA_NoSystemBackground);
    gfx->setAttribute(Qt::WA_TranslucentBackground);
}
