TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    computer.cpp \
    cpu.cpp \
    input.cpp \
    output.cpp

HEADERS += \
    cpu.h \
    computer.h \
    input.h \
    output.h
