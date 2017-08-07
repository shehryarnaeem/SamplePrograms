#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QComboBox>
#include<QDoubleSpinBox>
#include<QVector>
#include<QLineEdit>
#include<QString>
#include<QScrollArea>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QVector<QComboBox*>gpa;
    QComboBox *combo1;
    QVector<QComboBox*>credits;
    QHBoxLayout *hlayout;
    QVector<QHBoxLayout*> hlayouts;
    QVBoxLayout *vlayout;
    QDoubleSpinBox *spin1;
    QVector<QDoubleSpinBox*> spins;
    QVector<QLineEdit*> lineEdits;
    QLineEdit *lineEdit1;

    float result;


    void add_sub();
    float calc();
    static int count;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_actionCalculate_triggered();

    void on_actionCalculate_2_triggered();

    void on_actionClose_triggered();

    void on_actionReset_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
