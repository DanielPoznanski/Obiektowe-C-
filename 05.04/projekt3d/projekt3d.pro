TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    point3d.cpp

HEADERS += \
    point3d.h

INCLUDEPATH += C:\Users\Student.DESKTOP-ICOM-TR\Documents\05.04

LIBS += -L C:\Users\Student.DESKTOP-ICOM-TR\Documents\05.04\build-point-Desktop_Qt_5_9_2_MinGW_32bit-Release\release -lPoint
