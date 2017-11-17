#-------------------------------------------------
#
# Project created by QtCreator 2012-09-05T00:46:30
#
#-------------------------------------------------

QT       -= core gui

TARGET = staticlib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += staticlib.cpp

HEADERS += staticlib.h
unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
