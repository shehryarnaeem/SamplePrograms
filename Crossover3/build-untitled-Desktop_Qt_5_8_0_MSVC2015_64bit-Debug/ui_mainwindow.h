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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCalculate;
    QAction *actionCalculate_2;
    QAction *actionReset;
    QAction *actionClose;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuNew_Subject;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(763, 602);
        actionCalculate = new QAction(MainWindow);
        actionCalculate->setObjectName(QStringLiteral("actionCalculate"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/add_list1600.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalculate->setIcon(icon);
        actionCalculate_2 = new QAction(MainWindow);
        actionCalculate_2->setObjectName(QStringLiteral("actionCalculate_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/15-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalculate_2->setIcon(icon1);
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/img/player-08-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon2);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/img/close_4-512.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 70, 631, 451));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(438, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);

        horizontalLayout_2->addWidget(label_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font);

        horizontalLayout_2->addWidget(label_5);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(layoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 625, 386));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QStringLiteral("Times New Roman"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font2;
        font2.setFamily(QStringLiteral("Times New Roman"));
        font2.setPointSize(10);
        label_6->setFont(font2);
        label_6->setFrameShape(QFrame::StyledPanel);

        horizontalLayout->addWidget(label_6);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setAutoFillBackground(false);
        pushButton_2->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 763, 21));
        menuNew_Subject = new QMenu(menuBar);
        menuNew_Subject->setObjectName(QStringLiteral("menuNew_Subject"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuNew_Subject->menuAction());
        menuNew_Subject->addAction(actionCalculate);
        menuNew_Subject->addSeparator();
        menuNew_Subject->addAction(actionCalculate_2);
        menuNew_Subject->addSeparator();
        menuNew_Subject->addAction(actionReset);
        menuNew_Subject->addSeparator();
        menuNew_Subject->addAction(actionClose);
        mainToolBar->addAction(actionCalculate);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCalculate_2);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionReset);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClose);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, SIGNAL(clicked()), label_6, SLOT(show()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionCalculate->setText(QApplication::translate("MainWindow", "New Subject", Q_NULLPTR));
        actionCalculate_2->setText(QApplication::translate("MainWindow", "Calculate", Q_NULLPTR));
        actionReset->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        actionClose->setText(QApplication::translate("MainWindow", "Close", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Subject", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Grade", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Credits", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "GPA", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Result:", Q_NULLPTR));
        label_6->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "Calculate", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        menuNew_Subject->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
