#include "loginapp.h"
#include "ui_loginapp.h"
#include<QMessageBox>
#include<QPixmap>
#include<QTextEdit>

loginapp::loginapp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginapp)
{
    ui->setupUi(this);
    QPixmap pix(":/resource/Flash.jpg");
    int w=ui->label_3->width();
    int l=ui->label_3->height();
    ui->label_3->setPixmap(pix.scaled(w,l,Qt::KeepAspectRatio));

}
loginapp::~loginapp()
{
    if(lo)
    {
        delete lo;
    }
    delete ui;
}

void loginapp::on_pushButton_clicked()
{
    QString name=ui->lineEdit->text();
    QString pass=ui->lineEdit_2->text();
    if(name=="KSN"&&pass=="93421")
    {
        QMessageBox::about(this,"Login Successful","Password is correct");
        lo=new login2(this);
        lo->show();
    }
    else{
        QMessageBox::warning(this,"Login Unsuccessful","Password is not correct");
    }
}

