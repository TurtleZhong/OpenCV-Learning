#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
    Mat logo     = imread("/home/m/zxl-opencv/src/logo.png");
    imshow("srcImage", srcImage);
    Mat imageROI = srcImage(Rect(200, 200, logo.cols, logo.rows));

    Mat mask = imread("/home/m/zxl-opencv/src/logo.png", 0);
    //imshow ("mask", mask);
    logo.copyTo(imageROI);
    imshow("ROI", srcImage);

    waitKey(0);
    return 0;
}
