#ifndef LOGIN2_H
#define LOGIN2_H

#include <QDialog>

namespace Ui {
class login2;
}

class login2 : public QDialog
{
    Q_OBJECT

public:
    explicit login2(QWidget *parent = 0);
    ~login2();

private:
    Ui::login2 *ui;
};

#endif // LOGIN2_H
