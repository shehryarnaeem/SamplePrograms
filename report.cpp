//#include "report.h"
//#include "ui_report.h"

//Report::Report(QWidget *parent,MainWindow *obj) :
//    QDialog(parent),
//    ui(new Ui::Report)
//{
//    ui->setupUi(this);
//    count3=obj->count;
//    series=new QBarSeries;
//    QStringList subjects;
//    for(int i=0;i<count3;i++)
//    {
//        set[i]=new QBarSet(obj->lineEdits[i]->text());
//        series->append(set[i]);
//        subjects<<obj->lineEdits[i]->text();
//    }
//    chart->addSeries(series);
//    chart->setTitle("Progress Report Of The Semester");
//    chart->setAnimationOptions(QChart::SeriesAnimations);
//    axis=new QBarCategoryAxis;
//    axis->append(subjects);
//    chart->createDefaultAxes();
//    chart->setAxisX(axis,series);
//    chart->legend()->setVisible(true);
//    chart->legend()->setAlignment(Qt::AlignBottom);
//    chartView=new QChartView(chart);
//    chartView->setRenderHint(QPainter::Antialiasing);

//}

//Report::~Report()
//{
//    delete ui;
//}
//int Report::count3=0;
