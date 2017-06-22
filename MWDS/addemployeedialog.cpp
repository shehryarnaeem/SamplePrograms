#include "addemployeedialog.h"
#include "ui_addemployeedialog.h"

AddEmployeeDialog::AddEmployeeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddEmployeeDialog)
{
    ui->setupUi(this);
}

AddEmployeeDialog::~AddEmployeeDialog()
{
    delete ui;
}

void AddEmployeeDialog::on_buttonBox_accepted()
{
    accept();
}

void AddEmployeeDialog::on_buttonBox_rejected()
{
    reject();
}

QString AddEmployeeDialog::employeeName() const
{
    return ui->txtName->text();
}
QString AddEmployeeDialog::address() const
{
    return ui->txtAddress->text();
}
QString AddEmployeeDialog::phone() const
{
    return ui->txtPhone->text();
}
int AddEmployeeDialog::age() const
{
    return ui->txtAge->value();
}
QString AddEmployeeDialog::role() const
{
    return ui->txtRole->text();
}
double AddEmployeeDialog::salary() const
{
    return ui->txtSalary->value();
}
