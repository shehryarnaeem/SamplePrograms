/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include<QLineEdit>
#include<QComboBox>
#include<QSpinBox>
#include<QVector>
#include<QHBoxLayout>
#include<QScrollArea>
#include<QMenuBar>
#include<QStatusBar>
#include<QToolBar>
QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_3;
    QComboBox *comboBox_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QVector<QDoubleSpinBox*>gpa;
    QVector<QLineEdit*>lineEdits;
    QLineEdit *lineEdit1;
    QDoubleSpinBox *doubleSpinBox1;
    QVector<QComboBox*>credits;
    QComboBox *comboBox1;
    QVector<QComboBox*>grades;
    QVector<QHBoxLayout*>hLayouts;
     QHBoxLayout *horizontalLayout1;
     static int count3;


    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(699, 456);
//        centralWidget = new QWidget(MainWindow);
//        centralWidget->setObjectName(QStringLiteral("centralWidget"));
//        scrollArea = new QScrollArea(centralWidget);
//        scrollArea->setObjectName(QStringLiteral("scrollArea"));
//        scrollArea->setGeometry(QRect(135, 110, 451, 161));
//        scrollArea->setWidgetResizable(true);
//        scrollAreaWidgetContents = new QWidget();
//        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
//        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 449, 159));
//        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
//        verticalLayout_2->setSpacing(6);
//        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
//        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
//        verticalLayout = new QVBoxLayout();
//        verticalLayout->setSpacing(6);
//        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
//        horizontalLayout = new QHBoxLayout();
//        horizontalLayout->setSpacing(6);
//        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
//        lineEdit = new QLineEdit(scrollAreaWidgetContents);
//        lineEdit->setObjectName(QStringLiteral("lineEdit"));

//        horizontalLayout->addWidget(lineEdit);

//        comboBox = new QComboBox(scrollAreaWidgetContents);
//        comboBox->setObjectName(QStringLiteral("comboBox"));

//        horizontalLayout->addWidget(comboBox);

//        comboBox_2 = new QComboBox(scrollAreaWidgetContents);
//        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

//        horizontalLayout->addWidget(comboBox_2);

//        doubleSpinBox = new QDoubleSpinBox(scrollAreaWidgetContents);
//        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));

//        horizontalLayout->addWidget(doubleSpinBox);


//        verticalLayout->addLayout(horizontalLayout);

//        horizontalLayout_2 = new QHBoxLayout();
//        horizontalLayout_2->setSpacing(6);
//        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
//        lineEdit_2 = new QLineEdit(scrollAreaWidgetContents);
//        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

//        horizontalLayout_2->addWidget(lineEdit_2);

//        comboBox_3 = new QComboBox(scrollAreaWidgetContents);
//        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

//        horizontalLayout_2->addWidget(comboBox_3);

//        comboBox_4 = new QComboBox(scrollAreaWidgetContents);
//        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

//        horizontalLayout_2->addWidget(comboBox_4);

//        doubleSpinBox_2 = new QDoubleSpinBox(scrollAreaWidgetContents);
//        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));

//        horizontalLayout_2->addWidget(doubleSpinBox_2);


//        verticalLayout->addLayout(horizontalLayout_2);


//        verticalLayout_2->addLayout(verticalLayout);

//        scrollArea->setWidget(scrollAreaWidgetContents);
//        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 699, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
//        comboBox->clear();
//        comboBox->insertItems(0, QStringList()
//         << QApplication::translate("MainWindow", "A+", Q_NULLPTR)
//        );
//        comboBox_3->clear();
//        comboBox_3->insertItems(0, QStringList()
//         << QApplication::translate("MainWindow", "A+", Q_NULLPTR)
       // );
    } // retranslateUi


};
void add_sub(QMainWindow *MainWindow)
{
    centralWidget = new QWidget(MainWindow);
    centralWidget->setObjectName(QStringLiteral("centralWidget"));
    scrollArea = new QScrollArea(centralWidget);
    scrollArea->setObjectName(QStringLiteral("scrollArea"));
    scrollArea->setGeometry(QRect(135, 110, 451, 161));
    scrollArea->setWidgetResizable(true);
    scrollAreaWidgetContents = new QWidget();
    scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
    scrollAreaWidgetContents->setGeometry(QRect(0,0 , 449, 159));
    hLayouts.push_back(horizontalLayout1);
    hLayouts[count3]=new QHBoxLayout();

    hLayouts[count3]->setSpacing(6);
    hLayouts[count3]->setObjectName(QStringLiteral("horizontalLayout"));
    lineEdits.push_back(lineEdit1);
    lineEdits[count3]= new QLineEdit(scrollAreaWidgetContents);
    lineEdits[count3]->setObjectName(QStringLiteral("lineEdit"));

    hLayouts[count3]->addWidget(lineEdits[count3]);

   // comboBox = new QComboBox();
    credits.push_back(comboBox1);
    credits[count3]=new QComboBox;
    credits[count3]->setParent(scrollAreaWidgetContents);
    credits[count3]->setObjectName(QStringLiteral("comboBox"));
    //delete comboBox;

    hLayouts[count3]->addWidget(credits[count3]);
    grades.push_back(comboBox1);
    grades[count3]=new QComboBox;
    grades[count3]->setParent(scrollAreaWidgetContents);
    grades[count3]->setObjectName(QStringLiteral("comboBox_2"));

    hLayouts[count3]->addWidget(grades[count3]);

    gpa.push_back(doubleSpinBox1);
    gpa[count3]= new QDoubleSpinBox(scrollAreaWidgetContents);
    gpa[count3]->setObjectName(QStringLiteral("doubleSpinBox"));

    hLayouts[count3]->addWidget(gpa[count3]);
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        verticalLayout->addLayout(hLayouts[count3]);
    scrollArea->setWidget(scrollAreaWidgetContents);
   MainWindow->setCentralWidget(centralWidget);

    ++count3;

}
 int Ui_MainWindow::count3=0;
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
