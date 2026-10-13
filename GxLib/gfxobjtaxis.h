#ifndef GFXOBJTAXIS_H
#define GFXOBJTAXIS_H

#include "gfxobj.h"

class GfxObjTAxis : public GfxObj
{
protected:
    double m_Ti;
    bool m_rightSide;
    bool m_seconds;

    virtual void DoDraw();

public:
    GfxObjTAxis(QObject *parent = 0);

    void setRightSide(bool v)
    {
        m_rightSide = v;
        Update();
    }

    void setTi(double v)
    {
        m_Ti = v;
        Update();
    }

    void setTimeUnitSeconds(bool seconds)
    {
        if (m_seconds == seconds)
            return;

        m_seconds = seconds;
        Update();
    }

    bool timeUnitSeconds() const
    {
        return m_seconds;
    }

    double Ti()
    {
        return m_Ti;
    }

    int RequiredWidth() const;

    virtual double X1()
    {
        return 0;
    }
    virtual double X2()
    {
        return pix2x(gfx->W());
    }
};

#endif // GFXOBJTAXIS_H
