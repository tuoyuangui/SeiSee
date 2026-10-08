#include "dpiindicatorstyle.h"

#include <QApplication>
#include <QPainter>
#include <QPainterPath>
#include <QMenu>
#include <QPalette>
#include <QProxyStyle>
#include <QStyleOption>
#include <QStyleOptionButton>
#include <QStyleOptionMenuItem>
#include <QStyleOptionViewItem>

#include "gfxstyle.h"

namespace {

class DpiIndicatorStyle final : public QProxyStyle
{
public:
    explicit DpiIndicatorStyle(const QString &baseStyleName)
        : QProxyStyle(baseStyleName)
    {
    }

    int pixelMetric(PixelMetric metric, const QStyleOption *option,
                    const QWidget *widget) const override
    {
        const int nativeMetric =
            QProxyStyle::pixelMetric(metric, option, widget);
        const int fontHeight =
            option ? option->fontMetrics.height()
                   : (widget ? widget->fontMetrics().height() : 0);
        const int menuIndicatorSize =
            qMax(GfxStyle::RadioButtonIndicatorSize,
                 qRound(fontHeight * 0.9));
        switch (metric) {
        case PM_IndicatorWidth:
        case PM_IndicatorHeight:
            return qMax(nativeMetric,
                        qMax(GfxStyle::CheckBoxIndicatorSize,
                             menuIndicatorSize));
        case PM_ExclusiveIndicatorWidth:
        case PM_ExclusiveIndicatorHeight:
            return qMax(nativeMetric, menuIndicatorSize);
        case PM_MenuButtonIndicator:
            return qobject_cast<const QMenu *>(widget)
                       ? qMax(nativeMetric, menuIndicatorSize)
                       : nativeMetric;
        default:
            return nativeMetric;
        }
    }

    QRect subElementRect(SubElement element, const QStyleOption *option,
                         const QWidget *widget) const override
    {
        const bool checkBox = element == SE_CheckBoxIndicator;
        const bool radioButton = element == SE_RadioButtonIndicator;
        if (checkBox || radioButton) {
            const PixelMetric widthMetric =
                checkBox ? PM_IndicatorWidth : PM_ExclusiveIndicatorWidth;
            const PixelMetric heightMetric =
                checkBox ? PM_IndicatorHeight : PM_ExclusiveIndicatorHeight;
            const QSize indicatorSize(pixelMetric(widthMetric, option, widget),
                                      pixelMetric(heightMetric, option, widget));
            const QRect logicalRect(
                option->rect.left(),
                option->rect.center().y() - indicatorSize.height() / 2,
                indicatorSize.width(), indicatorSize.height());
            return visualRect(option->direction, option->rect, logicalRect);
        }

        const bool checkBoxContents = element == SE_CheckBoxContents;
        const bool radioButtonContents = element == SE_RadioButtonContents;
        if (checkBoxContents || radioButtonContents) {
            const PixelMetric widthMetric =
                checkBoxContents ? PM_IndicatorWidth
                                 : PM_ExclusiveIndicatorWidth;
            const int nativeWidth =
                baseStyle()->pixelMetric(widthMetric, option, widget);
            const int addedWidth =
                qMax(0, pixelMetric(widthMetric, option, widget) - nativeWidth);
            QRect contents =
                baseStyle()->subElementRect(element, option, widget);
            if (option->direction == Qt::LeftToRight)
                contents.adjust(addedWidth, 0, 0, 0);
            else
                contents.adjust(0, 0, -addedWidth, 0);
            return contents;
        }

        if (element == SE_ItemViewItemCheckIndicator) {
            QRect indicator =
                baseStyle()->subElementRect(element, option, widget);
            const QPoint center = indicator.center();
            indicator.setSize(QSize(
                qMax(indicator.width(), GfxStyle::CheckBoxIndicatorSize),
                qMax(indicator.height(), GfxStyle::CheckBoxIndicatorSize)));
            indicator.moveCenter(center);
            return indicator;
        }

        return QProxyStyle::subElementRect(element, option, widget);
    }

