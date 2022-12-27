TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    interface.cpp \
    function.cpp \
    class.cpp \
    bekkerapp.cpp \
    exit.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    interface.h \
    func.h \
    class.h \
    exit.h

