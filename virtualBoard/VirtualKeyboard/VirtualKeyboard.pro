
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

QT += core gui

TARGET = $$qtLibraryTarget(VirtualKeyboard)

TEMPLATE = lib

OBJECTS_DIR = ./tmp/obj
MOC_DIR     = ./tmp/moc
RCC_DIR     = ./tmp/rcc
UI_DIR      = ./tmp
DESTDIR      =   ../lib/



QMAKE_CXXFLAGS += -std=c++11


DEFINES += VIRTUALKEYBOARD_LIBRARY

HEADERS += \
    src/KeyboardFactory.h \
    src/DigitalBoard.h \
    src/KeyboardExport.h \
    src/hzKB.h \
    src/IKeyboard.h


SOURCES += \
    src/KeyboardFactory.cpp \
    src/DigitalBoard.cpp \
    src/hzKB.cpp \
    src/IKeyboard.cpp

FORMS += \
    form/DigitalBoard.ui \
    form/hzKeyB.ui

RESOURCES += \
    resource/VirtualKeyboard.qrc \
    resource/DigitalInputPanel.qrc \

