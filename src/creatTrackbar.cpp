#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

Mat srcImage1 = imread("/home/m/zxl-opencv/src/lena.png");
Mat srcImage2 = imread("/home/m/zxl-opencv/src/dog.png");
Mat dstImage;

const char *Window_Name = "TrackbarDemo";
const char *sliderName = "Alpha-Value";


const int AlphaValueMax = 100;
int sliderValue;
double alphaValue;
double betaValue;


void Trackbar(int, void *);

int main(int argc, char *argv[])
{


    sliderValue = 70;


    namedWindow(Window_Name);

    createTrackbar(sliderName, Window_Name, &sliderValue, AlphaValueMax, Trackbar);

    Trackbar (sliderValue, 0);



    waitKey(0);
    return 0;
}

void Trackbar (int , void*)
{
    alphaValue =  (double)sliderValue / AlphaValueMax;
    betaValue = 1.0 - alphaValue;
    addWeighted(srcImage1, alphaValue, srcImage2, betaValue, 0.0, dstImage);
    imshow(Window_Name, dstImage);
    int value = getTrackbarPos(sliderName, Window_Name);
    cout << value << endl;
}
