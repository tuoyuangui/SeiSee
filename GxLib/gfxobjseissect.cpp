#include "gfxobjseissect.h"
#include "gfx.h"
#include "gfxstyle.h"
#include "gfxutil.h"
#include "util2.h"

GfxObjSeisSect::GfxObjSeisSect(QObject *parent)
    : GfxObjSeis(parent)
{
    m_SelTr = -1;

    _si = NULL;
    _sj = NULL;
    _nj = 0;
    _ns = 0;

    m_Ti = 0.100;
    m_Tl = false;

    m_Mode = 0;
    _presetClipY = -1;
    _presetClipHeight = -1;
}

GfxObjSeisSect::~GfxObjSeisSect()
{
    if (_si)
        delete[] _si;
    _si = NULL;
    if (_sj)
        delete[] _sj;
    _sj = NULL;
}

/*
void   GfxObjSeisSect::DoDraw()
{
    double p;

    int xa = x2pix(m_X1);
    int xb = x2pix(m_X2);

    int ya = y2pix(m_Y1);
    int yb = y2pix(m_Y2);

    if(!s_src || s_src->Nt()<1)
    {
        gfx->DrawRect(xa,ya,xb,yb,0);
        return;
    }

    gfx->SetPalette(m_Pal);

    int    o;

    double xp,xc;

    double pl,pr;
    int    nl,nr;

    int    np, nc, n1, n2, clp;

//  int xl = gfx->Xo();
//  int xr = xl+gfx->W()-1;

    xp = 0;

    pl = pix2x(L);
    pr = pix2x(R);

    nl = s_src->Tx(pl);
    nr = s_src->Tx(pr);
    n1 = s_src->Tx(m_X1);
    n2 = s_src->Tx(m_X2);

    if(nl>nr) { int tmp = nr; nr=nl; nl=tmp; }
    if(n1>n2) { int tmp = n2; n2=n1; n1=tmp; }

    if(nl<0)                  nl=0;
    if(nr<0)                  nr=s_src->Nt()-1;
    if(n1<0)                  n1=0;
    if(n2<0)                  n2=s_src->Nt()-1;

    int lx = 0;
    int rx = R-L+1;

    int tw = m_Tw*m_Xs*xpmm/2;

//    Drawing in Color
    if(m_DispCol)
    {
      if(s_src->Nt()==1)
      {
        xc = x2pix(s_src->Tp(0));
        float* sc = s_src->Ts(0);

        if( sc && PointInRange(n1,n2,0))
              gfx->Draw2ColorTraceTB
                 (  xc-tw, _si, _sj, _nj, sc,
                    xc+tw, _si, _sj, _nj, sc,
                    lx, rx,
                    m_Gc,1);
      }
      else
      {
        int nn=0;

        //printf("nl=%d nr=%d\n",nl,nr); fflush(stdout);

        for(o=1,nc=nl-2;nc<nr+2;nc++)
         {
          p = s_src->Tp(nc);
          xc = x2pix(p);


          if(o)
          {
              o=0; xp=xc; np=nc; continue;
          }

          if(xc!=xp && PointInRange(n1,n2,nc))
          {
           float* sc = s_src->Ts(nc);
           float* sp = s_src->Ts(np);

           //printf("a=%d\n",nn); fflush(stdout);

           if( sc &&  sp && PointInRange(n1,n2,nc))
           {
              //printf("p=%g\n",p); fflush(stdout);
              gfx->Draw2ColorTraceTB
                 (  xp, _si, _sj, _nj, sp,
                    xc, _si, _sj, _nj, sc,
                    lx, rx,
                    m_Gc,1);
              //printf("b=%d\n",nn); fflush(stdout);
           }

          nn++;

          xp=xc; np=nc;
          }
        }
      }
    }

//    Drawing Wiggle

    double wg = m_Gw*m_Tw*m_Xs*xpmm;
    clp=m_Tw*m_Xs*xpmm*10;

    int _fil=m_WFill;

    int _fc=m_WFcolor;
    int _wc=m_WLcolor;

    xp = x2fpix(s_src->Tp(n1));
    xc = x2fpix(s_src->Tp(n1+1));

    int step = 4 / fabs(xp-xc);
    if(step<1) step=1;

    if(m_DispWig)
    {
     nc=nl-10;

     int na = nl/step-10;
     int nb = nr/step+10;

     na = na*step;
     nb = nb*step;

      for(o=1,nc=na;nc<nb;nc+=step)
      {
         xc = x2pix(s_src->Tp(nc));

         float* sc = s_src->Ts(nc);


         if( sc && PointInRange(n1,n2,nc))
              gfx->DrawWiggleTraceTB
               (xc, _si, _sj, _nj, sc, _fil, wg*step, clp*step,_fc,_wc);
      }
    }

    if(m_SelTr>=0 && m_SelTr<s_src->Nt())
    {
     int  nc    = m_SelTr;
     int  color = m_SLcolor;

     float* sc = s_src->Ts(nc);
     xc = x2pix(s_src->Tp (nc));

     if( PointInRange(xa,xb,xc) )
              gfx->DrawWiggleTraceTB
               (xc, _si, _sj, _nj, sc, 0, wg*step, clp*step,_fc,color);
    }

    if(!m_Tl || m_Ti<=0) return;

    double t;

    for(t=m_Y1;t<=m_Y2;t+=m_Ti)
    {
      int s = y2pix(t);
      gfx->DrawHLine(s,L,R,0,0);
    }
}
*/

