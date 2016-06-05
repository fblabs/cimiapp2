#-------------------------------------------------
#
# Project created by QtCreator 2016-05-02T17:14:03
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CimiApp2
TEMPLATE = app


SOURCES += main.cpp\
        cmainwindow.cpp \
    coperations.cpp \
    cregistrazione.cpp \
    cnuovaregistrazione.cpp \
    cconti.cpp \
    ctipianagrafici.cpp \
    csqltipianagraficimodel.cpp \
    cmastri.cpp \
    csettings.cpp \
    csqlrelationaltablemodel.cpp \
    cmandati.cpp \
    cnewmandato.cpp \
    hprint.cpp \
    cregistrazioni.cpp \
    cnuovariga.cpp \
    cbuoni.cpp

HEADERS  += cmainwindow.h \
    coperations.h \
    cregistrazione.h \
    cnuovaregistrazione.h \
    cconti.h \
    ctipianagrafici.h \
    csqltipianagraficimodel.h \
    cmastri.h \
    csettings.h \
    csqlrelationaltablemodel.h \
    cmandati.h \
    cnewmandato.h \
    hprint.h \
    cregistrazioni.h \
    cnuovariga.h \
    cbuoni.h

FORMS    += cmainwindow.ui \
    coperations.ui \
    cregistrazione.ui \
    cnuovaregistrazione.ui \
    cconti.ui \
    ctipianagrafici.ui \
    cmastri.ui \
    csettings.ui \
    cmandati.ui \
    cnewmandato.ui \
    hprint.ui \
    cregistrazioni.ui \
    cnuovariga.ui \
    cbuoni.ui

RESOURCES += graphics.qrc
win32:RC_ICONS += cimiapp2.ico





