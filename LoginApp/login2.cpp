#include "login2.h"
#include "ui_login2.h"

login2::login2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login2)
{
    ui->setupUi(this);
}

login2::~login2()
{
    delete ui;
}
