#ifndef ADDTRANSPORTRECORDDIALOG_H
#define ADDTRANSPORTRECORDDIALOG_H

#include <QDialog>

namespace Ui {
class AddTransportRecordDialog;
}

class AddTransportRecordDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddTransportRecordDialog(QWidget *parent = 0);
    ~AddTransportRecordDialog();

    QString date() const;
    QString description() const;
    double fuelCost() const;
    double repairCost() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::AddTransportRecordDialog *ui;
};

#endif // ADDTRANSPORTRECORDDIALOG_H
