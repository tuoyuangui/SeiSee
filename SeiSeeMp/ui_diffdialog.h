/********************************************************************************
** Form generated from reading UI file 'diffdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFDIALOG_H
#define UI_DIFFDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DiffDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLineEdit *pathFile;
    QToolButton *btnOpenFileIn;
    QLabel *label_9;
    QLineEdit *pathFile2;
    QToolButton *btnOpenFileIn2;
    QLabel *label_10;
    QLineEdit *pathFileOutput;
    QToolButton *btnOpenFileOut;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabNumExp;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *ckTrAll;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *edIdx;
    QLabel *label_3;
    QLineEdit *edTrMin;
    QToolButton *btnTrMin;
    QLabel *label_4;
    QLineEdit *edTrMax;
    QToolButton *btnTrMax;
    QLabel *label_5;
    QLineEdit *edTrStp;
    QToolButton *btnTrStp;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *EcBox;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btnHexp;
    QPushButton *btnNexp;
    QPushButton *btnLexp;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btnClrExp;
    QSpacerItem *horizontalSpacer_13;
    QPlainTextEdit *txtExp;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *ckTmAll;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QLineEdit *edTmMin;
    QToolButton *btnTmMin;
    QLabel *label_7;
    QLineEdit *edTmMax;
    QToolButton *btnTmMax;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QComboBox *cbFormat;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnSave;
    QToolButton *btnClose;
    QProgressBar *progressBar;
    QLineEdit *edMess;

    void setupUi(QDialog *DiffDialog)
    {
        if (DiffDialog->objectName().isEmpty())
            DiffDialog->setObjectName(QString::fromUtf8("DiffDialog"));
        DiffDialog->resize(661, 720);
        verticalLayout_7 = new QVBoxLayout(DiffDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_2 = new QGroupBox(DiffDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(8);
        label->setFont(font);

        gridLayout_3->addWidget(label, 0, 0, 1, 1);

        pathFile = new QLineEdit(groupBox_2);
        pathFile->setObjectName(QString::fromUtf8("pathFile"));
        pathFile->setEnabled(false);

        gridLayout_3->addWidget(pathFile, 0, 1, 1, 1);

        btnOpenFileIn = new QToolButton(groupBox_2);
        btnOpenFileIn->setObjectName(QString::fromUtf8("btnOpenFileIn"));
        btnOpenFileIn->setEnabled(false);
        btnOpenFileIn->setMinimumSize(QSize(30, 0));

        gridLayout_3->addWidget(btnOpenFileIn, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        pathFile2 = new QLineEdit(groupBox_2);
        pathFile2->setObjectName(QString::fromUtf8("pathFile2"));

        gridLayout_3->addWidget(pathFile2, 1, 1, 1, 1);

        btnOpenFileIn2 = new QToolButton(groupBox_2);
        btnOpenFileIn2->setObjectName(QString::fromUtf8("btnOpenFileIn2"));
        btnOpenFileIn2->setEnabled(true);
        btnOpenFileIn2->setMinimumSize(QSize(30, 0));

        gridLayout_3->addWidget(btnOpenFileIn2, 1, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        pathFileOutput = new QLineEdit(groupBox_2);
        pathFileOutput->setObjectName(QString::fromUtf8("pathFileOutput"));

        gridLayout_3->addWidget(pathFileOutput, 2, 1, 1, 1);

        btnOpenFileOut = new QToolButton(groupBox_2);
        btnOpenFileOut->setObjectName(QString::fromUtf8("btnOpenFileOut"));
        btnOpenFileOut->setEnabled(true);
        btnOpenFileOut->setMinimumSize(QSize(30, 0));

        gridLayout_3->addWidget(btnOpenFileOut, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_3);


        verticalLayout_7->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        groupBox_3 = new QGroupBox(DiffDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tabNumExp = new QTabWidget(groupBox_3);
        tabNumExp->setObjectName(QString::fromUtf8("tabNumExp"));
        tabNumExp->setAutoFillBackground(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setAutoFillBackground(true);
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        ckTrAll = new QCheckBox(tab);
        ckTrAll->setObjectName(QString::fromUtf8("ckTrAll"));
        ckTrAll->setChecked(true);

        verticalLayout_6->addWidget(ckTrAll);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        edIdx = new QLineEdit(tab);
        edIdx->setObjectName(QString::fromUtf8("edIdx"));
        edIdx->setEnabled(false);

        gridLayout->addWidget(edIdx, 0, 1, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        edTrMin = new QLineEdit(tab);
        edTrMin->setObjectName(QString::fromUtf8("edTrMin"));

        gridLayout->addWidget(edTrMin, 1, 1, 1, 1);

        btnTrMin = new QToolButton(tab);
        btnTrMin->setObjectName(QString::fromUtf8("btnTrMin"));
        btnTrMin->setEnabled(false);
        btnTrMin->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(btnTrMin, 1, 2, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        edTrMax = new QLineEdit(tab);
        edTrMax->setObjectName(QString::fromUtf8("edTrMax"));

        gridLayout->addWidget(edTrMax, 2, 1, 1, 1);

        btnTrMax = new QToolButton(tab);
        btnTrMax->setObjectName(QString::fromUtf8("btnTrMax"));
        btnTrMax->setEnabled(false);
        btnTrMax->setMinimumSize(QSize(30, 0));

        gridLayout->addWidget(btnTrMax, 2, 2, 1, 1);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        edTrStp = new QLineEdit(tab);
        edTrStp->setObjectName(QString::fromUtf8("edTrStp"));

        gridLayout->addWidget(edTrStp, 3, 1, 1, 1);

        btnTrStp = new QToolButton(tab);
        btnTrStp->setObjectName(QString::fromUtf8("btnTrStp"));
        btnTrStp->setEnabled(false);

        gridLayout->addWidget(btnTrStp, 3, 2, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        tabNumExp->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setAutoFillBackground(true);
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        EcBox = new QGroupBox(tab_2);
        EcBox->setObjectName(QString::fromUtf8("EcBox"));
        horizontalLayout_15 = new QHBoxLayout(EcBox);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        btnHexp = new QPushButton(EcBox);
        btnHexp->setObjectName(QString::fromUtf8("btnHexp"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnHexp->sizePolicy().hasHeightForWidth());
        btnHexp->setSizePolicy(sizePolicy);
        btnHexp->setMinimumSize(QSize(25, 25));
        btnHexp->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Hexp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHexp->setIcon(icon);

        horizontalLayout_15->addWidget(btnHexp);

        btnNexp = new QPushButton(EcBox);
        btnNexp->setObjectName(QString::fromUtf8("btnNexp"));
        sizePolicy.setHeightForWidth(btnNexp->sizePolicy().hasHeightForWidth());
        btnNexp->setSizePolicy(sizePolicy);
        btnNexp->setMinimumSize(QSize(25, 25));
        btnNexp->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Nexp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNexp->setIcon(icon1);

        horizontalLayout_15->addWidget(btnNexp);

        btnLexp = new QPushButton(EcBox);
        btnLexp->setObjectName(QString::fromUtf8("btnLexp"));
        sizePolicy.setHeightForWidth(btnLexp->sizePolicy().hasHeightForWidth());
        btnLexp->setSizePolicy(sizePolicy);
        btnLexp->setMinimumSize(QSize(25, 25));
        btnLexp->setMaximumSize(QSize(25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Lexp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLexp->setIcon(icon2);

        horizontalLayout_15->addWidget(btnLexp);

        horizontalSpacer_12 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_12);

        btnClrExp = new QPushButton(EcBox);
        btnClrExp->setObjectName(QString::fromUtf8("btnClrExp"));
        sizePolicy.setHeightForWidth(btnClrExp->sizePolicy().hasHeightForWidth());
        btnClrExp->setSizePolicy(sizePolicy);
        btnClrExp->setMinimumSize(QSize(25, 25));
        btnClrExp->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/delete_item.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnClrExp->setIcon(icon3);

        horizontalLayout_15->addWidget(btnClrExp);

        horizontalSpacer_13 = new QSpacerItem(115, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);


        verticalLayout_5->addWidget(EcBox);

        txtExp = new QPlainTextEdit(tab_2);
        txtExp->setObjectName(QString::fromUtf8("txtExp"));

        verticalLayout_5->addWidget(txtExp);

        tabNumExp->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabNumExp);


        horizontalLayout_3->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(DiffDialog);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_2 = new QVBoxLayout(groupBox_4);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ckTmAll = new QCheckBox(groupBox_4);
        ckTmAll->setObjectName(QString::fromUtf8("ckTmAll"));
        ckTmAll->setChecked(true);

        verticalLayout_2->addWidget(ckTmAll);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        edTmMin = new QLineEdit(groupBox_4);
        edTmMin->setObjectName(QString::fromUtf8("edTmMin"));

        gridLayout_2->addWidget(edTmMin, 0, 1, 1, 1);

        btnTmMin = new QToolButton(groupBox_4);
        btnTmMin->setObjectName(QString::fromUtf8("btnTmMin"));
        btnTmMin->setEnabled(false);
        btnTmMin->setMinimumSize(QSize(30, 0));

        gridLayout_2->addWidget(btnTmMin, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        edTmMax = new QLineEdit(groupBox_4);
        edTmMax->setObjectName(QString::fromUtf8("edTmMax"));

        gridLayout_2->addWidget(edTmMax, 1, 1, 1, 1);

        btnTmMax = new QToolButton(groupBox_4);
        btnTmMax->setObjectName(QString::fromUtf8("btnTmMax"));
        btnTmMax->setEnabled(false);
        btnTmMax->setMinimumSize(QSize(30, 0));

        gridLayout_2->addWidget(btnTmMax, 1, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(groupBox_4);


        verticalLayout_7->addLayout(horizontalLayout_3);

        groupBox_5 = new QGroupBox(DiffDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_8 = new QLabel(groupBox_5);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        horizontalLayout->addWidget(label_8);

        cbFormat = new QComboBox(groupBox_5);
        cbFormat->addItem(QString());
        cbFormat->addItem(QString());
        cbFormat->setObjectName(QString::fromUtf8("cbFormat"));

        horizontalLayout->addWidget(cbFormat);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_7->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(DiffDialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btnSave = new QToolButton(groupBox_6);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/FileSave.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon4);
        btnSave->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(btnSave);

        btnClose = new QToolButton(groupBox_6);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setIcon(icon3);
        btnClose->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(btnClose);


        verticalLayout_7->addWidget(groupBox_6);

        progressBar = new QProgressBar(DiffDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(progressBar);

        edMess = new QLineEdit(DiffDialog);
        edMess->setObjectName(QString::fromUtf8("edMess"));
        edMess->setEnabled(false);

        verticalLayout_7->addWidget(edMess);


        retranslateUi(DiffDialog);

        tabNumExp->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DiffDialog);
    } // setupUi

    void retranslateUi(QDialog *DiffDialog)
    {
        DiffDialog->setWindowTitle(QCoreApplication::translate("DiffDialog", "Difference", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DiffDialog", "File", nullptr));
        label->setText(QCoreApplication::translate("DiffDialog", "Minuend File:", nullptr));
        btnOpenFileIn->setText(QCoreApplication::translate("DiffDialog", "Open", nullptr));
        label_9->setText(QCoreApplication::translate("DiffDialog", "Subtrahend File:", nullptr));
        btnOpenFileIn2->setText(QCoreApplication::translate("DiffDialog", "Open", nullptr));
        label_10->setText(QCoreApplication::translate("DiffDialog", "Difference File:", nullptr));
        btnOpenFileOut->setText(QCoreApplication::translate("DiffDialog", "Open", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DiffDialog", "Trace", nullptr));
        ckTrAll->setText(QCoreApplication::translate("DiffDialog", "All Traces", nullptr));
        label_2->setText(QCoreApplication::translate("DiffDialog", "By:", nullptr));
        label_3->setText(QCoreApplication::translate("DiffDialog", "Min:", nullptr));
        btnTrMin->setText(QCoreApplication::translate("DiffDialog", "Min", nullptr));
        label_4->setText(QCoreApplication::translate("DiffDialog", "Max:", nullptr));
        btnTrMax->setText(QCoreApplication::translate("DiffDialog", "Max", nullptr));
        label_5->setText(QCoreApplication::translate("DiffDialog", "Step:", nullptr));
        btnTrStp->setText(QCoreApplication::translate("DiffDialog", "Every Trace", nullptr));
        tabNumExp->setTabText(tabNumExp->indexOf(tab), QCoreApplication::translate("DiffDialog", "By Number", nullptr));
        EcBox->setTitle(QString());
        btnHexp->setText(QString());
        btnNexp->setText(QString());
        btnLexp->setText(QString());
        btnClrExp->setText(QString());
        tabNumExp->setTabText(tabNumExp->indexOf(tab_2), QCoreApplication::translate("DiffDialog", "By Expression", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DiffDialog", "Time", nullptr));
        ckTmAll->setText(QCoreApplication::translate("DiffDialog", "Whole trace", nullptr));
        label_6->setText(QCoreApplication::translate("DiffDialog", "Min:", nullptr));
        btnTmMin->setText(QCoreApplication::translate("DiffDialog", "Min", nullptr));
        label_7->setText(QCoreApplication::translate("DiffDialog", "Max:", nullptr));
        btnTmMax->setText(QCoreApplication::translate("DiffDialog", "Max", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("DiffDialog", "Format", nullptr));
        label_8->setText(QCoreApplication::translate("DiffDialog", "Output Format:", nullptr));
        cbFormat->setItemText(0, QCoreApplication::translate("DiffDialog", "IEEE 32 Float", nullptr));
        cbFormat->setItemText(1, QCoreApplication::translate("DiffDialog", "IBM 32 Float", nullptr));

        groupBox_6->setTitle(QString());
        btnSave->setText(QCoreApplication::translate("DiffDialog", "Save", nullptr));
        btnClose->setText(QCoreApplication::translate("DiffDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DiffDialog: public Ui_DiffDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFDIALOG_H
