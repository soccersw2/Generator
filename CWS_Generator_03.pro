#-------------------------------------------------
#
# Project created by QtCreator 2017-07-12T13:26:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets widgets serialport

TARGET = CWS_Generator_03
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    settingsdialog.cpp \
    generatorparser.cpp \
    logger.cpp \
    generator.cpp

HEADERS += \
        mainwindow.h \
    settingsdialog.h \
    generatorparser.h \
    logger.h \
    generator.h \
    StatusType.h

FORMS += \
        mainwindow.ui \
    settingsdialog.ui \
    generator.ui

RESOURCES += \
    icons.qrc

DISTFILES += \
    images/gps.gif \
    images/led-gray.gif \
    images/led-green.gif \
    images/led-red.gif \
    images/led-yellow.gif \
    images/add.png \
    images/alert.png \
    images/application-exit.png \
    images/camera.png \
    images/center-on.png \
    images/clear.png \
    images/compass.png \
    images/compass-off.png \
    images/component.png \
    images/connect.png \
    images/create.png \
    images/delete.png \
    images/disconnect.png \
    images/down.png \
    images/downarrow.png \
    images/down-arrow.png \
    images/edit_add.png \
    images/edit_remove.png \
    images/engine-running.png \
    images/engine-running-disabled.png \
    images/eraser.png \
    images/folder.png \
    images/gps.png \
    images/gps-off.png \
    images/home.png \
    images/mapmarker.png \
    images/off.png \
    images/oil-change.png \
    images/oil-change-disabled.png \
    images/oil-pressure.png \
    images/oil-pressure-disabled.png \
    images/on.png \
    images/properties.png \
    images/remotecontrol.png \
    images/remove.png \
    images/ruler.png \
    images/send.png \
    images/settings.png \
    images/sfgp-----------.png \
    images/stow.png \
    images/system.png \
    images/up.png \
    images/uparrow.png \
    images/up-arrow.png \
    images/zoomin.png \
    images/zoomout.png \
    images/cws.svg \
    images/FRD_AIR.svg \
    images/FRD_GND.svg \
    images/FRD_SRF.svg \
    images/FRD_SUB.svg \
    images/HOS_AIR.svg \
    images/HOS_GND.svg \
    images/HOS_SUB.svg \
    images/NEU_AIR.svg \
    images/NEU_GND.svg \
    images/NEU_SUB.svg \
    images/off.svg \
    images/on.svg \
    images/switch-off.svg \
    images/switch-on.svg \
    images/switch-red.svg \
    images/UNK_AIR.svg \
    images/UNK_GND.svg \
    images/UNK_SUB.svg \
    images/.MySCMServerInfo
