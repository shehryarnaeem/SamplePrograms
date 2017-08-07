#include <QApplication>
#include"mainwindow2.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


     MainWindow *obj=new MainWindow;
    obj->show();




    return a.exec();
}
