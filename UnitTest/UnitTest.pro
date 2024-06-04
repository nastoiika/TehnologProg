QT += testlib sql network
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_funcforserver_test.cpp \
    ../client/des.cpp

HEADERS += ../client/des.h
