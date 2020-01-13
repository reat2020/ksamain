#-------------------------------------------------
#
# Project created by QtCreator 2020-01-09T11:28:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ksamain
TEMPLATE = app


SOURCES += main.cpp\
        ksamain.cpp \
    menu.cpp \
    editor.cpp

HEADERS  += ksamain.h \
    menu.h \
    editor.h

FORMS    += ksamain.ui \
    menu.ui \
    editor.ui

OTHER_FILES +=

RESOURCES += \
    ksamain.qrc
