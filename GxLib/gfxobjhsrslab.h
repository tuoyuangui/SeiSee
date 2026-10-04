#ifndef GFXOBJHSRSLAB_H
#define GFXOBJHSRSLAB_H

#include "gfxobj.h"
#include "gfxview.h"
#include <QList>
#include <QObject>

class GfxObjHsrsLab : public GfxObj {
  protected:
    QList<QString> m_hdrs;

    virtual void DoDraw();

  public:
    GfxObjHsrsLab(QObject *parent = 0);
    ~GfxObjHsrsLab();

    int TextStartX() const;

    void setHdrList(QList<QString> v);
};

#endif // GFXOBJHSRSLAB_H
