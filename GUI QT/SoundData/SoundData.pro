#-------------------------------------------------
#
# Project created by QtCreator 2015-03-21T01:22:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SoundData
TEMPLATE = app


SOURCES += main.cpp\
        login_window.cpp \
    main_screen.cpp

HEADERS  += login_window.h \
    main_screen.h

FORMS    += login_window.ui \
    main_screen.ui

RESOURCES += \
    resources.qrc
