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
    data.cpp \
    user.cpp \
    PersonalInfo.cpp \
    admin.cpp \
    reader.cpp \
    librarian.cpp \
    cartinfo.cpp \
    help.cpp \
    about.cpp \
    password.cpp

HEADERS  += mainwindow.h \
    account.h \
    signin.h \
    book.h \
    signup.h \
    data.h \
    ui_mainwindow.h \
    user.h \
    PersonalInfo.h \
    admin.h \
    reader.h \
    librarian.h \
    cartinfo.h \
    help.h \
    about.h \
    password.h

FORMS    += \
    signin.ui \
    signup.ui \
    mainwindow.ui \
    PersonalInfo.ui \
    admin.ui \
    reader.ui \
    librarian.ui \
    help.ui \
    about.ui \
    password.ui

RESOURCES += \
    data.qrc

RC_ICONS = Libpro.ico

DISTFILES += \
    Transition.qml

