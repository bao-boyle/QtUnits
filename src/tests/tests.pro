#-------------------------------------------------
#
# Project created by QtCreator 2013-12-13T08:29:07
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = tests
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

QMAKE_CXXFLAGS +=   -std=c++11

SOURCES += main.cpp

unix|win32: LIBS += -L$$PWD/../../bin/ -lQtUnits

INCLUDEPATH += $$PWD/../QtUnits
DEPENDPATH += $$PWD/../QtUnits
