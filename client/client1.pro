QT       += core gui

QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authregform.cpp \
    functionsforclient.cpp \
    main.cpp \
    mainwindow.cpp \
    metod_nuton.cpp \
    music_file.cpp \
    singletonclient.cpp \
    stats.cpp

HEADERS += \
    authregform.h \
    functionsforclient.h \
    mainwindow.h \
    metod_nuton.h \
    music_file.h \
    singletonclient.h \
    stats.h

FORMS += \
    authregform.ui \
    mainwindow.ui \
    metod_nuton.ui \
    music_file.ui \
    stats.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
