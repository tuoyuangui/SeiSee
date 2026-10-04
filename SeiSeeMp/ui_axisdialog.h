/********************************************************************************
** Form generated from reading UI file 'axisdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AXISDIALOG_H
#define UI_AXISDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AxisDialog {
  public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QGroupBox *selHdrsBox;
    QGroupBox *groupBox_4;
    QPushButton *addBtn;
    QPushButton *delBtn;
    QPushButton *dellAllBtn;
    QPushButton *upBtn;
    QPushButton *downBtn;
    QGroupBox *aviHdrsBox;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *dTCbx;
    QLabel *label_2;
    QCheckBox *ckTimLines;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;
    QPushButton *applyButton;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AxisDialog)
    {
        if (AxisDialog->objectName().isEmpty())
            AxisDialog->setObjectName(QString::fromUtf8("AxisDialog"));
        AxisDialog->setWindowModality(Qt::ApplicationModal);
        AxisDialog->resize(698, 478);
        verticalLayout = new QVBoxLayout(AxisDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(AxisDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        selHdrsBox = new QGroupBox(groupBox_2);
        selHdrsBox->setObjectName(QString::fromUtf8("selHdrsBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(
            selHdrsBox->sizePolicy().hasHeightForWidth());
        selHdrsBox->setSizePolicy(sizePolicy);
        selHdrsBox->setMaximumSize(QSize(120, 16777215));

        horizontalLayout->addWidget(selHdrsBox);

        groupBox_4 = new QGroupBox(groupBox_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy.setHeightForWidth(
            groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMinimumSize(QSize(45, 0));
        addBtn = new QPushButton(groupBox_4);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(10, 40, 25, 25));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(addBtn->sizePolicy().hasHeightForWidth());
        addBtn->setSizePolicy(sizePolicy1);
        addBtn->setMinimumSize(QSize(25, 25));
        addBtn->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/ToLeft.png"), QSize(),
                     QIcon::Normal, QIcon::Off);
        addBtn->setIcon(icon);
        delBtn = new QPushButton(groupBox_4);
        delBtn->setObjectName(QString::fromUtf8("delBtn"));
        delBtn->setGeometry(QRect(10, 70, 25, 25));
        sizePolicy1.setHeightForWidth(delBtn->sizePolicy().hasHeightForWidth());
        delBtn->setSizePolicy(sizePolicy1);
        delBtn->setMinimumSize(QSize(25, 25));
        delBtn->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/ToRight.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        delBtn->setIcon(icon1);
        dellAllBtn = new QPushButton(groupBox_4);
        dellAllBtn->setObjectName(QString::fromUtf8("dellAllBtn"));
        dellAllBtn->setGeometry(QRect(10, 100, 25, 25));
        sizePolicy1.setHeightForWidth(
            dellAllBtn->sizePolicy().hasHeightForWidth());
        dellAllBtn->setSizePolicy(sizePolicy1);
        dellAllBtn->setMinimumSize(QSize(25, 25));
        dellAllBtn->setMaximumSize(QSize(25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/ToLeftAll.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        dellAllBtn->setIcon(icon2);
        upBtn = new QPushButton(groupBox_4);
        upBtn->setObjectName(QString::fromUtf8("upBtn"));
        upBtn->setGeometry(QRect(10, 140, 25, 25));
        sizePolicy1.setHeightForWidth(upBtn->sizePolicy().hasHeightForWidth());
        upBtn->setSizePolicy(sizePolicy1);
        upBtn->setMinimumSize(QSize(25, 25));
        upBtn->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/ToUp.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        upBtn->setIcon(icon3);
        downBtn = new QPushButton(groupBox_4);
        downBtn->setObjectName(QString::fromUtf8("downBtn"));
        downBtn->setGeometry(QRect(10, 170, 25, 25));
        sizePolicy1.setHeightForWidth(
            downBtn->sizePolicy().hasHeightForWidth());
        downBtn->setSizePolicy(sizePolicy1);
        downBtn->setMinimumSize(QSize(25, 25));
        downBtn->setMaximumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/ToDn.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        downBtn->setIcon(icon4);

        horizontalLayout->addWidget(groupBox_4);

        aviHdrsBox = new QGroupBox(groupBox_2);
        aviHdrsBox->setObjectName(QString::fromUtf8("aviHdrsBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(
            aviHdrsBox->sizePolicy().hasHeightForWidth());
        aviHdrsBox->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(aviHdrsBox);

        verticalLayout_5->addWidget(groupBox_2);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 47, 13));
        dTCbx = new QComboBox(groupBox);
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->addItem(QString());
        dTCbx->setObjectName(QString::fromUtf8("dTCbx"));
        dTCbx->setGeometry(QRect(70, 30, 141, 22));
        dTCbx->setEditable(true);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 47, 13));
        ckTimLines = new QCheckBox(groupBox);
        ckTimLines->setObjectName(QString::fromUtf8("ckTimLines"));
        ckTimLines->setGeometry(QRect(20, 70, 191, 17));

        verticalLayout_2->addWidget(groupBox);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        groupBox_3 = new QGroupBox(AxisDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(
            groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(
            QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(203, 20, QSizePolicy::Expanding,
                                           QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okButton = new QPushButton(groupBox_3);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);

        applyButton = new QPushButton(groupBox_3);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_2->addWidget(applyButton);

        closeButton = new QPushButton(groupBox_3);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_2->addWidget(closeButton);

        horizontalSpacer_2 = new QSpacerItem(202, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout->addWidget(groupBox_3);

        retranslateUi(AxisDialog);

        tabWidget->setCurrentIndex(0);
        dTCbx->setCurrentIndex(4);

        QMetaObject::connectSlotsByName(AxisDialog);
    } // setupUi

    void retranslateUi(QDialog *AxisDialog)
    {
        AxisDialog->setWindowTitle(
            QCoreApplication::translate("AxisDialog", "Axes Setup", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate(
            "AxisDialog", "Trace Header Axis", nullptr));
        selHdrsBox->setTitle(QCoreApplication::translate(
            "AxisDialog", "Selected Headers", nullptr));
        groupBox_4->setTitle(QString());
        addBtn->setText(QString());
        delBtn->setText(QString());
        dellAllBtn->setText(QString());
        upBtn->setText(QString());
        downBtn->setText(QString());
        aviHdrsBox->setTitle(QCoreApplication::translate(
            "AxisDialog", "Available Headers", nullptr));
        tabWidget->setTabText(
            tabWidget->indexOf(tab),
            QCoreApplication::translate("AxisDialog", "Header Axis", nullptr));
        groupBox->setTitle(
            QCoreApplication::translate("AxisDialog", "Time Axis", nullptr));
        label->setText(
            QCoreApplication::translate("AxisDialog", "Axis Step", nullptr));
        dTCbx->setItemText(
            0, QCoreApplication::translate("AxisDialog", "10", nullptr));
        dTCbx->setItemText(
            1, QCoreApplication::translate("AxisDialog", "20", nullptr));
        dTCbx->setItemText(
            2, QCoreApplication::translate("AxisDialog", "25", nullptr));
        dTCbx->setItemText(
            3, QCoreApplication::translate("AxisDialog", "50", nullptr));
        dTCbx->setItemText(
            4, QCoreApplication::translate("AxisDialog", "100", nullptr));
        dTCbx->setItemText(
            5, QCoreApplication::translate("AxisDialog", "200", nullptr));
        dTCbx->setItemText(
            6, QCoreApplication::translate("AxisDialog", "500", nullptr));
        dTCbx->setItemText(
            7, QCoreApplication::translate("AxisDialog", "1000", nullptr));
        dTCbx->setItemText(
            8, QCoreApplication::translate("AxisDialog", "2000", nullptr));
        dTCbx->setItemText(
            9, QCoreApplication::translate("AxisDialog", "5000", nullptr));
        dTCbx->setItemText(
            10, QCoreApplication::translate("AxisDialog", "New Item", nullptr));

        label_2->setText(
            QCoreApplication::translate("AxisDialog", "Axis Step", nullptr));
        ckTimLines->setText(QCoreApplication::translate(
            "AxisDialog", "Show time lines", nullptr));
        tabWidget->setTabText(
            tabWidget->indexOf(tab_2),
            QCoreApplication::translate("AxisDialog", "Time Axis", nullptr));
        groupBox_3->setTitle(QString());
        okButton->setText(
            QCoreApplication::translate("AxisDialog", "OK", nullptr));
        applyButton->setText(
            QCoreApplication::translate("AxisDialog", "Apply", nullptr));
        closeButton->setText(
            QCoreApplication::translate("AxisDialog", "Close", nullptr));
    } // retranslateUi
};

namespace Ui {
class AxisDialog : public Ui_AxisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AXISDIALOG_H
