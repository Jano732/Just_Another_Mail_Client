QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    email.cpp \
    emailSender.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dialog.h \
    email.h \
    emailSender.h \
    mainwindow.h

FORMS += \
    dialog.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH += "D:\Curl\curl-8.10.1_7-win64-mingw\curl-8.10.1_7-win64-mingw\include"
LIBS += -LD:/Curl/curl-8.10.1_7-win64-mingw/curl-8.10.1_7-win64-mingw/lib -lcurl

