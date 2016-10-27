QT += core
QT -= gui

TARGET = opencv
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    ../../src/openPicture.cpp \
    ../../src/drawCircle.cpp \
    ../../src/testMat.cpp \
    ../../src/accessPixel.cpp \
    ../../src/imwrite.cpp \
    ../../src/comprehensive.cpp \
    ../../src/creatTrackbar.cpp \
    ../../src/setMouseCallback.cpp \
    ../../src/drawSample.cpp \
    ../../src/access2Pixel.cpp \
    ../../src/setROI.cpp \
    ../../src/splitMerge.cpp \
    ../../src/contrastBrightness.cpp \
    ../../src/trackbar_contrast_brightness.cpp \
    ../../src/yamlWrite.cpp \
    ../../src/yamlRead.cpp \
    ../../src/boxFliter.cpp \
    ../../src/blurFliter.cpp \
    ../../src/gaussianBlur.cpp \
    ../../src/linearFliterComprehensive.cpp \
    ../../src/bilateraFliter.cpp \
    ../../src/dilateAndErode.cpp \
    ../../src/trackbar_DilateAndErode.cpp \
    ../../src/floodFill.cpp \
    ../../src/resize.cpp \
    ../../src/pyrDown_Up.cpp \
    ../../src/trackbar_threshold.cpp
INCLUDEPATH += /usr/local/include \
               /usr/include \

