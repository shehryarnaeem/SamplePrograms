#-------------------------------------------------
#
# Project created by QtCreator 2017-05-28T18:14:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MWDS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    addcustomerdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    person.cpp \
    employee.cpp \
    customer.cpp \
    record.cpp \
    vehicleexpenserecord.cpp \
    vehicle.cpp \
    employeeexpenserecord.cpp \
    filingcontroller.cpp \
    addemployeedialog.cpp \
    addemployeerecorddialog.cpp \
    addtransportdialog.cpp \
    addtransportrecorddialog.cpp

HEADERS += \
        mainwindow.h \
    addcustomerdialog.h \
    mainwindow.h \
    employee.h \
    person.h \
    record.h \
    vehicleexpenserecord.h \
    customer.h \
    vehicle.h \
    employeeexpenserecord.h \
    filingcontroller.h \
    addemployeedialog.h \
    addemployeerecorddialog.h \
    addtransportdialog.h \
    addtransportrecorddialog.h

FORMS += \
        mainwindow.ui \
    addcustomerdialog.ui \
    addemployeedialog.ui \
    addemployeerecorddialog.ui \
    addtransportdialog.ui \
    addtransportrecorddialog.ui
