#include "addtransportrecorddialog.h"
#include "ui_addtransportrecorddialog.h"

AddTransportRecordDialog::AddTransportRecordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddTransportRecordDialog)
{
    ui->setupUi(this);
}

AddTransportRecordDialog::~AddTransportRecordDialog()
{
    delete ui;
}

void AddTransportRecordDialog::on_buttonBox_accepted()
{
    accept();
}

void AddTransportRecordDialog::on_buttonBox_rejected()
{
    reject();
}

QString AddTransportRecordDialog::date() const
{
    return ui->txtDate->text();
}

QString AddTransportRecordDialog::description() const
{
    return ui->txtDescription->text();
}

double AddTransportRecordDialog::fuelCost() const
{
    return ui->txtFuelCost->value();
}

double AddTransportRecordDialog::repairCost() const
{
    return ui->txtRepairCost->value();
}
