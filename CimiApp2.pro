#-------------------------------------------------
#
# Project created by QtCreator 2016-05-02T17:14:03
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CimiApp2
TEMPLATE = app


SOURCES += main.cpp\
        cmainwindow.cpp \
    coperations.cpp \
    ctablemodel.cpp

HEADERS  += cmainwindow.h \
    coperations.h \
    ctablemodel.h

FORMS    += cmainwindow.ui \
    coperations.ui

RESOURCES += \
    graphics.qrc

DISTFILES += \
    Resources/money.png
