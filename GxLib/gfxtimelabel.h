#ifndef GFXTIMELABEL_H
#define GFXTIMELABEL_H

#include <QColor>
#include <QFont>
#include <QPixmap>
#include <QWidget>

class GfxTimeLabel : public QWidget
{
public:
    explicit GfxTimeLabel(QWidget *parent = nullptr);

    void SetFontSize(int size);
    void SetText(const QString &text);
    void refreshSize();
    int rotatedTextWidth() const;
    void setCaptureScale(qreal scale);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    void updateTextPixmap();

    QFont m_font;
    QString m_text;
    QPixmap m_rotatedTextPixmap;
    QFont m_cachedFont;
    QColor m_cachedColor;
    QSize m_cachedTextSize;
    qreal m_cachedPixelRatio = 0.0;
    qreal m_captureScale = 0.0;
};

#endif // GFXTIMELABEL_H
