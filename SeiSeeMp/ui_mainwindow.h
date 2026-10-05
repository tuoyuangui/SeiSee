/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Directory;
    QAction *actionE_xit;
    QAction *actionAbout;
    QAction *actionAxes_Setup;
    QAction *actionParameters;
    QAction *actionHeader_Editor;
    QAction *actionLoad_Text_Header_from_File;
    QAction *actionExport_Text_Header_to_File;
    QAction *actionSave_As;
    QAction *actionOpen_File;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter;
    QGroupBox *dirGroup;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *selDirBtn;
    QPushButton *refreshBtn;
    QPushButton *goBackBtn;
    QFrame *dirFrame;
    QGroupBox *HdrBox;
    QHBoxLayout *horizontalLayout_7;
    QTabWidget *InfoTab;
    QWidget *SumPg;
    QVBoxLayout *verticalLayout_13;
    QPlainTextEdit *InfoTxt;
    QWidget *FileHdrPg;
    QVBoxLayout *verticalLayout_11;
    QTabWidget *tabFhdr;
    QWidget *TxtHdrTab;
    QVBoxLayout *verticalLayout_15;
    QPlainTextEdit *TxtHdrEdit;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *txtCol;
    QLabel *txtRow;
    QLabel *txtIns;
    QGroupBox *groupBox_10;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *btnTxtRd;
    QPushButton *btnTxtRdx;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *btnTxtRst;
    QPushButton *btnTxtUpd;
    QSpacerItem *horizontalSpacer_8;
    QWidget *BinHdrTab;
    QVBoxLayout *verticalLayout_12;
    QCheckBox *ckTrEd;
    QFrame *binHdrFrame;
    QGroupBox *groupBox_11;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btnBinRst;
    QPushButton *btnBinUpd;
    QSpacerItem *horizontalSpacer_11;
    QWidget *TrcTab;
    QVBoxLayout *verticalLayout_19;
    QTabWidget *TracePg;
    QWidget *TrcHdrTab;
    QVBoxLayout *verticalLayout_16;
    QFrame *trcHdrFrame;
    QWidget *TrcDatTab;
    QVBoxLayout *verticalLayout_20;
    QFrame *trcDatFrame;
    QTabWidget *SeisTab;
    QWidget *HdrsPg;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *ckWiggle;
    QCheckBox *ckGray;
    QCheckBox *ckColor;
    QCheckBox *ckTimLines;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbNon;
    QRadioButton *rbPos;
    QRadioButton *rbNeg;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSlider *GnSlider;
    QPushButton *autoGainBtn;
    QLineEdit *edTm;
    QSlider *TmSlider;
    QLabel *label_3;
    QSlider *TrSlider;
    QLineEdit *edTr;
    QLabel *label;
    QLineEdit *edGn;
    QPushButton *zoomVallBtn;
    QPushButton *zoomHallBtn;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *ckFilt;
    QCheckBox *ckAgc;
    QCheckBox *ckNorm;
    QCheckBox *ckDly;
    QPushButton *procParmBtn;
    QGroupBox *groupBox_13;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *verticalLayout_27;
    QRadioButton *rbDirNorm;
    QRadioButton *rbDirRev;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_8;
    QPushButton *zoomAllBtn;
    QPushButton *zoomWinBtn;
    QPushButton *zoomOutBtn;
    QPushButton *zoomInBtn;
    QPushButton *zoomPreBtn;
    QPushButton *axisBtn;
    QFrame *seisFrame1;
    QVBoxLayout *verticalLayout;
    QFrame *seisFrame;
    QWidget *HdrLstPg;
    QHBoxLayout *horizontalLayout_8;
    QTabWidget *hdrsLstTab;
    QWidget *hdrsViewTab;
    QHBoxLayout *horizontalLayout_12;
    QSplitter *splitter_2;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_17;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCkAll;
    QPushButton *btnCkNon;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEdHdr;
    QSpacerItem *horizontalSpacer_3;
    QFrame *hdrListCkFrame;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_21;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_18;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_10;
    QComboBox *cbSidx;
    QComboBox *cbSsign;
    QComboBox *cbSval;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnSbin;
    QPushButton *btnSfwd;
    QPushButton *btnSbkw;
    QPushButton *btnSstop;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnLastTr;
    QPushButton *btnFirstTr;
    QGroupBox *groupBox_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *lbElab;
    QLineEdit *edEcval;
    QLabel *label_5;
    QComboBox *cbEnval;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnUpdTrh;
    QSpacerItem *horizontalSpacer_7;
    QFrame *hdrListDtFrame;
    QWidget *hdrsEditTab;
    QVBoxLayout *verticalLayout_25;
    QSplitter *splitter_3;
    QGroupBox *HeBox;
    QVBoxLayout *verticalLayout_24;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_17;
    QPushButton *btnCkNonE;
    QSpacerItem *horizontalSpacer_16;
    QFrame *hdrElstCkFrame;
    QGroupBox *groupBox_12;
    QVBoxLayout *verticalLayout_22;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_23;
    QGroupBox *EcBox;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *btnHexp;
    QPushButton *btnNexp;
    QPushButton *btnLexp;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *btnClrExp;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *btnUpdE;
    QPushButton *btnUndE;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *btnLastTr_2;
    QPushButton *btnFirstTr_2;
    QGroupBox *groupBox_14;
    QHBoxLayout *horizontalLayout_16;
    QLineEdit *edExpr;
    QFrame *hdrElstDtFrame;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menuView;
    QMenu *menuProcessing;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/SeiSeeMp.png"), QSize(),
                     QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen_Directory = new QAction(MainWindow);
        actionOpen_Directory->setObjectName(
            QString::fromUtf8("actionOpen_Directory"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/OpenDir.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        actionOpen_Directory->setIcon(icon1);
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAxes_Setup = new QAction(MainWindow);
        actionAxes_Setup->setObjectName(QString::fromUtf8("actionAxes_Setup"));
        actionParameters = new QAction(MainWindow);
        actionParameters->setObjectName(QString::fromUtf8("actionParameters"));
        actionHeader_Editor = new QAction(MainWindow);
        actionHeader_Editor->setObjectName(
            QString::fromUtf8("actionHeader_Editor"));
        actionLoad_Text_Header_from_File = new QAction(MainWindow);
        actionLoad_Text_Header_from_File->setObjectName(
            QString::fromUtf8("actionLoad_Text_Header_from_File"));
        actionExport_Text_Header_to_File = new QAction(MainWindow);
        actionExport_Text_Header_to_File->setObjectName(
            QString::fromUtf8("actionExport_Text_Header_to_File"));
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/OpenFile.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        actionOpen_File->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_14 = new QVBoxLayout(centralWidget);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(
            QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        dirGroup = new QGroupBox(splitter);
        dirGroup->setObjectName(QString::fromUtf8("dirGroup"));
        dirGroup->setMinimumSize(QSize(250, 0));
        dirGroup->setMaximumSize(QSize(400, 16777215));
        verticalLayout_2 = new QVBoxLayout(dirGroup);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        frame_3 = new QFrame(dirGroup);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(0, 30));
        frame_3->setMaximumSize(QSize(16777215, 30));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 1, 81, 28));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(1);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(
            QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 2, 0, 0);
        selDirBtn = new QPushButton(layoutWidget);
        selDirBtn->setObjectName(QString::fromUtf8("selDirBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(
            selDirBtn->sizePolicy().hasHeightForWidth());
        selDirBtn->setSizePolicy(sizePolicy1);
        selDirBtn->setMinimumSize(QSize(25, 25));
        selDirBtn->setMaximumSize(QSize(25, 25));
        selDirBtn->setIcon(icon1);

        horizontalLayout_3->addWidget(selDirBtn);

        refreshBtn = new QPushButton(layoutWidget);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));
        sizePolicy1.setHeightForWidth(
            refreshBtn->sizePolicy().hasHeightForWidth());
        refreshBtn->setSizePolicy(sizePolicy1);
        refreshBtn->setMinimumSize(QSize(25, 25));
        refreshBtn->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/Refresh.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        refreshBtn->setIcon(icon3);

        horizontalLayout_3->addWidget(refreshBtn);

        goBackBtn = new QPushButton(layoutWidget);
        goBackBtn->setObjectName(QString::fromUtf8("goBackBtn"));
        sizePolicy1.setHeightForWidth(
            goBackBtn->sizePolicy().hasHeightForWidth());
        goBackBtn->setSizePolicy(sizePolicy1);
        goBackBtn->setMinimumSize(QSize(25, 25));
        goBackBtn->setMaximumSize(QSize(25, 25));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/GoBack.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        goBackBtn->setIcon(icon4);

        horizontalLayout_3->addWidget(goBackBtn);

        verticalLayout_2->addWidget(frame_3);

        dirFrame = new QFrame(dirGroup);
        dirFrame->setObjectName(QString::fromUtf8("dirFrame"));
        dirFrame->setFrameShape(QFrame::StyledPanel);
        dirFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(dirFrame);

        splitter->addWidget(dirGroup);
        HdrBox = new QGroupBox(splitter);
        HdrBox->setObjectName(QString::fromUtf8("HdrBox"));
        HdrBox->setMinimumSize(QSize(300, 0));
        horizontalLayout_7 = new QHBoxLayout(HdrBox);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(
            QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, -1);
        InfoTab = new QTabWidget(HdrBox);
        InfoTab->setObjectName(QString::fromUtf8("InfoTab"));
        InfoTab->setAutoFillBackground(false);
        InfoTab->setTabPosition(QTabWidget::North);
        InfoTab->setTabShape(QTabWidget::Rounded);
        InfoTab->setElideMode(Qt::ElideRight);
        InfoTab->setDocumentMode(false);
        InfoTab->setTabsClosable(false);
        InfoTab->setMovable(false);
        SumPg = new QWidget();
        SumPg->setObjectName(QString::fromUtf8("SumPg"));
        verticalLayout_13 = new QVBoxLayout(SumPg);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(
            QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        InfoTxt = new QPlainTextEdit(SumPg);
        InfoTxt->setObjectName(QString::fromUtf8("InfoTxt"));
        InfoTxt->setLineWrapMode(QPlainTextEdit::NoWrap);
        InfoTxt->setReadOnly(true);

        verticalLayout_13->addWidget(InfoTxt);

        InfoTab->addTab(SumPg, QString());
        FileHdrPg = new QWidget();
        FileHdrPg->setObjectName(QString::fromUtf8("FileHdrPg"));
        FileHdrPg->setAutoFillBackground(true);
        verticalLayout_11 = new QVBoxLayout(FileHdrPg);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(
            QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        tabFhdr = new QTabWidget(FileHdrPg);
        tabFhdr->setObjectName(QString::fromUtf8("tabFhdr"));
        tabFhdr->setAutoFillBackground(false);
        TxtHdrTab = new QWidget();
        TxtHdrTab->setObjectName(QString::fromUtf8("TxtHdrTab"));
        TxtHdrTab->setAutoFillBackground(true);
        verticalLayout_15 = new QVBoxLayout(TxtHdrTab);
        verticalLayout_15->setSpacing(2);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(
            QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(2, 2, 2, 2);
        TxtHdrEdit = new QPlainTextEdit(TxtHdrTab);
        TxtHdrEdit->setObjectName(QString::fromUtf8("TxtHdrEdit"));
        TxtHdrEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout_15->addWidget(TxtHdrEdit);

        groupBox_5 = new QGroupBox(TxtHdrTab);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_5);
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(
            QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(2, 2, 2, 2);
        txtCol = new QLabel(groupBox_5);
        txtCol->setObjectName(QString::fromUtf8("txtCol"));
        txtCol->setFrameShape(QFrame::Panel);
        txtCol->setFrameShadow(QFrame::Sunken);
        txtCol->setLineWidth(1);
        txtCol->setMidLineWidth(0);

        horizontalLayout_6->addWidget(txtCol);

        txtRow = new QLabel(groupBox_5);
        txtRow->setObjectName(QString::fromUtf8("txtRow"));
        txtRow->setFrameShape(QFrame::Panel);
        txtRow->setFrameShadow(QFrame::Sunken);

        horizontalLayout_6->addWidget(txtRow);

        txtIns = new QLabel(groupBox_5);
        txtIns->setObjectName(QString::fromUtf8("txtIns"));
        txtIns->setMaximumSize(QSize(26, 16777215));
        txtIns->setFrameShape(QFrame::Panel);
        txtIns->setFrameShadow(QFrame::Sunken);
        txtIns->setTextFormat(Qt::PlainText);

        horizontalLayout_6->addWidget(txtIns);

        verticalLayout_15->addWidget(groupBox_5);

        groupBox_10 = new QGroupBox(TxtHdrTab);
        groupBox_10->setObjectName(QString::fromUtf8("groupBox_10"));
        horizontalLayout_13 = new QHBoxLayout(groupBox_10);
        horizontalLayout_13->setSpacing(2);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(
            QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, -1, 0);
        btnTxtRd = new QPushButton(groupBox_10);
        btnTxtRd->setObjectName(QString::fromUtf8("btnTxtRd"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/FromFile.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        btnTxtRd->setIcon(icon5);

        horizontalLayout_13->addWidget(btnTxtRd);

        btnTxtRdx = new QPushButton(groupBox_10);
        btnTxtRdx->setObjectName(QString::fromUtf8("btnTxtRdx"));
        btnTxtRdx->setIcon(icon5);

        horizontalLayout_13->addWidget(btnTxtRdx);

        horizontalSpacer_9 =
            new QSpacerItem(4, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_9);

        btnTxtRst = new QPushButton(groupBox_10);
        btnTxtRst->setObjectName(QString::fromUtf8("btnTxtRst"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/Reset.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        btnTxtRst->setIcon(icon6);

        horizontalLayout_13->addWidget(btnTxtRst);

        btnTxtUpd = new QPushButton(groupBox_10);
        btnTxtUpd->setObjectName(QString::fromUtf8("btnTxtUpd"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/FileSave.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        btnTxtUpd->setIcon(icon7);

        horizontalLayout_13->addWidget(btnTxtUpd);

        horizontalSpacer_8 = new QSpacerItem(8, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);

        verticalLayout_15->addWidget(groupBox_10);

        tabFhdr->addTab(TxtHdrTab, QString());
        BinHdrTab = new QWidget();
        BinHdrTab->setObjectName(QString::fromUtf8("BinHdrTab"));
        BinHdrTab->setAutoFillBackground(true);
        verticalLayout_12 = new QVBoxLayout(BinHdrTab);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(
            QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        ckTrEd = new QCheckBox(BinHdrTab);
        ckTrEd->setObjectName(QString::fromUtf8("ckTrEd"));

        verticalLayout_12->addWidget(ckTrEd);

        binHdrFrame = new QFrame(BinHdrTab);
        binHdrFrame->setObjectName(QString::fromUtf8("binHdrFrame"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(
            binHdrFrame->sizePolicy().hasHeightForWidth());
        binHdrFrame->setSizePolicy(sizePolicy2);
        binHdrFrame->setFrameShape(QFrame::StyledPanel);
        binHdrFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_12->addWidget(binHdrFrame);

        groupBox_11 = new QGroupBox(BinHdrTab);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_11);
        horizontalLayout_14->setSpacing(2);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(
            QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, -1, 0);
        btnBinRst = new QPushButton(groupBox_11);
        btnBinRst->setObjectName(QString::fromUtf8("btnBinRst"));
        btnBinRst->setIcon(icon6);

        horizontalLayout_14->addWidget(btnBinRst);

        btnBinUpd = new QPushButton(groupBox_11);
        btnBinUpd->setObjectName(QString::fromUtf8("btnBinUpd"));
        btnBinUpd->setIcon(icon7);

        horizontalLayout_14->addWidget(btnBinUpd);

        horizontalSpacer_11 = new QSpacerItem(8, 20, QSizePolicy::Expanding,
                                              QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        verticalLayout_12->addWidget(groupBox_11);

        tabFhdr->addTab(BinHdrTab, QString());

        verticalLayout_11->addWidget(tabFhdr);

        InfoTab->addTab(FileHdrPg, QString());
        TrcTab = new QWidget();
        TrcTab->setObjectName(QString::fromUtf8("TrcTab"));
        verticalLayout_19 = new QVBoxLayout(TrcTab);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(
            QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        TracePg = new QTabWidget(TrcTab);
        TracePg->setObjectName(QString::fromUtf8("TracePg"));
        TrcHdrTab = new QWidget();
        TrcHdrTab->setObjectName(QString::fromUtf8("TrcHdrTab"));
        verticalLayout_16 = new QVBoxLayout(TrcHdrTab);
        verticalLayout_16->setSpacing(0);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(
            QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        trcHdrFrame = new QFrame(TrcHdrTab);
        trcHdrFrame->setObjectName(QString::fromUtf8("trcHdrFrame"));
        trcHdrFrame->setFrameShape(QFrame::Box);
        trcHdrFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_16->addWidget(trcHdrFrame);

        TracePg->addTab(TrcHdrTab, QString());
        TrcDatTab = new QWidget();
        TrcDatTab->setObjectName(QString::fromUtf8("TrcDatTab"));
        verticalLayout_20 = new QVBoxLayout(TrcDatTab);
        verticalLayout_20->setSpacing(0);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(
            QString::fromUtf8("verticalLayout_20"));
        verticalLayout_20->setContentsMargins(0, 0, 0, 0);
        trcDatFrame = new QFrame(TrcDatTab);
        trcDatFrame->setObjectName(QString::fromUtf8("trcDatFrame"));
        trcDatFrame->setFrameShape(QFrame::StyledPanel);
        trcDatFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_20->addWidget(trcDatFrame);

        TracePg->addTab(TrcDatTab, QString());

        verticalLayout_19->addWidget(TracePg);

        InfoTab->addTab(TrcTab, QString());

        horizontalLayout_7->addWidget(InfoTab);

        splitter->addWidget(HdrBox);
        SeisTab = new QTabWidget(splitter);
        SeisTab->setObjectName(QString::fromUtf8("SeisTab"));
        HdrsPg = new QWidget();
        HdrsPg->setObjectName(QString::fromUtf8("HdrsPg"));
        verticalLayout_8 = new QVBoxLayout(HdrsPg);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(HdrsPg);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(565, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_10 = new QVBoxLayout(frame_2);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(
            QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(
            QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 2, 2, 2);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_6 = new QVBoxLayout(groupBox);
        verticalLayout_6->setSpacing(2);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(2, 2, 2, 2);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, -1, -1, -1);
        ckWiggle = new QCheckBox(groupBox);
        ckWiggle->setObjectName(QString::fromUtf8("ckWiggle"));

        verticalLayout_3->addWidget(ckWiggle);

        ckGray = new QCheckBox(groupBox);
        ckGray->setObjectName(QString::fromUtf8("ckGray"));
        ckGray->setChecked(true);

        verticalLayout_3->addWidget(ckGray);

        ckColor = new QCheckBox(groupBox);
        ckColor->setObjectName(QString::fromUtf8("ckColor"));

        verticalLayout_3->addWidget(ckColor);

        ckTimLines = new QCheckBox(groupBox);
        ckTimLines->setObjectName(QString::fromUtf8("ckTimLines"));

        verticalLayout_3->addWidget(ckTimLines);

        verticalLayout_6->addLayout(verticalLayout_3);

        horizontalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_7 = new QVBoxLayout(groupBox_2);
        verticalLayout_7->setSpacing(2);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(2, 2, 2, 2);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(3);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(2, -1, -1, -1);
        rbNon = new QRadioButton(groupBox_2);
        rbNon->setObjectName(QString::fromUtf8("rbNon"));

        verticalLayout_4->addWidget(rbNon);

        rbPos = new QRadioButton(groupBox_2);
        rbPos->setObjectName(QString::fromUtf8("rbPos"));
        rbPos->setChecked(true);

        verticalLayout_4->addWidget(rbPos);

        rbNeg = new QRadioButton(groupBox_2);
        rbNeg->setObjectName(QString::fromUtf8("rbNeg"));

        verticalLayout_4->addWidget(rbNeg);

        verticalLayout_7->addLayout(verticalLayout_4);

        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(
            QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(-1, -1, -1, 2);
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        GnSlider = new QSlider(groupBox_3);
        GnSlider->setObjectName(QString::fromUtf8("GnSlider"));
        GnSlider->setMinimumSize(QSize(100, 0));
        GnSlider->setMinimum(-100);
        GnSlider->setMaximum(100);
        GnSlider->setValue(0);
        GnSlider->setSliderPosition(0);
        GnSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(GnSlider, 3, 1, 1, 1);

        autoGainBtn = new QPushButton(groupBox_3);
        autoGainBtn->setObjectName(QString::fromUtf8("autoGainBtn"));
        autoGainBtn->setMinimumSize(QSize(18, 18));
        autoGainBtn->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(autoGainBtn, 3, 3, 1, 1);

        edTm = new QLineEdit(groupBox_3);
        edTm->setObjectName(QString::fromUtf8("edTm"));
        edTm->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(edTm, 2, 2, 1, 1);

        TmSlider = new QSlider(groupBox_3);
        TmSlider->setObjectName(QString::fromUtf8("TmSlider"));
        TmSlider->setMinimumSize(QSize(100, 0));
        TmSlider->setMinimum(-100);
        TmSlider->setMaximum(100);
        TmSlider->setValue(0);
        TmSlider->setSliderPosition(0);
        TmSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(TmSlider, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        TrSlider = new QSlider(groupBox_3);
        TrSlider->setObjectName(QString::fromUtf8("TrSlider"));
        TrSlider->setMinimumSize(QSize(100, 0));
        TrSlider->setMinimum(-100);
        TrSlider->setMaximum(100);
        TrSlider->setValue(0);
        TrSlider->setSliderPosition(0);
        TrSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(TrSlider, 1, 1, 1, 1);

        edTr = new QLineEdit(groupBox_3);
        edTr->setObjectName(QString::fromUtf8("edTr"));
        edTr->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(edTr, 1, 2, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        edGn = new QLineEdit(groupBox_3);
        edGn->setObjectName(QString::fromUtf8("edGn"));
        edGn->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(edGn, 3, 2, 1, 1);

        zoomVallBtn = new QPushButton(groupBox_3);
        zoomVallBtn->setObjectName(QString::fromUtf8("zoomVallBtn"));
        zoomVallBtn->setMinimumSize(QSize(18, 18));
        zoomVallBtn->setMaximumSize(QSize(18, 18));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Zv.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        zoomVallBtn->setIcon(icon8);

        gridLayout->addWidget(zoomVallBtn, 2, 3, 1, 1);

        zoomHallBtn = new QPushButton(groupBox_3);
        zoomHallBtn->setObjectName(QString::fromUtf8("zoomHallBtn"));
        zoomHallBtn->setMinimumSize(QSize(18, 18));
        zoomHallBtn->setMaximumSize(QSize(18, 18));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/Zh.png"), QSize(),
                      QIcon::Normal, QIcon::Off);
        zoomHallBtn->setIcon(icon9);

        gridLayout->addWidget(zoomHallBtn, 1, 3, 1, 1);

        horizontalLayout_2->addLayout(gridLayout);

        horizontalLayout_5->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(frame);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_9 = new QVBoxLayout(groupBox_4);
        verticalLayout_9->setSpacing(2);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(
            QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(2, -1, 2, -1);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        ckFilt = new QCheckBox(groupBox_4);
        ckFilt->setObjectName(QString::fromUtf8("ckFilt"));

        verticalLayout_5->addWidget(ckFilt);

        ckAgc = new QCheckBox(groupBox_4);
        ckAgc->setObjectName(QString::fromUtf8("ckAgc"));

        verticalLayout_5->addWidget(ckAgc);

        ckNorm = new QCheckBox(groupBox_4);
        ckNorm->setObjectName(QString::fromUtf8("ckNorm"));
        ckNorm->setChecked(true);

        verticalLayout_5->addWidget(ckNorm);

        ckDly = new QCheckBox(groupBox_4);
        ckDly->setObjectName(QString::fromUtf8("ckDly"));

        verticalLayout_5->addWidget(ckDly);

        horizontalLayout_4->addLayout(verticalLayout_5);

        procParmBtn = new QPushButton(groupBox_4);
        procParmBtn->setObjectName(QString::fromUtf8("procParmBtn"));
        procParmBtn->setMaximumSize(QSize(23, 23));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/Procp.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        procParmBtn->setIcon(icon10);

        horizontalLayout_4->addWidget(procParmBtn);

        verticalLayout_9->addLayout(horizontalLayout_4);

        horizontalLayout_5->addWidget(groupBox_4);

        groupBox_13 = new QGroupBox(frame);
        groupBox_13->setObjectName(QString::fromUtf8("groupBox_13"));
        verticalLayout_26 = new QVBoxLayout(groupBox_13);
        verticalLayout_26->setSpacing(2);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(
            QString::fromUtf8("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(2, 2, 2, 2);
        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(3);
        verticalLayout_27->setObjectName(
            QString::fromUtf8("verticalLayout_27"));
        verticalLayout_27->setContentsMargins(2, -1, -1, -1);
        rbDirNorm = new QRadioButton(groupBox_13);
        rbDirNorm->setObjectName(QString::fromUtf8("rbDirNorm"));
        rbDirNorm->setChecked(true);

        verticalLayout_27->addWidget(rbDirNorm);

        rbDirRev = new QRadioButton(groupBox_13);
        rbDirRev->setObjectName(QString::fromUtf8("rbDirRev"));
        rbDirRev->setChecked(false);

        verticalLayout_27->addWidget(rbDirRev);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum,
                                         QSizePolicy::Expanding);

        verticalLayout_27->addItem(verticalSpacer);

        verticalLayout_26->addLayout(verticalLayout_27);

        horizontalLayout_5->addWidget(groupBox_13);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        verticalLayout_10->addWidget(frame);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(
            QString::fromUtf8("horizontalLayout_9"));
        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred,
                                QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(
            frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy3);
        frame_8->setMinimumSize(QSize(32, 150));
        frame_8->setMaximumSize(QSize(32, 16777215));
        frame_8->setAutoFillBackground(true);
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        zoomAllBtn = new QPushButton(frame_8);
        zoomAllBtn->setObjectName(QString::fromUtf8("zoomAllBtn"));
        zoomAllBtn->setGeometry(QRect(4, 4, 25, 25));
        sizePolicy1.setHeightForWidth(
            zoomAllBtn->sizePolicy().hasHeightForWidth());
        zoomAllBtn->setSizePolicy(sizePolicy1);
        zoomAllBtn->setMinimumSize(QSize(25, 25));
        zoomAllBtn->setMaximumSize(QSize(25, 25));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/ZoomA.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        zoomAllBtn->setIcon(icon11);
        zoomWinBtn = new QPushButton(frame_8);
        zoomWinBtn->setObjectName(QString::fromUtf8("zoomWinBtn"));
        zoomWinBtn->setGeometry(QRect(4, 35, 25, 25));
        sizePolicy1.setHeightForWidth(
            zoomWinBtn->sizePolicy().hasHeightForWidth());
        zoomWinBtn->setSizePolicy(sizePolicy1);
        zoomWinBtn->setMinimumSize(QSize(25, 25));
        zoomWinBtn->setMaximumSize(QSize(25, 25));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/ZoomW.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        zoomWinBtn->setIcon(icon12);
        zoomOutBtn = new QPushButton(frame_8);
        zoomOutBtn->setObjectName(QString::fromUtf8("zoomOutBtn"));
        zoomOutBtn->setGeometry(QRect(4, 66, 25, 25));
        sizePolicy1.setHeightForWidth(
            zoomOutBtn->sizePolicy().hasHeightForWidth());
        zoomOutBtn->setSizePolicy(sizePolicy1);
        zoomOutBtn->setMinimumSize(QSize(25, 25));
        zoomOutBtn->setMaximumSize(QSize(25, 25));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/ZoomO.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        zoomOutBtn->setIcon(icon13);
        zoomInBtn = new QPushButton(frame_8);
        zoomInBtn->setObjectName(QString::fromUtf8("zoomInBtn"));
        zoomInBtn->setGeometry(QRect(4, 97, 25, 25));
        sizePolicy1.setHeightForWidth(
            zoomInBtn->sizePolicy().hasHeightForWidth());
        zoomInBtn->setSizePolicy(sizePolicy1);
        zoomInBtn->setMinimumSize(QSize(25, 25));
        zoomInBtn->setMaximumSize(QSize(25, 25));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/ZoomI.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        zoomInBtn->setIcon(icon14);
        zoomPreBtn = new QPushButton(frame_8);
        zoomPreBtn->setObjectName(QString::fromUtf8("zoomPreBtn"));
        zoomPreBtn->setGeometry(QRect(4, 128, 25, 25));
        sizePolicy1.setHeightForWidth(
            zoomPreBtn->sizePolicy().hasHeightForWidth());
        zoomPreBtn->setSizePolicy(sizePolicy1);
        zoomPreBtn->setMinimumSize(QSize(25, 25));
        zoomPreBtn->setMaximumSize(QSize(25, 25));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/ZoomP.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        zoomPreBtn->setIcon(icon15);
        axisBtn = new QPushButton(frame_8);
        axisBtn->setObjectName(QString::fromUtf8("axisBtn"));
        axisBtn->setGeometry(QRect(4, 180, 25, 25));
        sizePolicy1.setHeightForWidth(
            axisBtn->sizePolicy().hasHeightForWidth());
        axisBtn->setSizePolicy(sizePolicy1);
        axisBtn->setMinimumSize(QSize(25, 25));
        axisBtn->setMaximumSize(QSize(25, 25));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/Axes.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        axisBtn->setIcon(icon16);

        horizontalLayout_9->addWidget(frame_8);

        seisFrame1 = new QFrame(frame_2);
        seisFrame1->setObjectName(QString::fromUtf8("seisFrame1"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(
            seisFrame1->sizePolicy().hasHeightForWidth());
        seisFrame1->setSizePolicy(sizePolicy4);
        seisFrame1->setMinimumSize(QSize(100, 160));
        seisFrame1->setFrameShape(QFrame::StyledPanel);
        seisFrame1->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(seisFrame1);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        seisFrame = new QFrame(seisFrame1);
        seisFrame->setObjectName(QString::fromUtf8("seisFrame"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        seisFrame->setPalette(palette);
        seisFrame->setAutoFillBackground(true);
        seisFrame->setFrameShape(QFrame::StyledPanel);
        seisFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(seisFrame);

        horizontalLayout_9->addWidget(seisFrame1);

        verticalLayout_10->addLayout(horizontalLayout_9);

        verticalLayout_8->addWidget(frame_2);

        SeisTab->addTab(HdrsPg, QString());
        HdrLstPg = new QWidget();
        HdrLstPg->setObjectName(QString::fromUtf8("HdrLstPg"));
        horizontalLayout_8 = new QHBoxLayout(HdrLstPg);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(
            QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        hdrsLstTab = new QTabWidget(HdrLstPg);
        hdrsLstTab->setObjectName(QString::fromUtf8("hdrsLstTab"));
        hdrsLstTab->setAutoFillBackground(true);
        hdrsViewTab = new QWidget();
        hdrsViewTab->setObjectName(QString::fromUtf8("hdrsViewTab"));
        hdrsViewTab->setAutoFillBackground(true);
        horizontalLayout_12 = new QHBoxLayout(hdrsViewTab);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(
            QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(hdrsViewTab);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox_6 = new QGroupBox(splitter_2);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setMinimumSize(QSize(250, 0));
        groupBox_6->setMaximumSize(QSize(350, 16777215));
        verticalLayout_17 = new QVBoxLayout(groupBox_6);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(
            QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(groupBox_6);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        sizePolicy.setHeightForWidth(frame_4->sizePolicy().hasHeightForWidth());
        frame_4->setSizePolicy(sizePolicy);
        frame_4->setMinimumSize(QSize(0, 30));
        frame_4->setMaximumSize(QSize(16777215, 30));
        frame_4->setFrameShape(QFrame::Box);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        btnCkAll = new QPushButton(frame_4);
        btnCkAll->setObjectName(QString::fromUtf8("btnCkAll"));
        sizePolicy1.setHeightForWidth(
            btnCkAll->sizePolicy().hasHeightForWidth());
        btnCkAll->setSizePolicy(sizePolicy1);
        btnCkAll->setMinimumSize(QSize(25, 25));
        btnCkAll->setMaximumSize(QSize(25, 25));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/ChkAll.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnCkAll->setIcon(icon17);

        horizontalLayout->addWidget(btnCkAll);

        btnCkNon = new QPushButton(frame_4);
        btnCkNon->setObjectName(QString::fromUtf8("btnCkNon"));
        sizePolicy1.setHeightForWidth(
            btnCkNon->sizePolicy().hasHeightForWidth());
        btnCkNon->setSizePolicy(sizePolicy1);
        btnCkNon->setMinimumSize(QSize(25, 25));
        btnCkNon->setMaximumSize(QSize(25, 25));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/ChkNon.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnCkNon->setIcon(icon18);

        horizontalLayout->addWidget(btnCkNon);

        horizontalSpacer =
            new QSpacerItem(13, 19, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnEdHdr = new QPushButton(frame_4);
        btnEdHdr->setObjectName(QString::fromUtf8("btnEdHdr"));
        btnEdHdr->setEnabled(true);
        sizePolicy1.setHeightForWidth(
            btnEdHdr->sizePolicy().hasHeightForWidth());
        btnEdHdr->setSizePolicy(sizePolicy1);
        btnEdHdr->setMinimumSize(QSize(25, 25));
        btnEdHdr->setMaximumSize(QSize(25, 25));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/edit_hdr.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnEdHdr->setIcon(icon19);

        horizontalLayout->addWidget(btnEdHdr);

        horizontalSpacer_3 = new QSpacerItem(111, 19, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        verticalLayout_17->addWidget(frame_4);

        hdrListCkFrame = new QFrame(groupBox_6);
        hdrListCkFrame->setObjectName(QString::fromUtf8("hdrListCkFrame"));
        hdrListCkFrame->setFrameShape(QFrame::Box);
        hdrListCkFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_17->addWidget(hdrListCkFrame);

        splitter_2->addWidget(groupBox_6);
        groupBox_7 = new QGroupBox(splitter_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_21 = new QVBoxLayout(groupBox_7);
        verticalLayout_21->setSpacing(2);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(
            QString::fromUtf8("verticalLayout_21"));
        verticalLayout_21->setContentsMargins(2, 2, 2, 2);
        frame_5 = new QFrame(groupBox_7);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        sizePolicy.setHeightForWidth(frame_5->sizePolicy().hasHeightForWidth());
        frame_5->setSizePolicy(sizePolicy);
        frame_5->setMinimumSize(QSize(0, 30));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_18 = new QVBoxLayout(frame_5);
        verticalLayout_18->setSpacing(2);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(
            QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(2, 2, 2, 2);
        groupBox_8 = new QGroupBox(frame_5);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        horizontalLayout_10 = new QHBoxLayout(groupBox_8);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(
            QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 2, 0, 0);
        cbSidx = new QComboBox(groupBox_8);
        cbSidx->addItem(QString());
        cbSidx->setObjectName(QString::fromUtf8("cbSidx"));

        horizontalLayout_10->addWidget(cbSidx);

        cbSsign = new QComboBox(groupBox_8);
        cbSsign->addItem(QString());
        cbSsign->addItem(QString());
        cbSsign->addItem(QString());
        cbSsign->addItem(QString());
        cbSsign->setObjectName(QString::fromUtf8("cbSsign"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(
            cbSsign->sizePolicy().hasHeightForWidth());
        cbSsign->setSizePolicy(sizePolicy5);
        cbSsign->setMinimumSize(QSize(40, 0));
        cbSsign->setMaximumSize(QSize(40, 16777215));

        horizontalLayout_10->addWidget(cbSsign);

        cbSval = new QComboBox(groupBox_8);
        cbSval->addItem(QString());
        cbSval->setObjectName(QString::fromUtf8("cbSval"));
        cbSval->setMinimumSize(QSize(80, 0));
        cbSval->setEditable(true);

        horizontalLayout_10->addWidget(cbSval);

        horizontalSpacer_4 =
            new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        btnSbin = new QPushButton(groupBox_8);
        btnSbin->setObjectName(QString::fromUtf8("btnSbin"));
        sizePolicy1.setHeightForWidth(
            btnSbin->sizePolicy().hasHeightForWidth());
        btnSbin->setSizePolicy(sizePolicy1);
        btnSbin->setMinimumSize(QSize(25, 25));
        btnSbin->setMaximumSize(QSize(25, 25));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/Findb.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnSbin->setIcon(icon20);

        horizontalLayout_10->addWidget(btnSbin);

        btnSfwd = new QPushButton(groupBox_8);
        btnSfwd->setObjectName(QString::fromUtf8("btnSfwd"));
        sizePolicy1.setHeightForWidth(
            btnSfwd->sizePolicy().hasHeightForWidth());
        btnSfwd->setSizePolicy(sizePolicy1);
        btnSfwd->setMinimumSize(QSize(25, 25));
        btnSfwd->setMaximumSize(QSize(25, 25));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/Ffwd.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnSfwd->setIcon(icon21);

        horizontalLayout_10->addWidget(btnSfwd);

        btnSbkw = new QPushButton(groupBox_8);
        btnSbkw->setObjectName(QString::fromUtf8("btnSbkw"));
        sizePolicy1.setHeightForWidth(
            btnSbkw->sizePolicy().hasHeightForWidth());
        btnSbkw->setSizePolicy(sizePolicy1);
        btnSbkw->setMinimumSize(QSize(25, 25));
        btnSbkw->setMaximumSize(QSize(25, 25));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/FindBkw.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnSbkw->setIcon(icon22);

        horizontalLayout_10->addWidget(btnSbkw);

        btnSstop = new QPushButton(groupBox_8);
        btnSstop->setObjectName(QString::fromUtf8("btnSstop"));
        btnSstop->setEnabled(false);
        sizePolicy1.setHeightForWidth(
            btnSstop->sizePolicy().hasHeightForWidth());
        btnSstop->setSizePolicy(sizePolicy1);
        btnSstop->setMinimumSize(QSize(25, 25));
        btnSstop->setMaximumSize(QSize(25, 25));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/SStp.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnSstop->setIcon(icon23);

        horizontalLayout_10->addWidget(btnSstop);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        btnLastTr = new QPushButton(groupBox_8);
        btnLastTr->setObjectName(QString::fromUtf8("btnLastTr"));
        sizePolicy1.setHeightForWidth(
            btnLastTr->sizePolicy().hasHeightForWidth());
        btnLastTr->setSizePolicy(sizePolicy1);
        btnLastTr->setMinimumSize(QSize(25, 25));
        btnLastTr->setMaximumSize(QSize(25, 25));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/GoBottom.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnLastTr->setIcon(icon24);

        horizontalLayout_10->addWidget(btnLastTr);

        btnFirstTr = new QPushButton(groupBox_8);
        btnFirstTr->setObjectName(QString::fromUtf8("btnFirstTr"));
        sizePolicy1.setHeightForWidth(
            btnFirstTr->sizePolicy().hasHeightForWidth());
        btnFirstTr->setSizePolicy(sizePolicy1);
        btnFirstTr->setMinimumSize(QSize(25, 25));
        btnFirstTr->setMaximumSize(QSize(25, 25));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/GoTop.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnFirstTr->setIcon(icon25);

        horizontalLayout_10->addWidget(btnFirstTr);

        verticalLayout_18->addWidget(groupBox_8);

        groupBox_9 = new QGroupBox(frame_5);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        horizontalLayout_11 = new QHBoxLayout(groupBox_9);
        horizontalLayout_11->setSpacing(2);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(
            QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(2, 2, 2, 2);
        lbElab = new QLabel(groupBox_9);
        lbElab->setObjectName(QString::fromUtf8("lbElab"));
        lbElab->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_11->addWidget(lbElab);

        edEcval = new QLineEdit(groupBox_9);
        edEcval->setObjectName(QString::fromUtf8("edEcval"));
        edEcval->setEnabled(false);
        edEcval->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_11->addWidget(edEcval);

        label_5 = new QLabel(groupBox_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(
            label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy6);
        label_5->setMaximumSize(QSize(10, 16777215));

        horizontalLayout_11->addWidget(label_5);

        cbEnval = new QComboBox(groupBox_9);
        cbEnval->setObjectName(QString::fromUtf8("cbEnval"));
        cbEnval->setEnabled(true);
        cbEnval->setEditable(true);

        horizontalLayout_11->addWidget(cbEnval);

        horizontalSpacer_6 =
            new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        btnUpdTrh = new QPushButton(groupBox_9);
        btnUpdTrh->setObjectName(QString::fromUtf8("btnUpdTrh"));
        sizePolicy1.setHeightForWidth(
            btnUpdTrh->sizePolicy().hasHeightForWidth());
        btnUpdTrh->setSizePolicy(sizePolicy1);
        btnUpdTrh->setMinimumSize(QSize(25, 25));
        btnUpdTrh->setMaximumSize(QSize(25, 25));
        btnUpdTrh->setIcon(icon7);

        horizontalLayout_11->addWidget(btnUpdTrh);

        horizontalSpacer_7 = new QSpacerItem(111, 20, QSizePolicy::Expanding,
                                             QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_7);

        verticalLayout_18->addWidget(groupBox_9);

        verticalLayout_21->addWidget(frame_5);

        hdrListDtFrame = new QFrame(groupBox_7);
        hdrListDtFrame->setObjectName(QString::fromUtf8("hdrListDtFrame"));
        hdrListDtFrame->setEnabled(true);
        hdrListDtFrame->setFrameShape(QFrame::Box);
        hdrListDtFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_21->addWidget(hdrListDtFrame);

        splitter_2->addWidget(groupBox_7);

        horizontalLayout_12->addWidget(splitter_2);

        hdrsLstTab->addTab(hdrsViewTab, QString());
        hdrsEditTab = new QWidget();
        hdrsEditTab->setObjectName(QString::fromUtf8("hdrsEditTab"));
        hdrsEditTab->setAutoFillBackground(true);
        verticalLayout_25 = new QVBoxLayout(hdrsEditTab);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName(
            QString::fromUtf8("verticalLayout_25"));
        splitter_3 = new QSplitter(hdrsEditTab);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        HeBox = new QGroupBox(splitter_3);
        HeBox->setObjectName(QString::fromUtf8("HeBox"));
        HeBox->setMinimumSize(QSize(250, 0));
        HeBox->setMaximumSize(QSize(350, 16777215));
        verticalLayout_24 = new QVBoxLayout(HeBox);
        verticalLayout_24->setSpacing(0);
        verticalLayout_24->setContentsMargins(11, 11, 11, 11);
        verticalLayout_24->setObjectName(
            QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(HeBox);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        sizePolicy.setHeightForWidth(frame_7->sizePolicy().hasHeightForWidth());
        frame_7->setSizePolicy(sizePolicy);
        frame_7->setMinimumSize(QSize(0, 30));
        frame_7->setMaximumSize(QSize(16777215, 30));
        frame_7->setFrameShape(QFrame::Box);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_7);
        horizontalLayout_17->setSpacing(2);
        horizontalLayout_17->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_17->setObjectName(
            QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(2, 2, 2, 2);
        btnCkNonE = new QPushButton(frame_7);
        btnCkNonE->setObjectName(QString::fromUtf8("btnCkNonE"));
        sizePolicy1.setHeightForWidth(
            btnCkNonE->sizePolicy().hasHeightForWidth());
        btnCkNonE->setSizePolicy(sizePolicy1);
        btnCkNonE->setMinimumSize(QSize(25, 25));
        btnCkNonE->setMaximumSize(QSize(25, 25));
        btnCkNonE->setIcon(icon18);

        horizontalLayout_17->addWidget(btnCkNonE);

        horizontalSpacer_16 = new QSpacerItem(111, 19, QSizePolicy::Expanding,
                                              QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_16);

        verticalLayout_24->addWidget(frame_7);

        hdrElstCkFrame = new QFrame(HeBox);
        hdrElstCkFrame->setObjectName(QString::fromUtf8("hdrElstCkFrame"));
        hdrElstCkFrame->setFrameShape(QFrame::Box);
        hdrElstCkFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_24->addWidget(hdrElstCkFrame);

        splitter_3->addWidget(HeBox);
        groupBox_12 = new QGroupBox(splitter_3);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        verticalLayout_22 = new QVBoxLayout(groupBox_12);
        verticalLayout_22->setSpacing(2);
        verticalLayout_22->setContentsMargins(11, 11, 11, 11);
        verticalLayout_22->setObjectName(
            QString::fromUtf8("verticalLayout_22"));
        verticalLayout_22->setContentsMargins(2, 2, 2, 2);
        frame_6 = new QFrame(groupBox_12);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy);
        frame_6->setMinimumSize(QSize(0, 30));
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(frame_6);
        verticalLayout_23->setSpacing(2);
        verticalLayout_23->setContentsMargins(11, 11, 11, 11);
        verticalLayout_23->setObjectName(
            QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(2, 2, 2, 2);
        EcBox = new QGroupBox(frame_6);
        EcBox->setObjectName(QString::fromUtf8("EcBox"));
        horizontalLayout_15 = new QHBoxLayout(EcBox);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(
            QString::fromUtf8("horizontalLayout_15"));
        btnHexp = new QPushButton(EcBox);
        btnHexp->setObjectName(QString::fromUtf8("btnHexp"));
        sizePolicy1.setHeightForWidth(
            btnHexp->sizePolicy().hasHeightForWidth());
        btnHexp->setSizePolicy(sizePolicy1);
        btnHexp->setMinimumSize(QSize(25, 25));
        btnHexp->setMaximumSize(QSize(25, 25));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/Hexp.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnHexp->setIcon(icon26);

        horizontalLayout_15->addWidget(btnHexp);

        btnNexp = new QPushButton(EcBox);
        btnNexp->setObjectName(QString::fromUtf8("btnNexp"));
        sizePolicy1.setHeightForWidth(
            btnNexp->sizePolicy().hasHeightForWidth());
        btnNexp->setSizePolicy(sizePolicy1);
        btnNexp->setMinimumSize(QSize(25, 25));
        btnNexp->setMaximumSize(QSize(25, 25));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/Nexp.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnNexp->setIcon(icon27);

        horizontalLayout_15->addWidget(btnNexp);

        btnLexp = new QPushButton(EcBox);
        btnLexp->setObjectName(QString::fromUtf8("btnLexp"));
        sizePolicy1.setHeightForWidth(
            btnLexp->sizePolicy().hasHeightForWidth());
        btnLexp->setSizePolicy(sizePolicy1);
        btnLexp->setMinimumSize(QSize(25, 25));
        btnLexp->setMaximumSize(QSize(25, 25));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/Lexp.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnLexp->setIcon(icon28);

        horizontalLayout_15->addWidget(btnLexp);

        horizontalSpacer_12 =
            new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_12);

        btnClrExp = new QPushButton(EcBox);
        btnClrExp->setObjectName(QString::fromUtf8("btnClrExp"));
        sizePolicy1.setHeightForWidth(
            btnClrExp->sizePolicy().hasHeightForWidth());
        btnClrExp->setSizePolicy(sizePolicy1);
        btnClrExp->setMinimumSize(QSize(25, 25));
        btnClrExp->setMaximumSize(QSize(25, 25));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/delete_item.png"), QSize(),
                       QIcon::Normal, QIcon::Off);
        btnClrExp->setIcon(icon29);

        horizontalLayout_15->addWidget(btnClrExp);

        horizontalSpacer_14 =
            new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        btnUpdE = new QPushButton(EcBox);
        btnUpdE->setObjectName(QString::fromUtf8("btnUpdE"));
        btnUpdE->setEnabled(true);
        sizePolicy1.setHeightForWidth(
            btnUpdE->sizePolicy().hasHeightForWidth());
        btnUpdE->setSizePolicy(sizePolicy1);
        btnUpdE->setMinimumSize(QSize(25, 25));
        btnUpdE->setMaximumSize(QSize(25, 25));
        btnUpdE->setIcon(icon7);

        horizontalLayout_15->addWidget(btnUpdE);

        btnUndE = new QPushButton(EcBox);
        btnUndE->setObjectName(QString::fromUtf8("btnUndE"));
        btnUndE->setEnabled(false);
        sizePolicy1.setHeightForWidth(
            btnUndE->sizePolicy().hasHeightForWidth());
        btnUndE->setSizePolicy(sizePolicy1);
        btnUndE->setMinimumSize(QSize(25, 25));
        btnUndE->setMaximumSize(QSize(25, 25));
        btnUndE->setIcon(icon6);

        horizontalLayout_15->addWidget(btnUndE);

        horizontalSpacer_13 = new QSpacerItem(115, 20, QSizePolicy::Expanding,
                                              QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_13);

        btnLastTr_2 = new QPushButton(EcBox);
        btnLastTr_2->setObjectName(QString::fromUtf8("btnLastTr_2"));
        sizePolicy1.setHeightForWidth(
            btnLastTr_2->sizePolicy().hasHeightForWidth());
        btnLastTr_2->setSizePolicy(sizePolicy1);
        btnLastTr_2->setMinimumSize(QSize(25, 25));
        btnLastTr_2->setMaximumSize(QSize(25, 25));
        btnLastTr_2->setIcon(icon24);

        horizontalLayout_15->addWidget(btnLastTr_2);

        btnFirstTr_2 = new QPushButton(EcBox);
        btnFirstTr_2->setObjectName(QString::fromUtf8("btnFirstTr_2"));
        sizePolicy1.setHeightForWidth(
            btnFirstTr_2->sizePolicy().hasHeightForWidth());
        btnFirstTr_2->setSizePolicy(sizePolicy1);
        btnFirstTr_2->setMinimumSize(QSize(25, 25));
        btnFirstTr_2->setMaximumSize(QSize(25, 25));
        btnFirstTr_2->setIcon(icon25);

        horizontalLayout_15->addWidget(btnFirstTr_2);

        verticalLayout_23->addWidget(EcBox);

        groupBox_14 = new QGroupBox(frame_6);
        groupBox_14->setObjectName(QString::fromUtf8("groupBox_14"));
        horizontalLayout_16 = new QHBoxLayout(groupBox_14);
        horizontalLayout_16->setSpacing(2);
        horizontalLayout_16->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_16->setObjectName(
            QString::fromUtf8("horizontalLayout_16"));
        horizontalLayout_16->setContentsMargins(2, 2, 2, 2);
        edExpr = new QLineEdit(groupBox_14);
        edExpr->setObjectName(QString::fromUtf8("edExpr"));
        edExpr->setEnabled(false);

        horizontalLayout_16->addWidget(edExpr);

        verticalLayout_23->addWidget(groupBox_14);

        verticalLayout_22->addWidget(frame_6);

        hdrElstDtFrame = new QFrame(groupBox_12);
        hdrElstDtFrame->setObjectName(QString::fromUtf8("hdrElstDtFrame"));
        hdrElstDtFrame->setEnabled(true);
        hdrElstDtFrame->setFrameShape(QFrame::Box);
        hdrElstDtFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_22->addWidget(hdrElstDtFrame);

        splitter_3->addWidget(groupBox_12);

        verticalLayout_25->addWidget(splitter_3);

        hdrsLstTab->addTab(hdrsEditTab, QString());

        horizontalLayout_8->addWidget(hdrsLstTab);

        SeisTab->addTab(HdrLstPg, QString());
        splitter->addWidget(SeisTab);

        verticalLayout_14->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1282, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuProcessing = new QMenu(menuBar);
        menuProcessing->setObjectName(QString::fromUtf8("menuProcessing"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuProcessing->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionOpen_Directory);
        menu_File->addAction(actionOpen_File);
        menu_File->addSeparator();
        menu_File->addAction(actionSave_As);
        menu_File->addSeparator();
        menu_File->addAction(actionLoad_Text_Header_from_File);
        menu_File->addAction(actionExport_Text_Header_to_File);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Help->addAction(actionAbout);
        menuView->addAction(actionAxes_Setup);
        menuProcessing->addAction(actionParameters);
        menuProcessing->addAction(actionHeader_Editor);

        retranslateUi(MainWindow);
        QObject::connect(actionE_xit, SIGNAL(triggered()), MainWindow,
                         SLOT(close()));

        InfoTab->setCurrentIndex(0);
        tabFhdr->setCurrentIndex(1);
        TracePg->setCurrentIndex(0);
        SeisTab->setCurrentIndex(0);
        hdrsLstTab->setCurrentIndex(0);
        cbSidx->setCurrentIndex(0);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(
            QCoreApplication::translate("MainWindow", "SegDSeeMp", nullptr));
        actionOpen_Directory->setText(QCoreApplication::translate(
            "MainWindow", "Open &Directory", nullptr));
        actionE_xit->setText(
            QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionAbout->setText(
            QCoreApplication::translate("MainWindow", "About", nullptr));
        actionAxes_Setup->setText(
            QCoreApplication::translate("MainWindow", "Axes Setup", nullptr));
        actionParameters->setText(
            QCoreApplication::translate("MainWindow", "Processing", nullptr));
        actionHeader_Editor->setText(QCoreApplication::translate(
            "MainWindow", "Header Editor", nullptr));
        actionLoad_Text_Header_from_File->setText(QCoreApplication::translate(
            "MainWindow", "Load Text Header from File", nullptr));
        actionExport_Text_Header_to_File->setText(QCoreApplication::translate(
            "MainWindow", "Export Text Header to File", nullptr));
        actionSave_As->setText(
            QCoreApplication::translate("MainWindow", "Save As", nullptr));
        actionOpen_File->setText(
            QCoreApplication::translate("MainWindow", "Open File", nullptr));
        dirGroup->setTitle(QCoreApplication::translate(
            "MainWindow", "Directory List", nullptr));
        selDirBtn->setText(QString());
        refreshBtn->setText(QString());
        goBackBtn->setText(QString());
        HdrBox->setTitle(
            QCoreApplication::translate("MainWindow", "Headers", nullptr));
        InfoTab->setTabText(
            InfoTab->indexOf(SumPg),
            QCoreApplication::translate("MainWindow", "Summary", nullptr));
        groupBox_5->setTitle(QString());
        txtCol->setText(
            QCoreApplication::translate("MainWindow", "Col=", nullptr));
        txtRow->setText(
            QCoreApplication::translate("MainWindow", "Row=", nullptr));
        txtIns->setText(
            QCoreApplication::translate("MainWindow", "INS", nullptr));
        groupBox_10->setTitle(QString());
        btnTxtRd->setText(
            QCoreApplication::translate("MainWindow", "From File", nullptr));
        btnTxtRdx->setText(QString());
        btnTxtRst->setText(
            QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btnTxtUpd->setText(
            QCoreApplication::translate("MainWindow", "Update", nullptr));
        tabFhdr->setTabText(
            tabFhdr->indexOf(TxtHdrTab),
            QCoreApplication::translate("MainWindow", "Text Header", nullptr));
        ckTrEd->setText(QCoreApplication::translate(
            "MainWindow", "Allow to edit all items (can be dangerous)",
            nullptr));
        groupBox_11->setTitle(QString());
        btnBinRst->setText(
            QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btnBinUpd->setText(
            QCoreApplication::translate("MainWindow", "Update", nullptr));
        tabFhdr->setTabText(
            tabFhdr->indexOf(BinHdrTab),
            QCoreApplication::translate("MainWindow", "Bin Header", nullptr));
        InfoTab->setTabText(
            InfoTab->indexOf(FileHdrPg),
            QCoreApplication::translate("MainWindow", "File Headers", nullptr));
        TracePg->setTabText(
            TracePg->indexOf(TrcHdrTab),
            QCoreApplication::translate("MainWindow", "Header", nullptr));
        TracePg->setTabText(
            TracePg->indexOf(TrcDatTab),
            QCoreApplication::translate("MainWindow", "Data", nullptr));
        InfoTab->setTabText(
            InfoTab->indexOf(TrcTab),
            QCoreApplication::translate("MainWindow", "Trace", nullptr));
        groupBox->setTitle(
            QCoreApplication::translate("MainWindow", "Display Mode", nullptr));
        ckWiggle->setText(
            QCoreApplication::translate("MainWindow", "Wiggle", nullptr));
        ckGray->setText(
            QCoreApplication::translate("MainWindow", "Gray", nullptr));
        ckColor->setText(
            QCoreApplication::translate("MainWindow", "Color", nullptr));
        ckTimLines->setText(
            QCoreApplication::translate("MainWindow", "Timelines", nullptr));
        groupBox_2->setTitle(
            QCoreApplication::translate("MainWindow", "Wggle Fill", nullptr));
        rbNon->setText(
            QCoreApplication::translate("MainWindow", "None", nullptr));
        rbPos->setText(
            QCoreApplication::translate("MainWindow", "Positive", nullptr));
        rbNeg->setText(
            QCoreApplication::translate("MainWindow", "Negative", nullptr));
        groupBox_3->setTitle(
            QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label_2->setText(
            QCoreApplication::translate("MainWindow", "Time", nullptr));
        autoGainBtn->setText(
            QCoreApplication::translate("MainWindow", "A", nullptr));
        label_3->setText(
            QCoreApplication::translate("MainWindow", "Gain", nullptr));
        label->setText(
            QCoreApplication::translate("MainWindow", "Traces", nullptr));
        zoomVallBtn->setText(QString());
        zoomHallBtn->setText(QString());
        groupBox_4->setTitle(
            QCoreApplication::translate("MainWindow", "Processing", nullptr));
        ckFilt->setText(
            QCoreApplication::translate("MainWindow", "Filter", nullptr));
        ckAgc->setText(
            QCoreApplication::translate("MainWindow", "Agc", nullptr));
        ckNorm->setText(
            QCoreApplication::translate("MainWindow", "Norm", nullptr));
        ckDly->setText(
            QCoreApplication::translate("MainWindow", "Use delay", nullptr));
        procParmBtn->setText(QString());
        groupBox_13->setTitle(
            QCoreApplication::translate("MainWindow", "Direction", nullptr));
        rbDirNorm->setText(
            QCoreApplication::translate("MainWindow", "Normal", nullptr));
        rbDirRev->setText(
            QCoreApplication::translate("MainWindow", "Reversed", nullptr));
        zoomAllBtn->setText(QString());
        zoomWinBtn->setText(QString());
        zoomOutBtn->setText(QString());
        zoomInBtn->setText(QString());
        zoomPreBtn->setText(QString());
        axisBtn->setText(QString());
        SeisTab->setTabText(
            SeisTab->indexOf(HdrsPg),
            QCoreApplication::translate("MainWindow", "Seismic", nullptr));
        groupBox_6->setTitle(QString());
        btnCkAll->setText(QString());
#if QT_CONFIG(tooltip)
        btnCkNon->setToolTip(
            QCoreApplication::translate("MainWindow", "Uncheck All", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCkNon->setText(QString());
#if QT_CONFIG(tooltip)
        btnEdHdr->setToolTip(QCoreApplication::translate(
            "MainWindow", "Header Description Editor", nullptr));
#endif // QT_CONFIG(tooltip)
        btnEdHdr->setText(QString());
        groupBox_7->setTitle(QString());
        groupBox_8->setTitle(
            QCoreApplication::translate("MainWindow", "Search", nullptr));
        cbSidx->setItemText(
            0, QCoreApplication::translate("MainWindow", "Trace#", nullptr));

        cbSsign->setItemText(
            0, QCoreApplication::translate("MainWindow", "=", nullptr));
        cbSsign->setItemText(1, QCoreApplication::translate(
                                    "MainWindow", "\342\211\240", nullptr));
        cbSsign->setItemText(
            2, QCoreApplication::translate("MainWindow", "+", nullptr));
        cbSsign->setItemText(
            3, QCoreApplication::translate("MainWindow", "-", nullptr));

        cbSval->setItemText(
            0, QCoreApplication::translate("MainWindow", "1", nullptr));

        btnSbin->setText(QString());
        btnSfwd->setText(QString());
        btnSbkw->setText(QString());
        btnSstop->setText(QString());
        btnLastTr->setText(QString());
        btnFirstTr->setText(QString());
        groupBox_9->setTitle(
            QCoreApplication::translate("MainWindow", "Edit", nullptr));
        lbElab->setText(
            QCoreApplication::translate("MainWindow", "Trace #", nullptr));
        label_5->setText(
            QCoreApplication::translate("MainWindow", "=", nullptr));
        btnUpdTrh->setText(QString());
        hdrsLstTab->setTabText(
            hdrsLstTab->indexOf(hdrsViewTab),
            QCoreApplication::translate("MainWindow", "View", nullptr));
        HeBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        btnCkNonE->setToolTip(
            QCoreApplication::translate("MainWindow", "Uncheck All", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCkNonE->setText(QString());
        groupBox_12->setTitle(QString());
        EcBox->setTitle(QString());
        btnHexp->setText(QString());
        btnNexp->setText(QString());
        btnLexp->setText(QString());
        btnClrExp->setText(QString());
        btnUpdE->setText(QString());
        btnUndE->setText(QString());
        btnLastTr_2->setText(QString());
        btnFirstTr_2->setText(QString());
        groupBox_14->setTitle(
            QCoreApplication::translate("MainWindow", "Expression", nullptr));
        hdrsLstTab->setTabText(
            hdrsLstTab->indexOf(hdrsEditTab),
            QCoreApplication::translate("MainWindow", "Change", nullptr));
        SeisTab->setTabText(SeisTab->indexOf(HdrLstPg),
                            QCoreApplication::translate(
                                "MainWindow", "Trace Headers", nullptr));
        menu_File->setTitle(
            QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Help->setTitle(
            QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuView->setTitle(
            QCoreApplication::translate("MainWindow", "View", nullptr));
        menuProcessing->setTitle(
            QCoreApplication::translate("MainWindow", "Tools", nullptr));
    } // retranslateUi
};

namespace Ui {
    class MainWindow : public Ui_MainWindow
    {
    };
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
