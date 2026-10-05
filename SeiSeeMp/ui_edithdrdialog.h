/********************************************************************************
** Form generated from reading UI file 'edithdrdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITHDRDIALOG_H
#define UI_EDITHDRDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditHdrDialog
{
public:
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QComboBox *cbSet;
    QPushButton *btnAddItem;
    QPushButton *btnDelItem;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *hdrsBox;
    QGroupBox *selHdrsBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *edName;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *edDesc;
    QTabWidget *tabMode;
    QWidget *tab;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_4;
    QLineEdit *edPos;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QComboBox *cbForm;
    QSpacerItem *verticalSpacer;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_5;
    QPlainTextEdit *txtExpr;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QPushButton *insBtn;
    QFrame *frmHdrs;
    QLabel *lbErr;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnUpdate;
    QPushButton *btnReset;
    QSpacerItem *horizontalSpacer_5;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnApply;
    QPushButton *btnDiscard;
    QPushButton *btnClose;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *EditHdrDialog)
    {
        if (EditHdrDialog->objectName().isEmpty())
            EditHdrDialog->setObjectName(QString::fromUtf8("EditHdrDialog"));
        verticalLayout_4 = new QVBoxLayout(EditHdrDialog);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_5 = new QGroupBox(EditHdrDialog);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(
            groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(groupBox_5);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout->addWidget(label_6);

        cbSet = new QComboBox(groupBox_5);
        cbSet->addItem(QString());
        cbSet->addItem(QString());
        cbSet->setObjectName(QString::fromUtf8("cbSet"));
        cbSet->setEditable(false);

        horizontalLayout->addWidget(cbSet);

        btnAddItem = new QPushButton(groupBox_5);
        btnAddItem->setObjectName(QString::fromUtf8("btnAddItem"));
        btnAddItem->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(
            btnAddItem->sizePolicy().hasHeightForWidth());
        btnAddItem->setSizePolicy(sizePolicy1);
        btnAddItem->setMinimumSize(QSize(25, 25));
        btnAddItem->setMaximumSize(QSize(25, 25));
        btnAddItem->setFocusPolicy(Qt::StrongFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add_item.png"), QSize(),
                     QIcon::Normal, QIcon::Off);
        btnAddItem->setIcon(icon);
        btnAddItem->setAutoDefault(false);

        horizontalLayout->addWidget(btnAddItem);

        btnDelItem = new QPushButton(groupBox_5);
        btnDelItem->setObjectName(QString::fromUtf8("btnDelItem"));
        btnDelItem->setEnabled(true);
        sizePolicy1.setHeightForWidth(
            btnDelItem->sizePolicy().hasHeightForWidth());
        btnDelItem->setSizePolicy(sizePolicy1);
        btnDelItem->setMinimumSize(QSize(25, 25));
        btnDelItem->setMaximumSize(QSize(25, 25));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/delete_item.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        btnDelItem->setIcon(icon1);
        btnDelItem->setAutoDefault(false);

        horizontalLayout->addWidget(btnDelItem);

        horizontalSpacer_6 = new QSpacerItem(394, 17, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        verticalLayout_4->addWidget(groupBox_5);

        groupBox_2 = new QGroupBox(EditHdrDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(
            QString::fromUtf8("horizontalLayout_3"));
        hdrsBox = new QGroupBox(groupBox_2);
        hdrsBox->setObjectName(QString::fromUtf8("hdrsBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(
            hdrsBox->sizePolicy().hasHeightForWidth());
        hdrsBox->setSizePolicy(sizePolicy2);
        hdrsBox->setMinimumSize(QSize(200, 0));
        hdrsBox->setMaximumSize(QSize(280, 16777215));

        horizontalLayout_3->addWidget(hdrsBox);

        selHdrsBox = new QGroupBox(groupBox_2);
        selHdrsBox->setObjectName(QString::fromUtf8("selHdrsBox"));
        sizePolicy2.setHeightForWidth(
            selHdrsBox->sizePolicy().hasHeightForWidth());
        selHdrsBox->setSizePolicy(sizePolicy2);
        selHdrsBox->setMinimumSize(QSize(400, 0));
        verticalLayout_3 = new QVBoxLayout(selHdrsBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(selHdrsBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        edName = new QLineEdit(selHdrsBox);
        edName->setObjectName(QString::fromUtf8("edName"));

        verticalLayout_2->addWidget(edName);

        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(selHdrsBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        edDesc = new QLineEdit(selHdrsBox);
        edDesc->setObjectName(QString::fromUtf8("edDesc"));

        verticalLayout->addWidget(edDesc);

        verticalLayout_3->addLayout(verticalLayout);

        tabMode = new QTabWidget(selHdrsBox);
        tabMode->setObjectName(QString::fromUtf8("tabMode"));
        tabMode->setAutoFillBackground(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tab->setAutoFillBackground(true);
        verticalLayout_7 = new QVBoxLayout(tab);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        edPos = new QLineEdit(tab);
        edPos->setObjectName(QString::fromUtf8("edPos"));

        verticalLayout_5->addWidget(edPos);

        verticalLayout_7->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        cbForm = new QComboBox(tab);
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->addItem(QString());
        cbForm->setObjectName(QString::fromUtf8("cbForm"));
        cbForm->setEditable(true);

        verticalLayout_6->addWidget(cbForm);

        verticalLayout_7->addLayout(verticalLayout_6);

        verticalSpacer = new QSpacerItem(20, 124, QSizePolicy::Minimum,
                                         QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        tabMode->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setAutoFillBackground(true);
        horizontalLayout_5 = new QHBoxLayout(tab_2);
        horizontalLayout_5->setObjectName(
            QString::fromUtf8("horizontalLayout_5"));
        txtExpr = new QPlainTextEdit(tab_2);
        txtExpr->setObjectName(QString::fromUtf8("txtExpr"));

        horizontalLayout_5->addWidget(txtExpr);

        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(200, 0));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        insBtn = new QPushButton(groupBox);
        insBtn->setObjectName(QString::fromUtf8("insBtn"));
        sizePolicy1.setHeightForWidth(insBtn->sizePolicy().hasHeightForWidth());
        insBtn->setSizePolicy(sizePolicy1);
        insBtn->setMaximumSize(QSize(16777215, 16));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/ToLeft.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        insBtn->setIcon(icon2);
        insBtn->setAutoDefault(false);

        verticalLayout_8->addWidget(insBtn);

        frmHdrs = new QFrame(groupBox);
        frmHdrs->setObjectName(QString::fromUtf8("frmHdrs"));
        frmHdrs->setFrameShape(QFrame::StyledPanel);
        frmHdrs->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frmHdrs);

        horizontalLayout_5->addWidget(groupBox);

        tabMode->addTab(tab_2, QString());

        verticalLayout_3->addWidget(tabMode);

        lbErr = new QLabel(selHdrsBox);
        lbErr->setObjectName(QString::fromUtf8("lbErr"));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        lbErr->setPalette(palette);

        verticalLayout_3->addWidget(lbErr);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(
            QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btnUpdate = new QPushButton(selHdrsBox);
        btnUpdate->setObjectName(QString::fromUtf8("btnUpdate"));

        horizontalLayout_4->addWidget(btnUpdate);

        btnReset = new QPushButton(selHdrsBox);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        horizontalLayout_4->addWidget(btnReset);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3->addWidget(selHdrsBox);

        verticalLayout_4->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(EditHdrDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        sizePolicy.setHeightForWidth(
            groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(
            QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(203, 20, QSizePolicy::Expanding,
                                           QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnApply = new QPushButton(groupBox_3);
        btnApply->setObjectName(QString::fromUtf8("btnApply"));

        horizontalLayout_2->addWidget(btnApply);

        btnDiscard = new QPushButton(groupBox_3);
        btnDiscard->setObjectName(QString::fromUtf8("btnDiscard"));

        horizontalLayout_2->addWidget(btnDiscard);

        btnClose = new QPushButton(groupBox_3);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout_2->addWidget(btnClose);

        horizontalSpacer_2 = new QSpacerItem(202, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        verticalLayout_4->addWidget(groupBox_3);

        retranslateUi(EditHdrDialog);

        cbSet->setCurrentIndex(0);
        tabMode->setCurrentIndex(0);
        cbForm->setCurrentIndex(0);

        QMetaObject::connectSlotsByName(EditHdrDialog);
    } // setupUi

    void retranslateUi(QDialog *EditHdrDialog)
    {
        EditHdrDialog->setWindowTitle(QCoreApplication::translate(
            "EditHdrDialog", "Header Editor", nullptr));
        groupBox_5->setTitle(QString());
        label_6->setText(
            QCoreApplication::translate("EditHdrDialog", "Table:", nullptr));
        cbSet->setItemText(0, QCoreApplication::translate(
                                  "EditHdrDialog", "SEG-Y / SU", nullptr));
        cbSet->setItemText(
            1, QCoreApplication::translate("EditHdrDialog", "CST", nullptr));

        btnAddItem->setText(QString());
        btnDelItem->setText(QString());
        groupBox_2->setTitle(QString());
        hdrsBox->setTitle(QCoreApplication::translate(
            "EditHdrDialog", "Select Header", nullptr));
        selHdrsBox->setTitle(QCoreApplication::translate(
            "EditHdrDialog", "Header Description", nullptr));
        label_2->setText(
            QCoreApplication::translate("EditHdrDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("EditHdrDialog",
                                                     "Description", nullptr));
        label_4->setText(
            QCoreApplication::translate("EditHdrDialog", "Position", nullptr));
        label_5->setText(
            QCoreApplication::translate("EditHdrDialog", "Format", nullptr));
        cbForm->setItemText(0, QCoreApplication::translate(
                                   "EditHdrDialog", "Integer 8 bit", nullptr));
        cbForm->setItemText(1, QCoreApplication::translate(
                                   "EditHdrDialog", "Integer 16 bit", nullptr));
        cbForm->setItemText(
            2, QCoreApplication::translate("EditHdrDialog",
                                           "Unsigned integer 16 bit", nullptr));
        cbForm->setItemText(3, QCoreApplication::translate(
                                   "EditHdrDialog", "Ineger 32 bit", nullptr));
        cbForm->setItemText(4, QCoreApplication::translate("EditHdrDialog",
                                                           "IEEE float 32 bit",
                                                           nullptr));
        cbForm->setItemText(5, QCoreApplication::translate("EditHdrDialog",
                                                           "IEEE float 64 bit",
                                                           nullptr));
        cbForm->setItemText(6, QCoreApplication::translate("EditHdrDialog",
                                                           "IBM float 32 bit",
                                                           nullptr));
        cbForm->setItemText(7, QCoreApplication::translate(
                                   "EditHdrDialog", "Expression", nullptr));

        tabMode->setTabText(tabMode->indexOf(tab),
                            QCoreApplication::translate(
                                "EditHdrDialog", "Position / Format", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditHdrDialog",
                                                       "Header List", nullptr));
        insBtn->setText(QString());
        tabMode->setTabText(tabMode->indexOf(tab_2),
                            QCoreApplication::translate(
                                "EditHdrDialog", "Expressioin", nullptr));
        lbErr->setText(
            QCoreApplication::translate("EditHdrDialog", "Error", nullptr));
        btnUpdate->setText(
            QCoreApplication::translate("EditHdrDialog", "Update", nullptr));
        btnReset->setText(
            QCoreApplication::translate("EditHdrDialog", "Reset", nullptr));
        groupBox_3->setTitle(QString());
        btnApply->setText(QCoreApplication::translate(
            "EditHdrDialog", "Apply Changes", nullptr));
        btnDiscard->setText(QCoreApplication::translate(
            "EditHdrDialog", "Cancel Changes", nullptr));
        btnClose->setText(
            QCoreApplication::translate("EditHdrDialog", "Close", nullptr));
    } // retranslateUi
};

namespace Ui {
    class EditHdrDialog : public Ui_EditHdrDialog
    {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITHDRDIALOG_H
