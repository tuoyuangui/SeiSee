/********************************************************************************
** Form generated from reading UI file 'procparmdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCPARMDIALOG_H
#define UI_PROCPARMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProcParmDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *edF1;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *edF2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *edF3;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *edF4;
    QLabel *label_9;
    QCheckBox *ckFilt;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_10;
    QLineEdit *edAgcw;
    QLabel *label_11;
    QVBoxLayout *verticalLayout;
    QCheckBox *ckAgc;
    QCheckBox *ckNorm;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *okButton;
    QPushButton *applyButton;
    QPushButton *closeButton;

    void setupUi(QDialog *ProcParmDialog)
    {
        if (ProcParmDialog->objectName().isEmpty())
            ProcParmDialog->setObjectName(QString::fromUtf8("ProcParmDialog"));
        ProcParmDialog->resize(335, 345);
        ProcParmDialog->setMaximumSize(QSize(360, 345));
        ProcParmDialog->setModal(true);
        verticalLayout_4 = new QVBoxLayout(ProcParmDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox = new QGroupBox(ProcParmDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_14 = new QHBoxLayout(groupBox);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Filt.png")));

        horizontalLayout_14->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        edF1 = new QLineEdit(groupBox);
        edF1->setObjectName(QString::fromUtf8("edF1"));

        horizontalLayout->addWidget(edF1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QFont font1;
        font1.setPointSize(8);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        edF2 = new QLineEdit(groupBox);
        edF2->setObjectName(QString::fromUtf8("edF2"));

        horizontalLayout_2->addWidget(edF2);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        horizontalLayout_3->addWidget(label_6);

        edF3 = new QLineEdit(groupBox);
        edF3->setObjectName(QString::fromUtf8("edF3"));

        horizontalLayout_3->addWidget(edF3);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout_4->addWidget(label_8);

        edF4 = new QLineEdit(groupBox);
        edF4->setObjectName(QString::fromUtf8("edF4"));

        horizontalLayout_4->addWidget(edF4);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        horizontalLayout_4->addWidget(label_9);


        verticalLayout_2->addLayout(horizontalLayout_4);

        ckFilt = new QCheckBox(groupBox);
        ckFilt->setObjectName(QString::fromUtf8("ckFilt"));

        verticalLayout_2->addWidget(ckFilt);


        horizontalLayout_14->addLayout(verticalLayout_2);


        verticalLayout_4->addWidget(groupBox);

        groupBox_2 = new QGroupBox(ProcParmDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_15 = new QHBoxLayout(groupBox_2);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font1);

        horizontalLayout_15->addWidget(label_10);

        edAgcw = new QLineEdit(groupBox_2);
        edAgcw->setObjectName(QString::fromUtf8("edAgcw"));
        edAgcw->setMinimumSize(QSize(72, 0));

        horizontalLayout_15->addWidget(edAgcw);

        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        horizontalLayout_15->addWidget(label_11);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        ckAgc = new QCheckBox(groupBox_2);
        ckAgc->setObjectName(QString::fromUtf8("ckAgc"));

        verticalLayout->addWidget(ckAgc);

        ckNorm = new QCheckBox(groupBox_2);
        ckNorm->setObjectName(QString::fromUtf8("ckNorm"));

        verticalLayout->addWidget(ckNorm);


        horizontalLayout_15->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(ProcParmDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        okButton = new QPushButton(groupBox_3);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_7->addWidget(okButton);

        applyButton = new QPushButton(groupBox_3);
        applyButton->setObjectName(QString::fromUtf8("applyButton"));

        horizontalLayout_7->addWidget(applyButton);

        closeButton = new QPushButton(groupBox_3);
        closeButton->setObjectName(QString::fromUtf8("closeButton"));

        horizontalLayout_7->addWidget(closeButton);


        verticalLayout_3->addLayout(horizontalLayout_7);


        verticalLayout_4->addWidget(groupBox_3);


        retranslateUi(ProcParmDialog);

        QMetaObject::connectSlotsByName(ProcParmDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcParmDialog)
    {
        ProcParmDialog->setWindowTitle(QCoreApplication::translate("ProcParmDialog", "Processing Parameters", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ProcParmDialog", "Band Pass Filter", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("ProcParmDialog", "F1", nullptr));
        label_3->setText(QCoreApplication::translate("ProcParmDialog", "Hz", nullptr));
        label_4->setText(QCoreApplication::translate("ProcParmDialog", "F2", nullptr));
        label_5->setText(QCoreApplication::translate("ProcParmDialog", "Hz", nullptr));
        label_6->setText(QCoreApplication::translate("ProcParmDialog", "F3", nullptr));
        label_7->setText(QCoreApplication::translate("ProcParmDialog", "Hz", nullptr));
        label_8->setText(QCoreApplication::translate("ProcParmDialog", "F4", nullptr));
        label_9->setText(QCoreApplication::translate("ProcParmDialog", "Hz", nullptr));
        ckFilt->setText(QCoreApplication::translate("ProcParmDialog", "Use Filter", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ProcParmDialog", "Automatic Gain Control", nullptr));
        label_10->setText(QCoreApplication::translate("ProcParmDialog", "Window Length", nullptr));
        label_11->setText(QCoreApplication::translate("ProcParmDialog", "ms", nullptr));
        ckAgc->setText(QCoreApplication::translate("ProcParmDialog", "Use AGC", nullptr));
        ckNorm->setText(QCoreApplication::translate("ProcParmDialog", "Use Normalization", nullptr));
        groupBox_3->setTitle(QString());
        okButton->setText(QCoreApplication::translate("ProcParmDialog", "OK", nullptr));
        applyButton->setText(QCoreApplication::translate("ProcParmDialog", "Apply", nullptr));
        closeButton->setText(QCoreApplication::translate("ProcParmDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcParmDialog: public Ui_ProcParmDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCPARMDIALOG_H
