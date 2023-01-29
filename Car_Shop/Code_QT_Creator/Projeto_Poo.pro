QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcarwindow.cpp \
    carros.cpp \
    client.cpp \
    clientspace.cpp \
    main.cpp \
    mainwindow.cpp \
    removecarwindow.cpp \
    rentcarwindow.cpp \
    secondwindow.cpp \
    showcarswindow.cpp

HEADERS += \
    addcarwindow.h \
    carros.h \
    client.h \
    clientspace.h \
    mainwindow.h \
    removecarwindow.h \
    rentcarwindow.h \
    secondwindow.h \
    showcarswindow.h

FORMS += \
    addcarwindow.ui \
    clientspace.ui \
    mainwindow.ui \
    removecarwindow.ui \
    rentcarwindow.ui \
    secondwindow.ui \
    showcarswindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    CarrosData.txt \
    LoginData.txt \
    RentData.txt
