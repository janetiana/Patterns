TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    pimpl.cpp \
    impl.cpp

HEADERS += \
    pimpl.h \
    impl.h
