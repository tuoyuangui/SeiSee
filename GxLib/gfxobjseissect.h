#ifndef GFXOBJSEISSECT_H
#define GFXOBJSEISSECT_H

#include <QRect>
#include <QVector>
#include <QRgb>

#include "gfxobjseis.h"
#include "gfxsrcseis.h"

struct SeisSectionTraceSnapshot
{
    QVector<float> samples;
    int delay = 0;
};

struct SeisSectionCaptureSnapshot
{
    QRect visibleRect;
    QPoint targetPosition;
    int renderDpiX = 0;
    int renderDpiY = 0;
    qreal captureScaleX = 1.0;
    qreal captureScaleY = 1.0;
    int traceCount = 0;
    int sampleCount = 0;
    int firstTrace = 0;
    double traceOrigin = 0;
    double traceStep = 1;
    double timeOrigin = 0;
    double sampleInterval = 0;
    QVector<SeisSectionTraceSnapshot> traces;
    double xOrigin = 0;
    double yOrigin = 0;
    double x1 = 0;
    double x2 = 0;
    double xScale = 1;
    double y1 = 0;
    double y2 = 0;
    double yScale = 1;
    double pixelPerMillimeterX = 0;
    double pixelPerMillimeterY = 0;
    int selectedTrace = -1;
    double timeLineInterval = 0;
    bool showTimeLines = false;
    bool showWiggles = false;
    bool showColor = false;
    int wiggleFill = 0;
    QRgb selectedColor = Qt::blue;
    QRgb wiggleLineColor = Qt::black;
    QRgb wiggleFillColor = Qt::black;
    double colorGain = 1;
    double wiggleGain = 1;
    double traceWidth = 1;
    int wiggleRange = 10;
    int traceThinning = 1;
    bool trim = true;
    QList<QRgb> palette;
};

class GfxObjSeisSect : public GfxObjSeis
{
protected:
    int m_SelTr; // Selected trace index

    int *_si;
    int *_sj;
    int _nj;
    int _ns;
    int _presetClipY;
    int _presetClipHeight;
    bool m_highResolutionCapture;

    double m_Ti; // Increment for time lines
    bool m_Tl;   // Show Time Lines

public:
    GfxObjSeisSect(QObject *parent = 0);

    virtual ~GfxObjSeisSect();

    bool createCaptureSnapshot(const QRect &visibleRect,
                               const QPoint &targetPosition,
                               qreal captureScaleX,
                               qreal captureScaleY,
                               SeisSectionCaptureSnapshot *snapshot);
    static QImage renderCaptureSnapshot(
        const SeisSectionCaptureSnapshot &snapshot);

    virtual void DoDraw();
    virtual void DoPreset();

    void setTi(double v)
    {
        m_Ti = v;
        Update();
    }

    void setTl(double v)
    {
        m_Tl = v;
        Update();
    }

    bool Tl()
    {
        return m_Tl;
    }

    void setSelTr(int v)
    {
        m_SelTr = v;
        Update();
    }

    int selTr()
    {
        return m_SelTr;
    }

    float getSelMaxAmp();
};

#endif // GFXOBJSEISSECT_H
