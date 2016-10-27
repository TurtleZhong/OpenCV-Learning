#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
    Mat resizeImage;

    imshow("srcImage", srcImage);
    resize(srcImage, resizeImage, Size(), 0.5, 0.5, INTER_AREA);
    imshow("resizeImage", resizeImage);

    waitKey(0);
    return 0;
}