void GfxObjSeisSect::DoDraw()
{
    if (_preset || _presetClipY != gfx->ClipY() ||
        _presetClipHeight != gfx->ClipHeight())
        DoPreset();

    double p;

    int xa = x2pix(m_X1);
    int xb = x2pix(m_X2);

    int ya = y2pix(m_Y1);
    int yb = y2pix(m_Y2);

    if (!s_src || s_src->Nt() < 1) {
        gfx->DrawRect(xa, ya, xb, yb, 0);
        return;
    }

    gfx->SetPalette(m_Pal);

    int o;

    double xp, xc;

    double pl, pr;
    int nl, nr;

    int np, nc, n1, n2, clp;

    //  int xl = gfx->Xo();
    //  int xr = xl+gfx->W()-1;

    xp = 0;

    const int clipLeft = gfx->ClipX();
    const int clipRight = clipLeft + gfx->ClipWidth() - 1;
    pl = pix2x(clipLeft);
    pr = pix2x(clipRight);

    nl = s_src->Tx(pl);
    nr = s_src->Tx(pr);
    n1 = s_src->Tx(m_X1);
    n2 = s_src->Tx(m_X2);

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
        nr = s_src->Nt() - 1;
    if (n1 < 0)
        n1 = 0;
    if (n2 < 0)
        n2 = s_src->Nt() - 1;
    nl = qBound(0, nl, s_src->Nt() - 1);
    nr = qBound(0, nr, s_src->Nt() - 1);

    int lx = 0;
    int rx = R - L + 1;

    int tw = m_Tw * m_Xs * xpmm / 2;

    //    Drawing in Color
    if (m_DispCol) {
        if (s_src->Nt() == 1) {
            xc = x2pix(s_src->Tp(0));
            Ttr tr = s_src->Tt(0);

            if (tr._buf && PointInRange(n1, n2, 0))
                gfx->Draw2ColorTraceTB(xc - tw, _si, _sj, _nj, tr, xc + tw, _si,
                                       _sj, _nj, tr, lx, rx, m_Gc, 1);
        } else {
            int nn = 0;

            // printf("nl=%d nr=%d\n",nl,nr); fflush(stdout);

            const int firstColorTrace = qMax(0, nl - 2);
            const int lastColorTrace = qMin(s_src->Nt() - 1, nr + 1);
            for (o = 1, nc = firstColorTrace; nc <= lastColorTrace; nc++) {
                p = s_src->Tp(nc);
                xc = x2pix(p);

                if (o) {
                    o = 0;
                    xp = xc;
                    np = nc;
                    continue;
                }

                if (xc != xp && PointInRange(n1, n2, nc)) {
                    //         float* sc = s_src->Ts(nc);

                    Ttr trc = s_src->Tt(nc);
                    Ttr trp = s_src->Tt(np);

                    // printf("a=%d\n",nn); fflush(stdout);

                    if (trc._buf && trp._buf && PointInRange(n1, n2, nc)) {
                        // printf("p=%g\n",p); fflush(stdout);
                        gfx->Draw2ColorTraceTB(xp, _si, _sj, _nj, trp, xc, _si,
                                               _sj, _nj, trc, lx, rx, m_Gc, 1);
                        // printf("b=%d\n",nn); fflush(stdout);
                    }

                    nn++;

                    xp = xc;
                    np = nc;
                }
            }
        }
    }

    //    Drawing Wiggle

    double wg = m_Gw * m_Tw * m_Xs * xpmm;
    clp = m_Tw * m_Xs * xpmm * 10;

    int _fil = m_WFill;

    int _fc = m_WFcolor;
    int _wc = m_WLcolor;

    xp = x2fpix(s_src->Tp(n1));
    const int nextTrace = qMin(n1 + 1, s_src->Nt() - 1);
    xc = x2fpix(s_src->Tp(nextTrace));

    int desiredTraceSpacing = gfx->ScaleX(GfxStyle::HeaderAxisMinTickSpacing);
    const double tracePixelSpacing = fabs(xp - xc);
    int step = tracePixelSpacing > 0
                   ? qMax(1, qRound(desiredTraceSpacing / tracePixelSpacing))
                   : 1;
    if (step < 1)
        step = 1;

    if (m_DispWig) {
        int na = (nl / step) * step;

        for (o = 1, nc = na; nc <= nr; nc += step) {
            xc = x2pix(s_src->Tp(nc));

            Ttr trc = s_src->Tt(nc);

            if (trc._buf && PointInRange(n1, n2, nc))
                gfx->DrawWiggleTraceTB(xc, _si, _sj, _nj, trc, _fil, wg * step,
                                       clp * step, _fc, _wc);
            if (step > nr - nc)
                break;
        }
    }

    if (m_SelTr >= 0 && m_SelTr < s_src->Nt()) {
        int nc = m_SelTr;
        int color = m_SLcolor;

        Ttr trc = s_src->Tt(nc);
        xc = x2pix(s_src->Tp(nc));

        if (PointInRange(xa, xb, xc))
            gfx->DrawWiggleTraceTB(xc, _si, _sj, _nj, trc, 0, wg * step,
                                   clp * step, _fc, color);
    }

    if (!m_Tl || m_Ti <= 0)
        return;

    const double clipTime1 = pix2y(gfx->ClipY());
    const double clipTime2 =
        pix2y(gfx->ClipY() + gfx->ClipHeight() - 1);
    const double firstVisibleTime =
        qMax(m_Y1, qMin(clipTime1, clipTime2));
    const double lastVisibleTime =
        qMin(m_Y2, qMax(clipTime1, clipTime2));
    if (lastVisibleTime < firstVisibleTime)
        return;

    const int firstTick = qMax(
        0, static_cast<int>(ceil((firstVisibleTime - m_Y1) / m_Ti)));
    const int lastTick =
        static_cast<int>(floor((lastVisibleTime - m_Y1) / m_Ti));
    for (int tick = firstTick; tick <= lastTick; ++tick) {
        int s = y2pix(m_Y1 + tick * m_Ti);
        gfx->DrawHLine(s, L, R, 0, 0);
    }
}

