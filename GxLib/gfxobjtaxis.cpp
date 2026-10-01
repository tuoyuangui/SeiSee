#include "gfxobjtaxis.h"
#include "gfxview.h"
#include "math.h"
#include "stdio.h"

#define min(a, b)  (((a) < (b)) ? (a) : (b))
#define max(a, b)  (((a) > (b)) ? (a) : (b))

GfxObjTAxis::GfxObjTAxis(QObject *parent) :
    GfxObj(parent)
{
    m_Ti=0.1;
  m_rightSide=false;
}

void   GfxObjTAxis::DoDraw()
{
   if(m_view==NULL) return;

   double Y1 = min(m_Y1,m_Y2);
   double Y2 = max(m_Y1,m_Y2);

   int x1 = 0;        //x2pix(X1);
  int x2 = m_view->width(); //x2pix(X2);

   int y1 = y2pix(Y1);
   int y2 = y2pix(Y2);

//  gfx->DrawRect(x1,y1,x2,y2,0);
    int axisX = m_rightSide ? x1 : x2-1;
    int tickDir = m_rightSide ? 1 : -1;

    int axisBottom = m_view->height()-1;
    gfx->DrawLine(axisX,y1,axisX,axisBottom,0);

    double t,i;

    char lab[128];

    int hto = gfx->GetTextHeight();
    int ht2 = hto>>1;

    double dl = y2pix(m_Ti)-y2pix(0);
    double ti=dl;

    if(dl==0) return;

    for(i=1;ti<=hto;i++) ti=dl*i;

    int x = axisX;

    for(t=m_Y1;t<m_Y2;t+=m_Ti)
    {
      int s = y2pix(t);
      gfx->DrawHLine(s,x,x+tickDir*3,0,0);
    }

    for(t=m_Y1;t<m_Y2;t+=(m_Ti*i))
    {
      int s = y2pix(t);

      int tt = round(t*1000);

      sprintf(lab,"%d",tt);
      int wt = gfx->GetTextWidth(lab,11);

      int labelX = m_rightSide ? x+8 : x-wt-8;
      gfx->DrawText (labelX,s+ht2-2,lab);
      gfx->DrawHLine(s,x,x+tickDir*6,0,0);
    }
}
