#-------------------------------------------------
#
# Project created by QtCreator 2015-10-07T18:31:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleComputerEmulator
TEMPLATE = app


SOURCES += main.cpp\
        mainWindow.cpp \
    SimpleComputer.cpp \
    responsewindow.cpp \
    selectfile.cpp \
    save.cpp \
    helpscreen.cpp

HEADERS  += mainWindow.h \
    SimpleComputer.h \
    responsewindow.h \
    selectfile.h \
    save.h \
    helpscreen.h

FORMS    += mainWindow.ui \
    responsewindow.ui \
    selectfile.ui \
    save.ui \
    helpscreen.ui
