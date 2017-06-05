/********************************************************************************
** Form generated from reading UI file 'login2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN2_H
#define UI_LOGIN2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_login2
{
public:

    void setupUi(QDialog *login2)
    {
        if (login2->objectName().isEmpty())
            login2->setObjectName(QStringLiteral("login2"));
        login2->resize(400, 300);

        retranslateUi(login2);

        QMetaObject::connectSlotsByName(login2);
    } // setupUi

    void retranslateUi(QDialog *login2)
    {
        login2->setWindowTitle(QApplication::translate("login2", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login2: public Ui_login2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN2_H
