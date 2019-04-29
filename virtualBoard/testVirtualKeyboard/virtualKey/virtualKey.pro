#-------------------------------------------------
#
# Project created by QtCreator 2019-04-18T14:08:18
#
#-------------------------------------------------

QT       += core gui

TARGET = virtualKey
TEMPLATE = app

INCLUDEPATH += ../../VirtualKeyboard/src


LIBS +=-L$$/home/ning/worke/gitHub/lib -lVirtualKeyboard

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
