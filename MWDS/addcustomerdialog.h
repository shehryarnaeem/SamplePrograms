#ifndef ADDCUSTOMERDIALOG_H
#define ADDCUSTOMERDIALOG_H

#include <QDialog>

namespace Ui {
class AddCustomerDialog;
}

class AddCustomerDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCustomerDialog(QWidget *parent = 0);
    ~AddCustomerDialog();

    QString customerName() const;
    QString address() const;
    QString phone() const;
    double rate() const;
    int bottlesSold() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::AddCustomerDialog *ui;
};

#endif // ADDCUSTOMERDIALOG_H
