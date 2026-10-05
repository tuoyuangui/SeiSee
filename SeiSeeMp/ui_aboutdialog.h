/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_rev;
    QLabel *label;
    QLabel *label_ww;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        label_2 = new QLabel(AboutDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(48, 48));
        label_2->setMaximumSize(QSize(48, 48));
        label_2->setTextFormat(Qt::AutoText);
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/SeiSeeMp.png")));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(AboutDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        verticalLayout->addLayout(horizontalLayout);

        label_rev = new QLabel(AboutDialog);
        label_rev->setObjectName(QString::fromUtf8("label_rev"));
        label_rev->setScaledContents(true);

        verticalLayout->addWidget(label_rev);

        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_ww = new QLabel(AboutDialog);
        label_ww->setObjectName(QString::fromUtf8("label_ww"));

        verticalLayout->addWidget(label_ww);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog,
                         SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog,
                         SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(
            QCoreApplication::translate("AboutDialog", "About", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate(
            "AboutDialog",
            "<html><head/><body><p align=\"center\"><span style=\" "
            "font-weight:600; color:#00007f;\">SeiSee</span></p><p "
            "align=\"center\"><span style=\" font-weight:600; "
            "color:#00007f;\">MultiPlatform</span></p><p "
            "align=\"center\"><span "
            "style=\" font-weight:600; color:#00007f;\">SEG-Y "
            "Viewer</span></p></body></html>",
            nullptr));
        label_rev->setText(QCoreApplication::translate(
            "AboutDialog",
            "<html><head/><body><p align=\"center\">Rev: </p></body></html>",
            nullptr));
        label->setText(QCoreApplication::translate(
            "AboutDialog",
            "<html><head/><body><p align=\"center\">Auther: Segrey Pavlukhin "
            "<span "
            "style=\" color:#0000ff;\">(psi@dmng.ru)</span></p></body></html>",
            nullptr));
        label_ww->setText(QCoreApplication::translate(
            "AboutDialog",
            "<html><head/><body><p align=\"center\">Modify: Wang Wei <span "
            "style=\" "
            "color:#0000ff;\">(ww_geophy@126.com)</span></p></body></html>",
            nullptr));
    } // retranslateUi
};

namespace Ui {
    class AboutDialog : public Ui_AboutDialog
    {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
