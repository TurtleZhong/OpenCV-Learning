CMAKE_MINIMUM_REQUIRED( VERSION 2.8 ) #设定版本

FIND_PACKAGE( OpenCV REQUIRED )

# Declare the target (an executable)
ADD_EXECUTABLE(openPicture  openPicture.cpp)
TARGET_LINK_LIBRARIES(openPicture ${OpenCV_LIBS})

ADD_EXECUTABLE(drawCircle  drawCircle.cpp)
TARGET_LINK_LIBRARIES(drawCircle ${OpenCV_LIBS})

ADD_EXECUTABLE(testMat  testMat.cpp)
TARGET_LINK_LIBRARIES(testMat ${OpenCV_LIBS})

ADD_EXECUTABLE(accessPixel  accessPixel.cpp)
TARGET_LINK_LIBRARIES(accessPixel ${OpenCV_LIBS})

ADD_EXECUTABLE(imwrite  imwrite.cpp)
TARGET_LINK_LIBRARIES(imwrite ${OpenCV_LIBS})

ADD_EXECUTABLE(comprehensive  comprehensive.cpp)
TARGET_LINK_LIBRARIES(comprehensive ${OpenCV_LIBS})

ADD_EXECUTABLE(creatTrackbar  creatTrackbar.cpp)
TARGET_LINK_LIBRARIES(creatTrackbar ${OpenCV_LIBS})

ADD_EXECUTABLE(setMouseCallback  setMouseCallback.cpp)
TARGET_LINK_LIBRARIES(setMouseCallback ${OpenCV_LIBS})

ADD_EXECUTABLE(drawSample  drawSample.cpp)
TARGET_LINK_LIBRARIES(drawSample ${OpenCV_LIBS})

ADD_EXECUTABLE(access2Pixel  access2Pixel.cpp)
TARGET_LINK_LIBRARIES(access2Pixel ${OpenCV_LIBS})

ADD_EXECUTABLE(setROI  setROI.cpp)
TARGET_LINK_LIBRARIES(setROI ${OpenCV_LIBS})

ADD_EXECUTABLE(splitMerge  splitMerge.cpp)
TARGET_LINK_LIBRARIES(splitMerge ${OpenCV_LIBS})

ADD_EXECUTABLE(contrastBrightness  contrastBrightness.cpp)
TARGET_LINK_LIBRARIES(contrastBrightness ${OpenCV_LIBS})

ADD_EXECUTABLE(trackbar_contrast_brightness  trackbar_contrast_brightness.cpp)
TARGET_LINK_LIBRARIES(trackbar_contrast_brightness ${OpenCV_LIBS})

ADD_EXECUTABLE(yamlWrite  yamlWrite.cpp)
TARGET_LINK_LIBRARIES(yamlWrite ${OpenCV_LIBS})

ADD_EXECUTABLE(yamlRead  yamlRead.cpp)
TARGET_LINK_LIBRARIES(yamlRead ${OpenCV_LIBS})

ADD_EXECUTABLE(boxFliter  boxFliter.cpp)
TARGET_LINK_LIBRARIES(boxFliter ${OpenCV_LIBS})

ADD_EXECUTABLE(blurFliter  blurFliter.cpp)
TARGET_LINK_LIBRARIES(blurFliter ${OpenCV_LIBS})

ADD_EXECUTABLE(gaussianBlur  gaussianBlur.cpp)
TARGET_LINK_LIBRARIES(gaussianBlur ${OpenCV_LIBS})

ADD_EXECUTABLE(linearFliterComprehensive  linearFliterComprehensive.cpp)
TARGET_LINK_LIBRARIES(linearFliterComprehensive ${OpenCV_LIBS})

ADD_EXECUTABLE(bilateraFliter  bilateraFliter.cpp)
TARGET_LINK_LIBRARIES(bilateraFliter ${OpenCV_LIBS})

ADD_EXECUTABLE(dilateAndErode  dilateAndErode.cpp)
TARGET_LINK_LIBRARIES(dilateAndErode ${OpenCV_LIBS})

ADD_EXECUTABLE(trackbar_DilateAndErode  trackbar_DilateAndErode.cpp)
TARGET_LINK_LIBRARIES(trackbar_DilateAndErode ${OpenCV_LIBS})

ADD_EXECUTABLE(floodFill  floodFill.cpp)
TARGET_LINK_LIBRARIES(floodFill ${OpenCV_LIBS})

ADD_EXECUTABLE(resize  resize.cpp)
TARGET_LINK_LIBRARIES(resize ${OpenCV_LIBS})

ADD_EXECUTABLE(pyrDown_Up  pyrDown_Up.cpp)
TARGET_LINK_LIBRARIES(pyrDown_Up ${OpenCV_LIBS})

ADD_EXECUTABLE(trackbar_threshold  trackbar_threshold.cpp)
TARGET_LINK_LIBRARIES(trackbar_threshold ${OpenCV_LIBS})

ADD_EXECUTABLE(canny  canny.cpp)
TARGET_LINK_LIBRARIES(canny ${OpenCV_LIBS})

ADD_EXECUTABLE(houghLines  houghLines.cpp)
TARGET_LINK_LIBRARIES(houghLines ${OpenCV_LIBS})

ADD_EXECUTABLE(houghCircle  houghCircle.cpp)
TARGET_LINK_LIBRARIES(houghCircle ${OpenCV_LIBS})

ADD_EXECUTABLE(wrapAffine  wrapAffine.cpp)
TARGET_LINK_LIBRARIES(wrapAffine ${OpenCV_LIBS})

ADD_EXECUTABLE(findCounters  findCounters.cpp)
TARGET_LINK_LIBRARIES(findCounters ${OpenCV_LIBS})

ADD_EXECUTABLE(trackbar_findCounters  trackbar_findCounters.cpp)
TARGET_LINK_LIBRARIES(trackbar_findCounters ${OpenCV_LIBS})

#MESSAGE(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")
