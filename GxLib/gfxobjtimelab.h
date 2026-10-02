#ifndef GFXOBJTIMELAB_H
#define GFXOBJTIMELAB_H

#include <QObject>
#include "gfxobj.h"
//#include "gfxview.h"

class GfxObjTimeLab : public GfxObj
{
protected:

    virtual void DoDraw();

public:

    GfxObjTimeLab(QObject *parent = 0);
    ~GfxObjTimeLab();

    void setTransparent();
};

#endif // GFXOBJTIMELAB_H
