#ifndef ADDTRANSPORTDIALOG_H
#define ADDTRANSPORTDIALOG_H

#include <QDialog>

namespace Ui {
class AddTransportDialog;
}

class AddTransportDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddTransportDialog(QWidget *parent = 0);
    ~AddTransportDialog();

    QString regNo() const;
    int areaCode() const;

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();

private:
    Ui::AddTransportDialog *ui;
};

#endif // ADDTRANSPORTDIALOG_H
