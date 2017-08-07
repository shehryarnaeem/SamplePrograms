#ifndef REPORT_H
#define REPORT_H

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
class Report;
}
QT_CHARTS_USE_NAMESPACE
class Report : public QDialog
{
    Q_OBJECT


public:
//    QVector<QBarSet*>set;
//    QBarSeries *series;
//    static int count3;
//    QChart *chart;
//    QBarCategoryAxis *axis;
//    QChartView *chartView;
//    explicit Report(QWidget *parent = 0,MainWindow *obj=nullptr);
//    ~Report();

private:
    Ui::Report *ui;
};

#endif // REPORT_H
