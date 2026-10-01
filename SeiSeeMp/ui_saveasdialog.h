/********************************************************************************
** Form generated from reading UI file 'saveasdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEASDIALOG_H
#define UI_SAVEASDIALOG_H

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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SaveAsDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
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
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QComboBox *cbFormat;
    QCheckBox *ckRev;
    QCheckBox *ckProc;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnSave;
    QToolButton *btnClose;
    QGroupBox *hdrBox;
    QProgressBar *progressBar;
    QLineEdit *edMess;

    void setupUi(QDialog *SaveAsDialog)
    {
        if (SaveAsDialog->objectName().isEmpty())
            SaveAsDialog->setObjectName(QString::fromUtf8("SaveAsDialog"));
        SaveAsDialog->resize(661, 550);
        SaveAsDialog->setModal(true);
        verticalLayout_7 = new QVBoxLayout(SaveAsDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        splitter = new QSplitter(SaveAsDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(350, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_3 = new QGroupBox(groupBox);
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
        QFont font;
        font.setPointSize(8);
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
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnHexp->sizePolicy().hasHeightForWidth());
        btnHexp->setSizePolicy(sizePolicy1);
        btnHexp->setMinimumSize(QSize(25, 25));
        btnHexp->setMaximumSize(QSize(25, 25));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Hexp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnHexp->setIcon(icon);

        horizontalLayout_15->addWidget(btnHexp);

        btnNexp = new QPushButton(EcBox);
        btnNexp->setObjectName(QString::fromUtf8("btnNexp"));
        sizePolicy1.setHeightForWidth(btnNexp->sizePolicy().hasHeightForWidth());
        btnNexp->setSizePolicy(sizePolicy1);
        btnNexp->setMinimumSize(QSize(25, 25));
        btnNexp->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/Nexp.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNexp->setIcon(icon1);

        horizontalLayout_15->addWidget(btnNexp);

        btnLexp = new QPushButton(EcBox);
        btnLexp->setObjectName(QString::fromUtf8("btnLexp"));
        sizePolicy1.setHeightForWidth(btnLexp->sizePolicy().hasHeightForWidth());
        btnLexp->setSizePolicy(sizePolicy1);
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
        sizePolicy1.setHeightForWidth(btnClrExp->sizePolicy().hasHeightForWidth());
        btnClrExp->setSizePolicy(sizePolicy1);
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


        verticalLayout->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(groupBox);
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


        verticalLayout->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(groupBox);
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


        verticalLayout_4->addLayout(horizontalLayout);

        ckRev = new QCheckBox(groupBox_5);
        ckRev->setObjectName(QString::fromUtf8("ckRev"));
        ckRev->setChecked(false);

        verticalLayout_4->addWidget(ckRev);

        ckProc = new QCheckBox(groupBox_5);
        ckProc->setObjectName(QString::fromUtf8("ckProc"));
        ckProc->setChecked(false);

        verticalLayout_4->addWidget(ckProc);


        verticalLayout->addWidget(groupBox_5);

        groupBox_6 = new QGroupBox(groupBox);
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


        verticalLayout->addWidget(groupBox_6);

        splitter->addWidget(groupBox);
        hdrBox = new QGroupBox(splitter);
        hdrBox->setObjectName(QString::fromUtf8("hdrBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hdrBox->sizePolicy().hasHeightForWidth());
        hdrBox->setSizePolicy(sizePolicy2);
        splitter->addWidget(hdrBox);

        verticalLayout_7->addWidget(splitter);

        progressBar = new QProgressBar(SaveAsDialog);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(progressBar);

        edMess = new QLineEdit(SaveAsDialog);
        edMess->setObjectName(QString::fromUtf8("edMess"));
        edMess->setEnabled(false);

        verticalLayout_7->addWidget(edMess);


        retranslateUi(SaveAsDialog);

        tabNumExp->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SaveAsDialog);
    } // setupUi

    void retranslateUi(QDialog *SaveAsDialog)
    {
        SaveAsDialog->setWindowTitle(QCoreApplication::translate("SaveAsDialog", "Save File As", nullptr));
        groupBox->setTitle(QString());
        groupBox_3->setTitle(QCoreApplication::translate("SaveAsDialog", "Trace", nullptr));
        ckTrAll->setText(QCoreApplication::translate("SaveAsDialog", "All Traces", nullptr));
        label_2->setText(QCoreApplication::translate("SaveAsDialog", "By:", nullptr));
        label_3->setText(QCoreApplication::translate("SaveAsDialog", "Min:", nullptr));
        btnTrMin->setText(QCoreApplication::translate("SaveAsDialog", "Min", nullptr));
        label_4->setText(QCoreApplication::translate("SaveAsDialog", "Max:", nullptr));
        btnTrMax->setText(QCoreApplication::translate("SaveAsDialog", "Max", nullptr));
        label_5->setText(QCoreApplication::translate("SaveAsDialog", "Step:", nullptr));
        btnTrStp->setText(QCoreApplication::translate("SaveAsDialog", "Every Trace", nullptr));
        tabNumExp->setTabText(tabNumExp->indexOf(tab), QCoreApplication::translate("SaveAsDialog", "By Number", nullptr));
        EcBox->setTitle(QString());
        btnHexp->setText(QString());
        btnNexp->setText(QString());
        btnLexp->setText(QString());
        btnClrExp->setText(QString());
        tabNumExp->setTabText(tabNumExp->indexOf(tab_2), QCoreApplication::translate("SaveAsDialog", "By Expression", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SaveAsDialog", "Time", nullptr));
        ckTmAll->setText(QCoreApplication::translate("SaveAsDialog", "Whole trace", nullptr));
        label_6->setText(QCoreApplication::translate("SaveAsDialog", "Min:", nullptr));
        btnTmMin->setText(QCoreApplication::translate("SaveAsDialog", "Min", nullptr));
        label_7->setText(QCoreApplication::translate("SaveAsDialog", "Max:", nullptr));
        btnTmMax->setText(QCoreApplication::translate("SaveAsDialog", "Max", nullptr));
        groupBox_5->setTitle(QString());
        label_8->setText(QCoreApplication::translate("SaveAsDialog", "Format:", nullptr));
        cbFormat->setItemText(0, QCoreApplication::translate("SaveAsDialog", "IEEE 32 Float", nullptr));
        cbFormat->setItemText(1, QCoreApplication::translate("SaveAsDialog", "IBM 32 Float", nullptr));

        ckRev->setText(QCoreApplication::translate("SaveAsDialog", "Reversal order", nullptr));
        ckProc->setText(QCoreApplication::translate("SaveAsDialog", "Apply Processing", nullptr));
        groupBox_6->setTitle(QString());
        btnSave->setText(QCoreApplication::translate("SaveAsDialog", "Save", nullptr));
        btnClose->setText(QCoreApplication::translate("SaveAsDialog", "Close", nullptr));
        hdrBox->setTitle(QCoreApplication::translate("SaveAsDialog", "Trace Headers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SaveAsDialog: public Ui_SaveAsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEASDIALOG_H
