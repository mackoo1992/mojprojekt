#-------------------------------------------------
#
# Project created by QtCreator 2015-02-11T11:08:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = mojprojekt
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    typy.cpp \
    c_map.cpp \
    c_cell.cpp \
    c_painter.cpp \
    c_mobileobject.cpp \
    c_frog.cpp

HEADERS  += dialog.h \
    c_map.h \
    c_cell.h \
    c_painter.h \
    c_mobileobject.h \
    c_frog.h

FORMS    += dialog.ui
