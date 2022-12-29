TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += \
    function.cpp \
    class.cpp \
    bekkerapp.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    class.h \
    function.h

