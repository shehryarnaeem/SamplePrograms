#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<QtWidgets/QApplication>
#include<QtWidgets/QMainWindow>
#include<QtCharts/QBarSeries>
#include<QtCharts/QChartView>
#include<QtCharts/QLegend>
#include<QtCharts/QBarSet>
#include<QVector>
#include<Qtcharts/QBarCategoryAxis>
#include "mainwindow.h"
namespace Ui {
class Dialog;
}
QT_CHARTS_USE_NAMESPACE
class Dialog : public QDialog
{
    Q_OBJECT


public:
    QVector<QBarSet*>set;
    QBarSeries *series;
    static int count3;
    QChart *chart;
    QBarCategoryAxis *axis;
    QChartView *chartView;
    explicit Dialog(QWidget *parent = 0,MainWindow *obj=nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