    QSize sizeFromContents(ContentsType type, const QStyleOption *option,
                           const QSize &contentsSize,
                           const QWidget *widget) const override
    {
        QSize size = QProxyStyle::sizeFromContents(
            type, option, contentsSize, widget);
        const bool checkBox = type == CT_CheckBox;
        const bool radioButton = type == CT_RadioButton;
        if (!checkBox && !radioButton)
            return size;

        const PixelMetric widthMetric =
            checkBox ? PM_IndicatorWidth : PM_ExclusiveIndicatorWidth;
        const PixelMetric heightMetric =
            checkBox ? PM_IndicatorHeight : PM_ExclusiveIndicatorHeight;
        const int nativeWidth =
            QProxyStyle::pixelMetric(widthMetric, option, widget);
        const int indicatorWidth = pixelMetric(widthMetric, option, widget);
        const int indicatorHeight = pixelMetric(heightMetric, option, widget);

        size.rwidth() += qMax(0, indicatorWidth - nativeWidth);
        size.setHeight(qMax(size.height(), indicatorHeight));
        return size;
    }

    void drawControl(ControlElement element, const QStyleOption *option,
                     QPainter *painter,
                     const QWidget *widget) const override
    {
        if (element == CE_MenuItem) {
            const QStyleOptionMenuItem *menuOption =
                qstyleoption_cast<const QStyleOptionMenuItem *>(option);
            QProxyStyle::drawControl(element, option, painter, widget);
            if (menuOption &&
                menuOption->checkType == QStyleOptionMenuItem::Exclusive &&
                menuOption->checked) {
                const int menuHorizontalMargin =
                    pixelMetric(PM_MenuHMargin, menuOption, widget);
                const int indicatorColumn =
                    qMax(menuOption->maxIconWidth, menuOption->rect.height()) +
                    2 * menuHorizontalMargin;
                const QRect markerRect(
                    menuOption->rect.left(), menuOption->rect.top(),
                    indicatorColumn, menuOption->rect.height());

                const QColor markerColor =
                    menuOption->state & State_Selected
                        ? menuOption->palette.color(
                              QPalette::HighlightedText)
                        : menuOption->palette.color(QPalette::Text);
                const QPalette::ColorRole backgroundRole =
                    menuOption->state & State_Selected
                        ? QPalette::Highlight
                        : QPalette::Button;

                painter->save();
                painter->setRenderHint(QPainter::Antialiasing, true);
                painter->setPen(Qt::NoPen);
                painter->setBrush(menuOption->palette.color(
                    QPalette::Active, backgroundRole));
                painter->drawRect(markerRect);

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
                painter->setPen(QPen(markerColor, qMax(2.0, markSize * 0.13),
                                     Qt::SolidLine, Qt::RoundCap,
                                     Qt::RoundJoin));
                painter->setBrush(Qt::NoBrush);
                painter->drawPath(checkMark);
                painter->restore();
            }
            return;
        }

        if (element == CE_ItemViewItem) {
            const QStyleOptionViewItem *itemOption =
                qstyleoption_cast<const QStyleOptionViewItem *>(option);
            if (!itemOption ||
                !(itemOption->features & QStyleOptionViewItem::HasCheckIndicator)) {
                QProxyStyle::drawControl(element, option, painter, widget);
                return;
            }

            QStyleOptionViewItem itemWithoutCheck(*itemOption);
            itemWithoutCheck.features &=
                ~QStyleOptionViewItem::HasCheckIndicator;
            QProxyStyle::drawControl(element, &itemWithoutCheck, painter,
                                     widget);

            QStyleOptionButton indicatorOption;
            indicatorOption.QStyleOption::operator=(*itemOption);
            if (itemOption->checkState == Qt::Checked)
                indicatorOption.state |= State_On;
            else if (itemOption->checkState == Qt::PartiallyChecked)
                indicatorOption.state |= State_NoChange;
            else
                indicatorOption.state &= ~(State_On | State_NoChange);

            const QRect indicator =
                subElementRect(SE_ItemViewItemCheckIndicator, itemOption,
                               widget);
            drawIndicator(true, &indicatorOption, indicator, painter);
            return;
        }

        const bool checkBox = element == CE_CheckBox;
        const bool radioButton = element == CE_RadioButton;
        if (!checkBox && !radioButton) {
            QProxyStyle::drawControl(element, option, painter, widget);
            return;
        }

        const QStyleOptionButton *buttonOption =
            qstyleoption_cast<const QStyleOptionButton *>(option);
        if (!buttonOption) {
            QProxyStyle::drawControl(element, option, painter, widget);
            return;
        }

        const SubElement indicatorElement =
            checkBox ? SE_CheckBoxIndicator : SE_RadioButtonIndicator;
        const QRect indicator = subElementRect(indicatorElement, option, widget);
        drawIndicator(checkBox, buttonOption, indicator, painter);
        drawLabel(buttonOption, indicator, painter, widget);

        if (buttonOption->state & State_HasFocus) {
            QStyleOptionFocusRect focusOption;
            focusOption.QStyleOption::operator=(*buttonOption);
            focusOption.rect = buttonOption->rect.adjusted(
                1, 1, -1, -1);
            focusOption.backgroundColor =
                buttonOption->palette.color(QPalette::Window);
            QProxyStyle::drawPrimitive(PE_FrameFocusRect, &focusOption,
                                       painter, widget);
        }
    }

