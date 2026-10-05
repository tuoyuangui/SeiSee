#include "aboutdialog.h"
#include "gfxstyle.h"
#include "mainwindow.h"
#include "ui_aboutdialog.h"
#include "util2.h"

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    resize(GfxStyle::AboutDialogWidth, GfxStyle::AboutDialogHeight);

    QFont detailsFont = QApplication::font();
    detailsFont.setPointSizeF(GfxStyle::AboutDetailsFontPointSize);
    ui->label_rev->setFont(detailsFont);
    ui->label->setFont(detailsFont);
    ui->label_ww->setFont(detailsFont);

    const QString aboutHeader =
        QString("<html><head/><body><p align=\"center\"><span "
                "style=\"font-size:%1pt;font-weight:600;color:#00007f;\">"
                "SeiSee</span></p><p align=\"center\"><span "
                "style=\"font-size:%2pt;font-weight:600;color:#00007f;\">"
                "MultiPlatform</span></p><p align=\"center\"><span "
                "style=\"font-size:%3pt;font-weight:600;color:#00007f;\">"
                "SEG-Y Viewer</span></p></body></html>")
            .arg(GfxStyle::AboutTitleFontPointSize)
            .arg(GfxStyle::AboutSubtitleFontPointSize)
            .arg(GfxStyle::AboutProductFontPointSize);
    ui->label_3->setText(aboutHeader);

    QString txt =
        Tprintf("<html><head/><body><p align=\"center\">Rev: %s (build: %s) "
                "</p></body></html>",
                VERSION, __DATE__);

    ui->label_rev->setText(txt);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
