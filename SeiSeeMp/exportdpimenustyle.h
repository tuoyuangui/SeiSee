#ifndef EXPORTDPIMENUSTYLE_H
#define EXPORTDPIMENUSTYLE_H

#include <QProxyStyle>

class ExportDpiMenuStyle final : public QProxyStyle
{
public:
    explicit ExportDpiMenuStyle(QObject *parent = nullptr);

    void drawControl(ControlElement element, const QStyleOption *option,
                     QPainter *painter,
                     const QWidget *widget = nullptr) const override;
    void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                       QPainter *painter,
                       const QWidget *widget = nullptr) const override;
};

#endif // EXPORTDPIMENUSTYLE_H
