TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        comptebancaire.cpp \
        compteclient.cpp \
        compteepargne.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    comptebancaire.h \
    compteclient.h \
    compteepargne.h \
    menu.h
