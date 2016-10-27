#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png", 0);
Mat dstImage;
int mode = 0;
int thresholdValue = 100;

void onThreshold(int, void*);


int main(int argc, char *argv[])
{

    imshow("src", srcImage);
    namedWindow("Threshold");
    createTrackbar("Mode", "Threshold", &mode, 4, onThreshold);
    createTrackbar("ThresholdValue", "Threshold", &thresholdValue, 255, onThreshold);

    //imshow("Threshold",srcImage);

    waitKey(0);

    return 0;
}

void onThreshold(int, void*)
{
    threshold(srcImage, dstImage, thresholdValue, 255, mode );
    imshow("Threshold", dstImage);
}
