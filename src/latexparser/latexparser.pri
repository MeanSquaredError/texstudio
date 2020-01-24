# created: 2016-11-01
# author: Tim Hoffmann

INCLUDEPATH += $$PWD
DEPENDPATH += $$PWD

HEADERS += \
    $$PWD/argumentlist.h \
    $$PWD/latextokens.h \
    $$PWD/latexparser.h \
    $$PWD/latexparsing.h \
    $$PWD/latexreader.h \
    $$PWD/latextokenstream.h \
    $$PWD/commanddescription.h

SOURCES += \
    $$PWD/argumentlist.cpp \
    $$PWD/latextokens.cpp \
    $$PWD/latexparser.cpp \
    $$PWD/latexparsing.cpp \
    $$PWD/latexreader.cpp \
    $$PWD/latextokenstream.cpp \
    $$PWD/commanddescription.cpp
