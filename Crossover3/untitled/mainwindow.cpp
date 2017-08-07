#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPixmap>
#include"mainwindow2.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    vlayout=new QVBoxLayout(ui->centralWidget);
    ui->actionCalculate_2->setEnabled(true);
//    vlayout->insertLayout(0,ui->horizontalLayout_2);
//    vlayout->setAlignment(ui->horizontalLayout_2,Qt::AlignCenter);

    add_sub();
    add_sub();
    add_sub();
    add_sub();
    add_sub();
    ui->scrollAreaWidgetContents->setLayout(vlayout);


}
int MainWindow::count=0;
void MainWindow::add_sub()
{

    hlayouts.push_back(hlayout);
    hlayouts[count]=new QHBoxLayout;

        // hlayouts[count]->setParent(ui->centralWidget);
        // hlayouts[count]->setSpacing(6);
         lineEdits.push_back(lineEdit1);
         lineEdits[count]=new QLineEdit;
         //lineEdits[count]->setParent(vlayout);
         gpa.push_back(combo1);
         gpa[count]=new QComboBox;
         gpa[count]->insertItem(0,"A+");
         gpa[count]->insertItem(1,"A");
         gpa[count]->insertItem(2,"A-");
         gpa[count]->insertItem(3,"B+");
         gpa[count]->insertItem(4,"B");
         gpa[count]->insertItem(5,"B-");
         gpa[count]->insertItem(6,"C+");
         gpa[count]->insertItem(7,"C");
         gpa[count]->insertItem(8,"C-");
         gpa[count]->insertItem(9,"D+");
         gpa[count]->insertItem(10,"D");
       //gpa[count]->setParent(vlayout);
         credits.push_back(combo1);
         credits[count]=new QComboBox;
         credits[count]->addItem(QString::number(0));
         credits[count]->addItem(QString::number(1));
          credits[count]->addItem(QString::number(2));
           credits[count]->addItem(QString::number(3));
            credits[count]->addItem(QString::number(4));
     //    //credits[count]->setParent(vlayout);
         spins.push_back(spin1);
         spins[count]=new QDoubleSpinBox;
         //spins[count]->setParent(vlayout);
         hlayouts[count]->addWidget(lineEdits[count]);
         hlayouts[count]->addWidget(gpa[count]);
         hlayouts[count]->addWidget(credits[count]);
         hlayouts[count]->addWidget(spins[count]);
        // ui->centralWidget->setLayout(vlayout);

         vlayout->insertLayout(count+1,hlayouts[count]);
     //    scroll_area=new QScrollArea(ui->centralWidget);
     //    scroll_area->setLayout(vlayout);
     //    scroll_area->scrollBarWidgets(Qt::AlignCenter);
     //    scroll_area->setContentsMargins(count,count,459,156);
     //    scroll_area->setAlignment(Qt::AlignCenter);

         ++count;


//    else {
//        hlayouts[count]->addWidget(ui->label_2);
//        vlayout->insertLayout(count,hlayouts[count]);
//        ++count;
//    }
   }
float MainWindow::calc()
{
    double temp=0,temp1=0;
    result=0;
    for(int i=0;i<count;i++)
    {
        temp=temp+(spins[i]->value()*credits[i]->currentIndex());
        temp1=temp1+credits[i]->currentIndex();

    }
    result=(float)temp/temp1;
    return result;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->label_6->setNum(calc());
    MainWindow2 *an=new MainWindow2;
    for(int i=0;i<MainWindow::count;i++)
    {
       an->set.push_back(an->set1);
       an->set[i]=new QBarSet(lineEdits[i]->text());
       an->set[i]->append(spins[i]->value());
       an->series->append(an->set[i]);
       an->subjects<<lineEdits[i]->text();

     }
   // an->chart->addSeries(an->series);
    an->axis->append(an->subjects);
    an->chart->createDefaultAxes();
    an->chart->setAxisX(an->axis,an->series);
    an->chart->axisY()->setRange(0,4);
    an->chart->legend()->setVisible(true);
    an->chart->legend()->setAlignment(Qt::AlignBottom);

    an->setCentralWidget(an->chartView);
    an->show();
}

void MainWindow::on_pushButton_2_clicked()
{

    for(int i=0;i<count;i++)
    {
        credits[i]->setCurrentIndex(0);
        lineEdits[i]->clear();
        gpa[i]->setCurrentIndex(0);
        spins[i]->setValue(0.00);
        ui->label_6->clear();
    }
}

void MainWindow::on_actionCalculate_triggered()
{
    add_sub();
}

void MainWindow::on_actionCalculate_2_triggered()
{
    ui->label_6->setNum(calc());
}

void MainWindow::on_actionClose_triggered()
{
    this->close();
}

void MainWindow::on_actionReset_triggered()
{
    for(int i=0;i<count;i++)
    {
        credits[i]->setCurrentIndex(0);
        lineEdits[i]->clear();
        gpa[i]->setCurrentIndex(0);
        spins[i]->setValue(0.00);
        ui->label_6->clear();
    }
}
