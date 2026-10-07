#-------------------------------------------------
#
# Qt Toast library
#
#-------------------------------------------------

QT += widgets

TARGET = qttoast
TEMPLATE = lib
CONFIG += staticlib
CONFIG += c++11

SOURCES += src/Toast.cpp

HEADERS += \
    src/Toast.h \
    src/Enums.h

RESOURCES += src/qt_toast.qrc

INCLUDEPATH += src