    void drawPrimitive(PrimitiveElement element, const QStyleOption *option,
                       QPainter *painter,
                       const QWidget *widget) const override
    {
        if (element == PE_IndicatorItemViewItemCheck) {
            drawIndicator(true, option, option->rect, painter);
            return;
        }

        if ((element == PE_IndicatorArrowRight ||
             element == PE_IndicatorArrowLeft) &&
            qobject_cast<const QMenu *>(widget)) {
            const QColor arrowColor =
                option->state & State_Enabled
                    ? option->palette.color(
                          (option->state & State_MouseOver)
                              ? QPalette::HighlightedText
                              : QPalette::Text)
                    : option->palette.color(QPalette::Disabled,
                                            QPalette::Text);
            const qreal targetHeight =
                qMax<qreal>(
                    1, qMax<qreal>(option->rect.height() - 4,
                                   option->fontMetrics.height() * 0.62));
            const qreal targetWidth =
                qMax<qreal>(option->rect.width() - 4, targetHeight * 0.55);
            const qreal centerX =
                element == PE_IndicatorArrowRight
                    ? option->rect.right() - targetWidth / 2.0
                    : option->rect.left() + targetWidth / 2.0;
            const QRectF bounds(centerX - targetWidth / 2.0,
                                option->rect.center().y() - targetHeight / 2.0,
                                targetWidth, targetHeight);
            if (bounds.width() > 0 && bounds.height() > 0) {
                QPainterPath arrow;
                if (element == PE_IndicatorArrowRight) {
                    arrow.moveTo(bounds.left(), bounds.top());
                    arrow.lineTo(bounds.right(), bounds.center().y());
                    arrow.lineTo(bounds.left(), bounds.bottom());
                } else {
                    arrow.moveTo(bounds.right(), bounds.top());
                    arrow.lineTo(bounds.left(), bounds.center().y());
                    arrow.lineTo(bounds.right(), bounds.bottom());
                }
                arrow.closeSubpath();

                painter->save();
                painter->setRenderHint(QPainter::Antialiasing, true);
                painter->setPen(Qt::NoPen);
                painter->setBrush(arrowColor);
                painter->drawPath(arrow);
                painter->restore();
            }
            return;
        }

        QProxyStyle::drawPrimitive(element, option, painter, widget);
    }

private:
    void drawIndicator(bool checkBox, const QStyleOption *option,
                       const QRect &rect, QPainter *painter) const
    {
        const bool enabled = option->state & State_Enabled;
        const bool checked = option->state & State_On;
        const bool mixed = option->state & State_NoChange;
        const bool hovered = option->state & State_MouseOver;
        const QPalette::ColorGroup group =
            enabled ? QPalette::Active : QPalette::Disabled;
        const QPalette &palette = option->palette;

        painter->save();
        painter->setRenderHint(QPainter::Antialiasing, true);

        if (checkBox) {
            QColor border = palette.color(group, QPalette::Mid);
            if (hovered && enabled)
                border = palette.color(group, QPalette::Highlight);

            painter->setPen(QPen(border, 1.2));
            painter->setBrush(checked
                                  ? palette.color(group, QPalette::Highlight)
                                  : palette.color(group, QPalette::Base));
            painter->drawRoundedRect(QRectF(rect).adjusted(
                                         0.6, 0.6, -0.6, -0.6),
                                     2, 2);

            if (checked) {
                QPainterPath mark;
                mark.moveTo(rect.left() + rect.width() * 0.22,
                            rect.top() + rect.height() * 0.52);
                mark.lineTo(rect.left() + rect.width() * 0.43,
                            rect.top() + rect.height() * 0.72);
                mark.lineTo(rect.left() + rect.width() * 0.79,
                            rect.top() + rect.height() * 0.30);
                painter->setPen(QPen(
                    palette.color(group, QPalette::HighlightedText),
                    1.8, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
                painter->setBrush(Qt::NoBrush);
                painter->drawPath(mark);
            } else if (mixed) {
                painter->setPen(Qt::NoPen);
                painter->setBrush(
                    palette.color(group, QPalette::HighlightedText));
                painter->drawRoundedRect(
                    QRectF(rect).adjusted(rect.width() * 0.24,
                                          rect.height() * 0.43,
                                          -rect.width() * 0.24,
                                          -rect.height() * 0.43),
                    1, 1);
            }
        } else {
            QColor border = palette.color(group, QPalette::Mid);
            if (hovered && enabled)
                border = palette.color(group, QPalette::Highlight);

            painter->setPen(QPen(border, 1.2));
            painter->setBrush(palette.color(group, QPalette::Base));
            const QRectF outerRect = QRectF(rect).adjusted(
                0.6, 0.6, -0.6, -0.6);
            painter->drawEllipse(outerRect);
            if (checked) {
                const QPointF center = outerRect.center();
                const qreal dotDiameter =
                    qMin(outerRect.width(), outerRect.height()) * 0.5;
                const QRectF dot(center.x() - dotDiameter / 2,
                                 center.y() - dotDiameter / 2,
                                 dotDiameter, dotDiameter);
                painter->setPen(Qt::NoPen);
                painter->setBrush(
                    palette.color(group, QPalette::Highlight));
                painter->drawEllipse(dot);
            }
        }

        painter->restore();
    }

    void drawLabel(const QStyleOptionButton *option, const QRect &indicator,
                   QPainter *painter,
                   const QWidget *widget) const
    {
        QRect labelRect = option->rect;
        const int gap = qMax(
            GfxStyle::CheckIndicatorLabelSpacing,
            pixelMetric(PM_CheckBoxLabelSpacing, option, widget));
        if (option->direction == Qt::LeftToRight)
            labelRect.setLeft(indicator.right() + 1 + gap);
        else
            labelRect.setRight(indicator.left() - 1 - gap);

        if (!option->icon.isNull()) {
            const QSize iconSize = option->iconSize;
            QRect iconRect(QPoint(), iconSize);
            iconRect.moveTop(option->rect.center().y() - iconSize.height() / 2);
            if (option->direction == Qt::LeftToRight) {
                iconRect.moveLeft(labelRect.left());
                labelRect.setLeft(iconRect.right() + gap);
            } else {
                iconRect.moveRight(labelRect.right());
                labelRect.setRight(iconRect.left() - gap);
            }
            const QIcon::Mode mode =
                option->state & State_Enabled ? QIcon::Normal : QIcon::Disabled;
            const QIcon::State state =
                option->state & State_On ? QIcon::On : QIcon::Off;
            option->icon.paint(painter, iconRect, Qt::AlignCenter, mode, state);
        }

        const int alignment = option->direction == Qt::LeftToRight
                                  ? Qt::AlignLeft
                                  : Qt::AlignRight;
        const int mnemonicFlag =
            styleHint(SH_UnderlineShortcut, option, widget)
                ? Qt::TextShowMnemonic
                : Qt::TextHideMnemonic;
        const int textFlags =
            alignment | Qt::AlignVCenter | mnemonicFlag;
        drawItemText(painter, labelRect, textFlags, option->palette,
                     option->state & State_Enabled, option->text,
                     QPalette::WindowText);
    }
};

} // namespace

void installDpiIndicatorStyle(QApplication *application)
{
    if (!application)
        return;

    const QString baseStyleName = application->style()->objectName();
    application->setStyle(new DpiIndicatorStyle(baseStyleName));
}
