#include "addtransportdialog.h"
#include "ui_addtransportdialog.h"

AddTransportDialog::AddTransportDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTransportDialog)
{
    ui->setupUi(this);
}

AddTransportDialog::~AddTransportDialog()
{
    delete ui;
}

void AddTransportDialog::on_buttonBox_accepted()
{
    accept();
}

void AddTransportDialog::on_buttonBox_rejected()
{
    reject();
}

QString AddTransportDialog::regNo() const
{
    return ui->txtRegNo->text();
}
int AddTransportDialog::areaCode() const
{
    return ui->txtAreaCode->value();
}
