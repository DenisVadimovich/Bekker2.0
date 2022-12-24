TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    interface.cpp \
    bekkerapp.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    interface.h