//---------------------------------------------------------------------------

void GfxObjSeisSect::DoPreset()
{
    int nso, nsn;

    if (!s_src || !gfx) {
        _nj = 0;
        _presetClipY = -1;
        _presetClipHeight = -1;
        _preset = false;
        return;
    }

    double to = s_src->To();
    double si = s_src->Si();
    int ns = s_src->Ns();

    if (ns <= 0 || si <= 0) {
        _nj = 0;
        _presetClipY = gfx->ClipY();
        _presetClipHeight = gfx->ClipHeight();
        _preset = false;
        return;
    }

    nso = qBound(0, static_cast<int>((m_Y1 - to) / si), ns - 1);
    nsn = qBound(0, static_cast<int>((m_Y2 - to) / si), ns - 1);

    if (nso == nsn) {
        _nj = 0;
        _presetClipY = gfx->ClipY();
        _presetClipHeight = gfx->ClipHeight();
        _preset = false;
        return;
    }

    double ta = (nso * si) + to;
    double tb = (nsn * si) + to;

    int so = y2pix(ta);
    int sn = y2pix(tb);

    const int clipTop = gfx->ClipY();
    const int clipBottom = clipTop + gfx->ClipHeight() - 1;
    if (clipBottom < clipTop) {
        _nj = 0;
        _presetClipY = clipTop;
        _presetClipHeight = gfx->ClipHeight();
        _preset = false;
        return;
    }

    const int dataTop = qMin(so, sn);
    const int dataBottom = qMax(so, sn);
    const int firstY = qMax(dataTop, clipTop - 1);
    const int lastY = qMin(dataBottom, clipBottom + 1);
    if (lastY < firstY) {
        _nj = 0;
        _presetClipY = clipTop;
        _presetClipHeight = gfx->ClipHeight();
        _preset = false;
        return;
    }

    const int visibleRows = lastY - firstY + 1;
    if (visibleRows != _ns) {
        delete[] _si;
        delete[] _sj;
        _si = new int[visibleRows];
        _sj = new int[visibleRows];
        _ns = visibleRows;
    }

    const int pixelSpan = sn - so;
    const int sampleSpan = nsn - nso;
    for (int row = 0; row < visibleRows; ++row) {
        const int y = firstY + row;
        const double fraction =
            pixelSpan == 0 ? 0.0 : double(y - so) / pixelSpan;
        _si[row] = qBound(
            0, nso + qRound(fraction * sampleSpan), ns - 1);
        _sj[row] = y;
    }

    _nj = visibleRows;
    _presetClipY = clipTop;
    _presetClipHeight = gfx->ClipHeight();
    _preset = false;
}

//---------------------------------------------------------------------------

float GfxObjSeisSect::getSelMaxAmp()
{
    float a, amax = 0;
    int n;

    if (m_SelTr < 0 || s_src->Nt() < 1)
        return 0;

    int nc = m_SelTr;
    float *sc = s_src->Ts(nc);
    if (sc == NULL)
        return 0;

    for (n = 0; n < s_src->Ns(); n++) {
        a = fabs(sc[n]);
        if (amax < a)
            amax = a;
    }

    return amax;
}
