#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>
#include<QtWidgets/QMainWindow>
#include<QtCharts/QBarSeries>
#include<QtCharts/QChartView>
#include<QtCharts/QLegend>
#include<QtCharts/QBarSet>
#include<QVector>
#include<Qtcharts/QBarCategoryAxis>
#include<QtCharts/chartsnamespace.h>
#include<QSpinBox>
#include<QLineEdit>
#include"mainwindow.h"
QT_CHARTS_USE_NAMESPACE


namespace Ui {
class MainWindow2;
}

class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    QVector<QBarSet*>set;
    QBarSet *set1;
    QStringList subjects;
    QBarSeries *series;
    QChart *chart;
    QBarCategoryAxis *axis;
    QChartView *chartView;
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();
    static int count3;

private:
    Ui::MainWindow2 *ui;
};

#endif // MAINWINDOW2_H
