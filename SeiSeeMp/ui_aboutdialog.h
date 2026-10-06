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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_icon;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_title;
    QLabel *label_sub_title;
    QLabel *label_rev;
    QLabel *label_author;
    QLabel *label_ww;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(246, 219);
        verticalLayout = new QVBoxLayout(AboutDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_icon = new QLabel(AboutDialog);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setMinimumSize(QSize(64, 64));
        label_icon->setMaximumSize(QSize(64, 64));
        label_icon->setTextFormat(Qt::AutoText);
        label_icon->setPixmap(QPixmap(QString::fromUtf8(":/images/SeiSeeMp.png")));
        label_icon->setScaledContents(true);
        label_icon->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_icon);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        label_title = new QLabel(AboutDialog);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setLayoutDirection(Qt::LeftToRight);
        label_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_title);

        label_sub_title = new QLabel(AboutDialog);
        label_sub_title->setObjectName(QString::fromUtf8("label_sub_title"));
        label_sub_title->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_sub_title);

        label_rev = new QLabel(AboutDialog);
        label_rev->setObjectName(QString::fromUtf8("label_rev"));
        label_rev->setScaledContents(true);

        verticalLayout->addWidget(label_rev);

        label_author = new QLabel(AboutDialog);
        label_author->setObjectName(QString::fromUtf8("label_author"));

        verticalLayout->addWidget(label_author);

        label_ww = new QLabel(AboutDialog);
        label_ww->setObjectName(QString::fromUtf8("label_ww"));

        verticalLayout->addWidget(label_ww);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        buttonBox = new QDialogButtonBox(AboutDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About", nullptr));
        label_icon->setText(QString());
        label_title->setText(QCoreApplication::translate("AboutDialog", "SeiSee", nullptr));
        label_sub_title->setText(QCoreApplication::translate("AboutDialog", "A MultiPlatform SEG-Y Viewer", nullptr));
        label_rev->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\">Rev: </p></body></html>", nullptr));
        label_author->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\">Auther: Segrey Pavlukhin <span style=\" color:#0000ff;\">(psi@dmng.ru)</span></p></body></html>", nullptr));
        label_ww->setText(QCoreApplication::translate("AboutDialog", "<html><head/><body><p align=\"center\">Modify: Wang Wei <span style=\" color:#0000ff;\">(ww_geophy@126.com)</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
