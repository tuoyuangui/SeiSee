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
    QAction *actionUser_Manual;
    QAction *actionParameters;
    QAction *actionUser_s_Manual_Russian;
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
    QGroupBox *SeisBox;
    QHBoxLayout *horizontalLayout;
    QTabWidget *SeisTab;
    QWidget *HdrsPg;
    QHBoxLayout *horizontalLayout_11;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_9;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *hdrsBtmBtn;
    QPushButton *hdrsTopBtn;
    QFrame *hdrFrame;
    QPlainTextEdit *logText;
    QWidget *ChnPg;
    QHBoxLayout *horizontalLayout_8;
    QFrame *chsFrame;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnCkNon;
    QPushButton *btnCkAll;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_11;
    QCheckBox *ckAll;
    QCheckBox *ckSng;
    QFrame *chsGridFrame;
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
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_4;
    QRadioButton *rbNon;
    QRadioButton *rbPos;
    QRadioButton *rbNeg;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *edTm;
    QLabel *label;
    QLineEdit *edTr;
    QPushButton *zoomVallBtn;
    QLabel *label_2;
    QSlider *TmSlider;
    QPushButton *zoomHallBtn;
    QLabel *label_3;
    QSlider *GnSlider;
    QLineEdit *edGn;
    QPushButton *aGainBtn;
    QSlider *TrSlider;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *ckFilt;
    QCheckBox *ckAgc;
    QCheckBox *ckNorm;
    QPushButton *procParmBtn;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_9;
    QFrame *frame_8;
    QPushButton *zoomAllBtn;
    QPushButton *zoomWinBtn;
    QPushButton *zoomOutBtn;
    QPushButton *zoomInBtn;
    QPushButton *zoomPreBtn;
    QFrame *seisFrame1;
    QVBoxLayout *verticalLayout;
    QFrame *seisFrame;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menuProcessing;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(990, 683);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/SegDSee.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionOpen_Directory = new QAction(MainWindow);
        actionOpen_Directory->setObjectName(QString::fromUtf8("actionOpen_Directory"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/OpenDir.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_Directory->setIcon(icon1);
        actionE_xit = new QAction(MainWindow);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionUser_Manual = new QAction(MainWindow);
        actionUser_Manual->setObjectName(QString::fromUtf8("actionUser_Manual"));
        actionParameters = new QAction(MainWindow);
        actionParameters->setObjectName(QString::fromUtf8("actionParameters"));
        actionUser_s_Manual_Russian = new QAction(MainWindow);
        actionUser_s_Manual_Russian->setObjectName(QString::fromUtf8("actionUser_s_Manual_Russian"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_14 = new QVBoxLayout(centralWidget);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        splitter->setOpaqueResize(true);
        splitter->setHandleWidth(3);
        splitter->setChildrenCollapsible(false);
        dirGroup = new QGroupBox(splitter);
        dirGroup->setObjectName(QString::fromUtf8("dirGroup"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dirGroup->sizePolicy().hasHeightForWidth());
        dirGroup->setSizePolicy(sizePolicy);
        dirGroup->setMinimumSize(QSize(250, 0));
        dirGroup->setMaximumSize(QSize(1000, 16777215));
        verticalLayout_2 = new QVBoxLayout(dirGroup);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        frame_3 = new QFrame(dirGroup);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy1);
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
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 2, 0, 0);
        selDirBtn = new QPushButton(layoutWidget);
        selDirBtn->setObjectName(QString::fromUtf8("selDirBtn"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(selDirBtn->sizePolicy().hasHeightForWidth());
        selDirBtn->setSizePolicy(sizePolicy2);
        selDirBtn->setMinimumSize(QSize(25, 25));
        selDirBtn->setMaximumSize(QSize(25, 25));
        selDirBtn->setIcon(icon1);

        horizontalLayout_3->addWidget(selDirBtn);

        refreshBtn = new QPushButton(layoutWidget);
        refreshBtn->setObjectName(QString::fromUtf8("refreshBtn"));
        sizePolicy2.setHeightForWidth(refreshBtn->sizePolicy().hasHeightForWidth());
        refreshBtn->setSizePolicy(sizePolicy2);
        refreshBtn->setMinimumSize(QSize(25, 25));
        refreshBtn->setMaximumSize(QSize(25, 25));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        refreshBtn->setIcon(icon2);

        horizontalLayout_3->addWidget(refreshBtn);

        goBackBtn = new QPushButton(layoutWidget);
        goBackBtn->setObjectName(QString::fromUtf8("goBackBtn"));
        sizePolicy2.setHeightForWidth(goBackBtn->sizePolicy().hasHeightForWidth());
        goBackBtn->setSizePolicy(sizePolicy2);
        goBackBtn->setMinimumSize(QSize(25, 25));
        goBackBtn->setMaximumSize(QSize(25, 25));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/GoBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        goBackBtn->setIcon(icon3);

        horizontalLayout_3->addWidget(goBackBtn);


        verticalLayout_2->addWidget(frame_3);

        dirFrame = new QFrame(dirGroup);
        dirFrame->setObjectName(QString::fromUtf8("dirFrame"));
        dirFrame->setFrameShape(QFrame::StyledPanel);
        dirFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_2->addWidget(dirFrame);

        splitter->addWidget(dirGroup);
        SeisBox = new QGroupBox(splitter);
        SeisBox->setObjectName(QString::fromUtf8("SeisBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(SeisBox->sizePolicy().hasHeightForWidth());
        SeisBox->setSizePolicy(sizePolicy3);
        horizontalLayout = new QHBoxLayout(SeisBox);
        horizontalLayout->setSpacing(2);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(2, 2, 2, 2);
        SeisTab = new QTabWidget(SeisBox);
        SeisTab->setObjectName(QString::fromUtf8("SeisTab"));
        HdrsPg = new QWidget();
        HdrsPg->setObjectName(QString::fromUtf8("HdrsPg"));
        horizontalLayout_11 = new QHBoxLayout(HdrsPg);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        frame_7 = new QFrame(HdrsPg);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setMinimumSize(QSize(150, 0));
        frame_7->setMaximumSize(QSize(150, 16777215));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Sunken);
        verticalLayout_13 = new QVBoxLayout(frame_7);
        verticalLayout_13->setSpacing(2);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(2, 2, 2, 2);
        frame_9 = new QFrame(frame_7);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        sizePolicy1.setHeightForWidth(frame_9->sizePolicy().hasHeightForWidth());
        frame_9->setSizePolicy(sizePolicy1);
        frame_9->setMinimumSize(QSize(100, 24));
        frame_9->setMaximumSize(QSize(16777215, 24));
        frame_9->setAutoFillBackground(true);
        frame_9->setFrameShape(QFrame::Box);
        frame_9->setFrameShadow(QFrame::Raised);
        layoutWidget_2 = new QWidget(frame_9);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(3, 2, 42, 19));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(2, 2, 0, 0);
        hdrsBtmBtn = new QPushButton(layoutWidget_2);
        hdrsBtmBtn->setObjectName(QString::fromUtf8("hdrsBtmBtn"));
        sizePolicy2.setHeightForWidth(hdrsBtmBtn->sizePolicy().hasHeightForWidth());
        hdrsBtmBtn->setSizePolicy(sizePolicy2);
        hdrsBtmBtn->setMinimumSize(QSize(16, 16));
        hdrsBtmBtn->setMaximumSize(QSize(16, 16));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/GoBottom.png"), QSize(), QIcon::Normal, QIcon::Off);
        hdrsBtmBtn->setIcon(icon4);

        horizontalLayout_10->addWidget(hdrsBtmBtn);

        hdrsTopBtn = new QPushButton(layoutWidget_2);
        hdrsTopBtn->setObjectName(QString::fromUtf8("hdrsTopBtn"));
        sizePolicy2.setHeightForWidth(hdrsTopBtn->sizePolicy().hasHeightForWidth());
        hdrsTopBtn->setSizePolicy(sizePolicy2);
        hdrsTopBtn->setMinimumSize(QSize(16, 16));
        hdrsTopBtn->setMaximumSize(QSize(16, 16));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/GoTop.png"), QSize(), QIcon::Normal, QIcon::Off);
        hdrsTopBtn->setIcon(icon5);

        horizontalLayout_10->addWidget(hdrsTopBtn);


        verticalLayout_13->addWidget(frame_9);

        hdrFrame = new QFrame(frame_7);
        hdrFrame->setObjectName(QString::fromUtf8("hdrFrame"));
        hdrFrame->setMinimumSize(QSize(30, 30));
        hdrFrame->setFrameShape(QFrame::StyledPanel);
        hdrFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_13->addWidget(hdrFrame);


        horizontalLayout_11->addWidget(frame_7);

        logText = new QPlainTextEdit(HdrsPg);
        logText->setObjectName(QString::fromUtf8("logText"));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(10);
        logText->setFont(font);
        logText->setLineWrapMode(QPlainTextEdit::NoWrap);
        logText->setReadOnly(true);

        horizontalLayout_11->addWidget(logText);

        SeisTab->addTab(HdrsPg, QString());
        ChnPg = new QWidget();
        ChnPg->setObjectName(QString::fromUtf8("ChnPg"));
        horizontalLayout_8 = new QHBoxLayout(ChnPg);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        chsFrame = new QFrame(ChnPg);
        chsFrame->setObjectName(QString::fromUtf8("chsFrame"));
        chsFrame->setMinimumSize(QSize(160, 0));
        chsFrame->setMaximumSize(QSize(160, 16777215));
        chsFrame->setFrameShape(QFrame::StyledPanel);
        chsFrame->setFrameShadow(QFrame::Sunken);
        verticalLayout_12 = new QVBoxLayout(chsFrame);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(chsFrame);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        sizePolicy1.setHeightForWidth(frame_6->sizePolicy().hasHeightForWidth());
        frame_6->setSizePolicy(sizePolicy1);
        frame_6->setMinimumSize(QSize(100, 40));
        frame_6->setMaximumSize(QSize(16777215, 40));
        frame_6->setAutoFillBackground(true);
        frame_6->setFrameShape(QFrame::Box);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_6);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(1);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btnCkNon = new QPushButton(frame_6);
        btnCkNon->setObjectName(QString::fromUtf8("btnCkNon"));
        sizePolicy2.setHeightForWidth(btnCkNon->sizePolicy().hasHeightForWidth());
        btnCkNon->setSizePolicy(sizePolicy2);
        btnCkNon->setMinimumSize(QSize(25, 25));
        btnCkNon->setMaximumSize(QSize(25, 25));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/ChkNon.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCkNon->setIcon(icon6);

        horizontalLayout_6->addWidget(btnCkNon);

        btnCkAll = new QPushButton(frame_6);
        btnCkAll->setObjectName(QString::fromUtf8("btnCkAll"));
        sizePolicy2.setHeightForWidth(btnCkAll->sizePolicy().hasHeightForWidth());
        btnCkAll->setSizePolicy(sizePolicy2);
        btnCkAll->setMinimumSize(QSize(25, 25));
        btnCkAll->setMaximumSize(QSize(25, 25));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/ChkAll.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCkAll->setIcon(icon7);

        horizontalLayout_6->addWidget(btnCkAll);

        horizontalSpacer = new QSpacerItem(13, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        ckAll = new QCheckBox(frame_6);
        ckAll->setObjectName(QString::fromUtf8("ckAll"));
        ckAll->setMaximumSize(QSize(40, 16777215));

        verticalLayout_11->addWidget(ckAll);

        ckSng = new QCheckBox(frame_6);
        ckSng->setObjectName(QString::fromUtf8("ckSng"));
        ckSng->setMaximumSize(QSize(60, 16777215));

        verticalLayout_11->addWidget(ckSng);


        horizontalLayout_6->addLayout(verticalLayout_11);


        verticalLayout_8->addLayout(horizontalLayout_6);


        verticalLayout_12->addWidget(frame_6);

        chsGridFrame = new QFrame(chsFrame);
        chsGridFrame->setObjectName(QString::fromUtf8("chsGridFrame"));
        chsGridFrame->setMinimumSize(QSize(30, 30));
        chsGridFrame->setFrameShape(QFrame::StyledPanel);
        chsGridFrame->setFrameShadow(QFrame::Raised);

        verticalLayout_12->addWidget(chsGridFrame);


        horizontalLayout_8->addWidget(chsFrame);

        frame_2 = new QFrame(ChnPg);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(565, 0));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Plain);
        verticalLayout_10 = new QVBoxLayout(frame_2);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(frame_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setMaximumSize(QSize(16777215, 84));
        frame->setAutoFillBackground(true);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Plain);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 0, 0, 2);
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
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(-1, -1, -1, 2);
        edTm = new QLineEdit(groupBox_3);
        edTm->setObjectName(QString::fromUtf8("edTm"));
        edTm->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(edTm, 1, 2, 1, 1);

        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        edTr = new QLineEdit(groupBox_3);
        edTr->setObjectName(QString::fromUtf8("edTr"));
        edTr->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(edTr, 0, 2, 1, 1);

        zoomVallBtn = new QPushButton(groupBox_3);
        zoomVallBtn->setObjectName(QString::fromUtf8("zoomVallBtn"));
        zoomVallBtn->setMinimumSize(QSize(18, 18));
        zoomVallBtn->setMaximumSize(QSize(18, 18));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/Zv.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomVallBtn->setIcon(icon8);

        gridLayout->addWidget(zoomVallBtn, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        TmSlider = new QSlider(groupBox_3);
        TmSlider->setObjectName(QString::fromUtf8("TmSlider"));
        TmSlider->setMinimumSize(QSize(100, 0));
        TmSlider->setMinimum(-100);
        TmSlider->setMaximum(100);
        TmSlider->setValue(0);
        TmSlider->setSliderPosition(0);
        TmSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(TmSlider, 1, 1, 1, 1);

        zoomHallBtn = new QPushButton(groupBox_3);
        zoomHallBtn->setObjectName(QString::fromUtf8("zoomHallBtn"));
        zoomHallBtn->setMinimumSize(QSize(18, 18));
        zoomHallBtn->setMaximumSize(QSize(18, 18));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/Zh.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomHallBtn->setIcon(icon9);

        gridLayout->addWidget(zoomHallBtn, 1, 3, 1, 1);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        GnSlider = new QSlider(groupBox_3);
        GnSlider->setObjectName(QString::fromUtf8("GnSlider"));
        GnSlider->setMinimumSize(QSize(100, 0));
        GnSlider->setMinimum(-100);
        GnSlider->setMaximum(100);
        GnSlider->setValue(0);
        GnSlider->setSliderPosition(0);
        GnSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(GnSlider, 2, 1, 1, 1);

        edGn = new QLineEdit(groupBox_3);
        edGn->setObjectName(QString::fromUtf8("edGn"));
        edGn->setMaximumSize(QSize(160, 16777215));

        gridLayout->addWidget(edGn, 2, 2, 1, 1);

        aGainBtn = new QPushButton(groupBox_3);
        aGainBtn->setObjectName(QString::fromUtf8("aGainBtn"));
        aGainBtn->setMinimumSize(QSize(18, 18));
        aGainBtn->setMaximumSize(QSize(18, 18));

        gridLayout->addWidget(aGainBtn, 2, 3, 1, 1);

        TrSlider = new QSlider(groupBox_3);
        TrSlider->setObjectName(QString::fromUtf8("TrSlider"));
        TrSlider->setMinimumSize(QSize(100, 0));
        TrSlider->setMinimum(-100);
        TrSlider->setMaximum(100);
        TrSlider->setValue(0);
        TrSlider->setSliderPosition(0);
        TrSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(TrSlider, 0, 1, 1, 1);


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
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
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


        horizontalLayout_4->addLayout(verticalLayout_5);

        procParmBtn = new QPushButton(groupBox_4);
        procParmBtn->setObjectName(QString::fromUtf8("procParmBtn"));
        procParmBtn->setMaximumSize(QSize(23, 23));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/Procp.png"), QSize(), QIcon::Normal, QIcon::Off);
        procParmBtn->setIcon(icon10);

        horizontalLayout_4->addWidget(procParmBtn);


        verticalLayout_9->addLayout(horizontalLayout_4);


        horizontalLayout_5->addWidget(groupBox_4);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout_10->addWidget(frame);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        frame_8 = new QFrame(frame_2);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_8->sizePolicy().hasHeightForWidth());
        frame_8->setSizePolicy(sizePolicy4);
        frame_8->setMinimumSize(QSize(32, 150));
        frame_8->setMaximumSize(QSize(32, 16777215));
        frame_8->setAutoFillBackground(true);
        frame_8->setFrameShape(QFrame::Box);
        frame_8->setFrameShadow(QFrame::Raised);
        zoomAllBtn = new QPushButton(frame_8);
        zoomAllBtn->setObjectName(QString::fromUtf8("zoomAllBtn"));
        zoomAllBtn->setGeometry(QRect(4, 4, 25, 25));
        sizePolicy2.setHeightForWidth(zoomAllBtn->sizePolicy().hasHeightForWidth());
        zoomAllBtn->setSizePolicy(sizePolicy2);
        zoomAllBtn->setMinimumSize(QSize(25, 25));
        zoomAllBtn->setMaximumSize(QSize(25, 25));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/ZoomA.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomAllBtn->setIcon(icon11);
        zoomWinBtn = new QPushButton(frame_8);
        zoomWinBtn->setObjectName(QString::fromUtf8("zoomWinBtn"));
        zoomWinBtn->setGeometry(QRect(4, 35, 25, 25));
        sizePolicy2.setHeightForWidth(zoomWinBtn->sizePolicy().hasHeightForWidth());
        zoomWinBtn->setSizePolicy(sizePolicy2);
        zoomWinBtn->setMinimumSize(QSize(25, 25));
        zoomWinBtn->setMaximumSize(QSize(25, 25));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/ZoomW.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomWinBtn->setIcon(icon12);
        zoomOutBtn = new QPushButton(frame_8);
        zoomOutBtn->setObjectName(QString::fromUtf8("zoomOutBtn"));
        zoomOutBtn->setGeometry(QRect(4, 66, 25, 25));
        sizePolicy2.setHeightForWidth(zoomOutBtn->sizePolicy().hasHeightForWidth());
        zoomOutBtn->setSizePolicy(sizePolicy2);
        zoomOutBtn->setMinimumSize(QSize(25, 25));
        zoomOutBtn->setMaximumSize(QSize(25, 25));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/ZoomO.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomOutBtn->setIcon(icon13);
        zoomInBtn = new QPushButton(frame_8);
        zoomInBtn->setObjectName(QString::fromUtf8("zoomInBtn"));
        zoomInBtn->setGeometry(QRect(4, 97, 25, 25));
        sizePolicy2.setHeightForWidth(zoomInBtn->sizePolicy().hasHeightForWidth());
        zoomInBtn->setSizePolicy(sizePolicy2);
        zoomInBtn->setMinimumSize(QSize(25, 25));
        zoomInBtn->setMaximumSize(QSize(25, 25));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/ZoomI.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomInBtn->setIcon(icon14);
        zoomPreBtn = new QPushButton(frame_8);
        zoomPreBtn->setObjectName(QString::fromUtf8("zoomPreBtn"));
        zoomPreBtn->setGeometry(QRect(4, 128, 25, 25));
        sizePolicy2.setHeightForWidth(zoomPreBtn->sizePolicy().hasHeightForWidth());
        zoomPreBtn->setSizePolicy(sizePolicy2);
        zoomPreBtn->setMinimumSize(QSize(25, 25));
        zoomPreBtn->setMaximumSize(QSize(25, 25));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/ZoomP.png"), QSize(), QIcon::Normal, QIcon::Off);
        zoomPreBtn->setIcon(icon15);

        horizontalLayout_9->addWidget(frame_8);

        seisFrame1 = new QFrame(frame_2);
        seisFrame1->setObjectName(QString::fromUtf8("seisFrame1"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(seisFrame1->sizePolicy().hasHeightForWidth());
        seisFrame1->setSizePolicy(sizePolicy5);
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


        horizontalLayout_8->addWidget(frame_2);

        SeisTab->addTab(ChnPg, QString());

        horizontalLayout->addWidget(SeisTab);

        splitter->addWidget(SeisBox);

        verticalLayout_14->addWidget(splitter);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 990, 21));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menuProcessing = new QMenu(menuBar);
        menuProcessing->setObjectName(QString::fromUtf8("menuProcessing"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menuProcessing->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionOpen_Directory);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Help->addAction(actionAbout);
        menu_Help->addSeparator();
        menu_Help->addAction(actionUser_Manual);
        menu_Help->addAction(actionUser_s_Manual_Russian);
        menuProcessing->addAction(actionParameters);

        retranslateUi(MainWindow);
        QObject::connect(actionE_xit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        SeisTab->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SegDSee", nullptr));
        actionOpen_Directory->setText(QCoreApplication::translate("MainWindow", "Open &Directory", nullptr));
        actionE_xit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionUser_Manual->setText(QCoreApplication::translate("MainWindow", "User's Manual (English)", nullptr));
        actionParameters->setText(QCoreApplication::translate("MainWindow", "Parameters", nullptr));
        actionUser_s_Manual_Russian->setText(QCoreApplication::translate("MainWindow", "\320\230\320\275\321\201\321\202\321\200\321\203\320\272\321\206\320\270\321\217 (\320\240\321\203\321\201\321\201\320\272\320\270\320\271)", nullptr));
        dirGroup->setTitle(QCoreApplication::translate("MainWindow", "Directory List", nullptr));
        selDirBtn->setText(QString());
        refreshBtn->setText(QString());
        goBackBtn->setText(QString());
        SeisBox->setTitle(QString());
        hdrsBtmBtn->setText(QString());
        hdrsTopBtn->setText(QString());
        SeisTab->setTabText(SeisTab->indexOf(HdrsPg), QCoreApplication::translate("MainWindow", "Headers", nullptr));
        btnCkNon->setText(QString());
        btnCkAll->setText(QString());
        ckAll->setText(QCoreApplication::translate("MainWindow", "All", nullptr));
        ckSng->setText(QCoreApplication::translate("MainWindow", "Single", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Display Mode", nullptr));
        ckWiggle->setText(QCoreApplication::translate("MainWindow", "Wiggle", nullptr));
        ckGray->setText(QCoreApplication::translate("MainWindow", "Gray", nullptr));
        ckColor->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Wggle Fill", nullptr));
        rbNon->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        rbPos->setText(QCoreApplication::translate("MainWindow", "Positive", nullptr));
        rbNeg->setText(QCoreApplication::translate("MainWindow", "Negative", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Traces", nullptr));
        zoomVallBtn->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Time", nullptr));
        zoomHallBtn->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Gain", nullptr));
        aGainBtn->setText(QCoreApplication::translate("MainWindow", "A", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "Display Mode", nullptr));
        ckFilt->setText(QCoreApplication::translate("MainWindow", "Filter", nullptr));
        ckAgc->setText(QCoreApplication::translate("MainWindow", "Agc", nullptr));
        ckNorm->setText(QCoreApplication::translate("MainWindow", "Norm", nullptr));
        procParmBtn->setText(QString());
        zoomAllBtn->setText(QString());
        zoomWinBtn->setText(QString());
        zoomOutBtn->setText(QString());
        zoomInBtn->setText(QString());
        zoomPreBtn->setText(QString());
        SeisTab->setTabText(SeisTab->indexOf(ChnPg), QCoreApplication::translate("MainWindow", "Channel Sets", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuProcessing->setTitle(QCoreApplication::translate("MainWindow", "Processing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
