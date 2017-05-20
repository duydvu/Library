#-------------------------------------------------
#
# Project created by QtCreator 2017-05-07T15:45:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Library
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    account.cpp \
    signin.cpp \
    book.cpp \
    signup.cpp \
    data.cpp

HEADERS  += mainwindow.h \
    account.h \
    signin.h \
    book.h \
    signup.h \
    ui_mainwindow.h \
    data.h

FORMS    += mainwindow.ui \
    signin.ui \
    signup.ui

RESOURCES += \
    data.qrc
