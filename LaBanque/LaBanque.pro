TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        compteBancaire.cpp \
        compteEpargne.cpp \
        main.cpp \
        menu.cpp

HEADERS += \
    compteBancaire.h \
    compteEpargne.h \
    menu.h
