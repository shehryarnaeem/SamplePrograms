#include "addcustomerdialog.h"
#include "ui_addcustomerdialog.h"

AddCustomerDialog::AddCustomerDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCustomerDialog)
{
    ui->setupUi(this);
}

AddCustomerDialog::~AddCustomerDialog()
{
    delete ui;
}

void AddCustomerDialog::on_buttonBox_accepted()
{
    accept();
}

void AddCustomerDialog::on_buttonBox_rejected()
{
    reject();
}

QString AddCustomerDialog::customerName() const
{
    return ui->txtName->text();
}
QString AddCustomerDialog::address() const
{
    return ui->txtAddress->text();
}
QString AddCustomerDialog::phone() const
{
    return ui->txtPhone->text();
}
double AddCustomerDialog::rate() const
{
    return ui->txtRate->value();
}
int AddCustomerDialog::bottlesSold() const
{
    return ui->txtBottles->value();
}
