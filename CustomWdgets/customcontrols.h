#ifndef CUSTOMCONTROLS_H
#define CUSTOMCONTROLS_H

#include <QCheckBox>
#include <QRadioButton>

class CustomCheckBox : public QCheckBox
{
    Q_OBJECT

public:
    explicit CustomCheckBox(QWidget *parent = nullptr);
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

protected:
    void paintEvent(QPaintEvent *event) override;
};

class CustomRadioButton : public QRadioButton
{
    Q_OBJECT

public:
    explicit CustomRadioButton(QWidget *parent = nullptr);
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;

protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // CUSTOMCONTROLS_H
