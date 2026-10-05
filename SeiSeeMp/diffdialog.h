#ifndef DIFFDIALOG_H
#define DIFFDIALOG_H

#include <QDialog>

#include "mystringtable.h"

#include "seisfile.h"
#include "sgyfile.h"

#include "workthread.h"

namespace Ui {
    class DiffDialog;
}

class DiffDialog : public QDialog
{
    Q_OBJECT

public:
    SeisFile *sf;
    SeisFile *sf2;
    QString *savDir;
    QString curDir;
    QString fname;
    QString fname2;
    QString fnameOut;
    explicit DiffDialog(QWidget *parent = 0);
    ~DiffDialog();

    void show();

private slots:

    //    void hdrListEvent(int row, int mode);

    void on_btnSave_clicked();

    void on_btnClose_clicked();

    void on_ckTrAll_clicked();

    void on_ckTmAll_clicked();

    void on_btnTrMin_clicked();

    void on_btnTrMax_clicked();

    void on_btnTrStp_clicked();

    void on_btnTmMin_clicked();

    void on_btnTmMax_clicked();

    void x_progr(int pers, QString mess);
    void x_fin(QString mess);

    void on_btnOpenFileIn2_clicked();

    void on_pathFile2_editingFinished();

    //    void on_pathFile2_returnPressed();

    void on_pathFileOutput_editingFinished();

    //    void on_pathFileOutput_returnPressed();

    void on_btnOpenFileOut_clicked();

    void on_pathFile2_textChanged(const QString &arg1);

    void on_pathFileOutput_textChanged(const QString &arg1);

private:
    Ui::DiffDialog *ui;
    bool running;
    MyStringTable hdrListGrid;
    void ShowProgress(QString mes, int pers);
    void UpdateDefaultOutputPath();

    //    void FillHdrListGrid();
    void FillLimits();

    int ReadTxt(QLineEdit *edt, bool &ok);

signals:
    void stop();
};

#endif // DIFFDIALOG_H
