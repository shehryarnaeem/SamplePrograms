#include "mainwindow.h"
#include <QApplication>
#include"dialog.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *obj=new MainWindow;
    obj->show();
    Dialog *an=new Dialog(obj);
    an->show();

    delete obj;
    return a.exec();
}
