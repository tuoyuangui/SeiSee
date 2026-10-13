#include "exportdpimenustyle.h"

#include <QMenu>
#include <QPainter>
#include <QPainterPath>
#include <QStyleOptionMenuItem>

ExportDpiMenuStyle::ExportDpiMenuStyle(QObject *parent)
    : QProxyStyle()
{
    setParent(parent);
}

void ExportDpiMenuStyle::drawControl(ControlElement element,
                                     const QStyleOption *option,
                                     QPainter *painter,
                                     const QWidget *widget) const
{
    const auto *menuOption =
        element == CE_MenuItem
            ? qstyleoption_cast<const QStyleOptionMenuItem *>(option)
            : nullptr;
    if (!menuOption ||
        menuOption->checkType != QStyleOptionMenuItem::Exclusive ||
        !menuOption->checked) {
        QProxyStyle::drawControl(element, option, painter, widget);
        return;
    }

    QStyleOptionMenuItem itemWithoutCheck(*menuOption);
    itemWithoutCheck.checked = false;
    QProxyStyle::drawControl(element, &itemWithoutCheck, painter, widget);

    const int horizontalMargin =
        pixelMetric(PM_MenuHMargin, menuOption, widget);
    const int indicatorColumn =
        qMax(menuOption->maxIconWidth, menuOption->rect.height()) +
        2 * horizontalMargin;
    const QRect markerRect(menuOption->rect.left(), menuOption->rect.top(),
                           indicatorColumn, menuOption->rect.height());
    const qreal markSize = qMin(
        markerRect.height() * 0.52,
        qMax(12.0, menuOption->fontMetrics.height() * 0.7));
    const QPointF center = markerRect.center();
    QPainterPath checkMark;
    checkMark.moveTo(center.x() - markSize * 0.34,
                     center.y() + markSize * 0.01);
    checkMark.lineTo(center.x() - markSize * 0.1,
                     center.y() + markSize * 0.25);
    checkMark.lineTo(center.x() + markSize * 0.36,
                     center.y() - markSize * 0.27);

    const QColor color =
        menuOption->state & State_Selected
            ? menuOption->palette.color(QPalette::HighlightedText)
            : menuOption->palette.color(QPalette::Text);
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(QPen(color, qMax(2.0, markSize * 0.13), Qt::SolidLine,
                         Qt::RoundCap, Qt::RoundJoin));
    painter->setBrush(Qt::NoBrush);
    painter->drawPath(checkMark);
    painter->restore();
}

void ExportDpiMenuStyle::drawPrimitive(PrimitiveElement element,
                                       const QStyleOption *option,
                                       QPainter *painter,
                                       const QWidget *widget) const
{
    if ((element != PE_IndicatorArrowRight &&
         element != PE_IndicatorArrowLeft) ||
        !qobject_cast<const QMenu *>(widget)) {
        QProxyStyle::drawPrimitive(element, option, painter, widget);
        return;
    }

    const qreal arrowHeight = qMin(
        qMax<qreal>(10, option->rect.height() - 8),
        qMax<qreal>(10, option->fontMetrics.height() * 0.55));
    const qreal arrowWidth = arrowHeight * 0.55;
    const bool pointsRight = element == PE_IndicatorArrowRight;
    const qreal tipX = pointsRight ? option->rect.right()
                                   : option->rect.left();
    const qreal baseX = pointsRight ? tipX - arrowWidth
                                    : tipX + arrowWidth;
    const QRectF bounds(qMin(tipX, baseX),
                        option->rect.center().y() - arrowHeight / 2,
                        arrowWidth, arrowHeight);
    QPainterPath arrow;
    if (pointsRight) {
        arrow.moveTo(bounds.left(), bounds.top());
        arrow.lineTo(bounds.right(), bounds.center().y());
        arrow.lineTo(bounds.left(), bounds.bottom());
    } else {
        arrow.moveTo(bounds.right(), bounds.top());
        arrow.lineTo(bounds.left(), bounds.center().y());
        arrow.lineTo(bounds.right(), bounds.bottom());
    }
    arrow.closeSubpath();

    const QColor color =
        option->state & State_Enabled
            ? option->palette.color(
                  (option->state & State_Selected)
                      ? QPalette::HighlightedText
                      : QPalette::Text)
            : option->palette.color(QPalette::Disabled, QPalette::Text);
    painter->save();
    painter->setRenderHint(QPainter::Antialiasing, true);
    painter->setPen(Qt::NoPen);
    painter->setBrush(color);
    painter->drawPath(arrow);
    painter->restore();
}
