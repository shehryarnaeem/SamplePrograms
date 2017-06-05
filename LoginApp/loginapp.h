#ifndef LOGINAPP_H
#define LOGINAPP_H

#include <QMainWindow>
#include"login2.h"
namespace Ui {
class loginapp;
}

class loginapp : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginapp(QWidget *parent = 0);
    ~loginapp();

private slots:
    void on_pushButton_clicked();

    //void on_lineEdit_2_textEdited(const QString &arg1);

   // void on_pushButton_2_clicked();

private:
    Ui::loginapp *ui;
    login2 *lo;
};

#endif // LOGINAPP_H
