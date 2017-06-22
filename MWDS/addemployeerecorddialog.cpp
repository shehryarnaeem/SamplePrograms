#include "addemployeerecorddialog.h"
#include "ui_addemployeerecorddialog.h"

AddEmployeeRecordDialog::AddEmployeeRecordDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEmployeeRecordDialog)
{
    ui->setupUi(this);
}

AddEmployeeRecordDialog::~AddEmployeeRecordDialog()
{
    delete ui;
}

void AddEmployeeRecordDialog::on_buttonBox_accepted()
{
    accept();
}

void AddEmployeeRecordDialog::on_buttonBox_rejected()
{
    reject();
}

QString AddEmployeeRecordDialog::date() const
{
    return ui->txtDate->text();
}
QString AddEmployeeRecordDialog::description() const
{
    return ui->txtDescription->text();
}
double AddEmployeeRecordDialog::salaryPaid() const
{
    return ui->txtSalaryPaid->value();
}
