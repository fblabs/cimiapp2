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
    cnuovarigaregistrazione.cpp \
    cconti.cpp \
    ctipianagrafici.cpp \
    csqltipianagraficimodel.cpp \
    cmastri.cpp \
    csettings.cpp \
    csqlrelationaltablemodel.cpp \
    cmandati.cpp \
    cnewmandato.cpp \
    hprint.cpp

HEADERS  += cmainwindow.h \
    coperations.h \
    cregistrazione.h \
    cnuovaregistrazione.h \
    cnuovarigaregistrazione.h \
    cconti.h \
    ctipianagrafici.h \
    csqltipianagraficimodel.h \
    cmastri.h \
    csettings.h \
    csqlrelationaltablemodel.h \
    cmandati.h \
    cnewmandato.h \
    hprint.h

FORMS    += cmainwindow.ui \
    coperations.ui \
    cregistrazione.ui \
    cnuovaregistrazione.ui \
    cnuovarigaregistrazione.ui \
    cconti.ui \
    ctipianagrafici.ui \
    cmastri.ui \
    csettings.ui \
    cmandati.ui \
    cnewmandato.ui \
    hprint.ui

RESOURCES += graphics.qrc
win32:RC_ICONS += cimiapp2.ico





