#-------------------------------------------------
#
# Project created by QtCreator 2012-09-05T01:03:26
#
#-------------------------------------------------

QT       -= core

QT       -= gui

TARGET = mystatlibusage
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp
#LIBS += -L$$PWD/../lib/ -lmystatlib
LIBS += -L$$PWD/../mystatlib -L$$PWD/../mystatlib/debug -lmystatlib


INCLUDEPATH += $$PWD/../mystatlib
