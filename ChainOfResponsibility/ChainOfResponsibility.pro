TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += qt
QT += core

SOURCES += \
        main.cpp \
    shape.cpp \
    ellipse.cpp \
    circle.cpp

HEADERS += \
    shape.h \
    ellipse.h \
    circle.h
