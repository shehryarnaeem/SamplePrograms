#include "mainwindow2.h"
#include "ui_mainwindow2.h"
#include<QSpinBox>
#include<QLineEdit>

MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    count3=MainWindow::count;

series=new QBarSeries;
//  for(int i=0;i<MainWindow::count;i++)
//  {
//    QString sub=lineEdits[i].text();
////      double gg=obj->spins[i]->value();


//      //set.push_back(set1);
//     //set[i]=new QBarSet(sub);
////     set[i]->append(gg);
////      series->append(set[i]);
////      subjects.append(sub);
//   }
  chart=new QChart;
  chart->addSeries(series);
  chart->setTitle("Progress Report Of The Semester");
  chart->setAnimationOptions(QChart::SeriesAnimations);
  axis=new QBarCategoryAxis;
  //axis->append(subjects);
//  chart->createDefaultAxes();
//  chart->setAxisX(axis,series);
//  chart->axisY()->setRange(0,4);
//  chart->legend()->setVisible(true);
//  chart->legend()->setAlignment(Qt::AlignBottom);
  chartView=new QChartView(chart);
  chartView->setRenderHint(QPainter::Antialiasing);
  this->setCentralWidget(chartView);

}
int MainWindow2::count3=0;
MainWindow2::~MainWindow2()
{
    set.clear();
    delete ui;
}
