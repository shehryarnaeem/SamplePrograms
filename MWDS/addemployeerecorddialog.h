#ifndef ADDEMPLOYEERECORDDIALOG_H
#define ADDEMPLOYEERECORDDIALOG_H

#include <QDialog>

namespace Ui {
class AddEmployeeRecordDialog;
}

class AddEmployeeRecordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddEmployeeRecordDialog(QWidget *parent = 0);
    ~AddEmployeeRecordDialog();

    QString date() const;
    QString description() const;
    double salaryPaid() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::AddEmployeeRecordDialog *ui;
};

#endif // ADDEMPLOYEERECORDDIALOG_H
