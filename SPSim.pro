#-------------------------------------------------
#
# Project created by QtCreator 2016-11-29T20:39:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SPSim
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    env.cpp \
    hacheur.cpp \
    ppv.cpp


HEADERS  += mainwindow.h \
    env.h \
    hacheur.h \
    ppv.h


FORMS    += mainwindow.ui
