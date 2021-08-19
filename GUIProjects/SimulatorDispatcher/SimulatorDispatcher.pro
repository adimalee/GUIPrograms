#-------------------------------------------------
#
# Project created by QtCreator 2017-02-15T11:23:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimulatorDispatcher
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    prioritydialog.cpp

HEADERS  += widget.h \
    prioritydialog.h

FORMS    += widget.ui \
    prioritydialog.ui
