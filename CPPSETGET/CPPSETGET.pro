CONFIG   += c++14

QT       -= core
QT       -= gui

TARGET = CPPSETGET

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

HEADERS += \
    $$PWD/cppsetget.hpp

SOURCES += main.cpp \
    cppsetget.cpp

CONFIG(debug,debug|release){
DEFINES *= _DEBUG
}else{
DEFINES *= BOOST_DISABLE_ASSERTS
DEFINES *= NDEBUG
}


INCLUDEPATH += $$PWD/..

#
#
#


