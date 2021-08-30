QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controller/addcontroller.cpp \
    controller/contractcontroller.cpp \
    controller/controller.cpp \
    controller/maincontroller.cpp \
    view/addscene.cpp \
    model/assbeni.cpp \
    model/assicurati.cpp \
    model/assicurazione.cpp \
    model/assimmobili.cpp \
    model/assvita.cpp \
    model/deepptr.cpp \
    main.cpp \
    view/mainscene.cpp \
    view/mainwindow.cpp \
    view/mainwindowview.cpp \
    model/rca.cpp \
    model/vector.cpp \
    view/viewscene.cpp

HEADERS += \
    controller/addcontroller.h \
    controller/contractcontroller.h \
    controller/controller.h \
    controller/maincontroller.h \
    view/addscene.h \
    model/assbeni.h \
    model/assicurati.h \
    model/assicurazione.h \
    model/assimmobili.h \
    model/assvita.h \
    model/deepptr.h \
    view/mainscene.h \
    view/mainwindow.h \
    view/mainwindowview.h \
    model/rca.h \
    model/vector.h \
    view/viewscene.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
