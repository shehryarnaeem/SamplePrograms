#include "loginapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginapp w;
    w.show();

    return a.exec();
}
