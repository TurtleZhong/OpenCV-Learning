#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
Mat dstImage = srcImage.clone();

int gaussianKsize = 1;

void gaussianBlurCallback(int, void *);

int main(int argc, char *argv[])
{


    namedWindow("GaussianBlur");
    createTrackbar("Kernal Size ", "GaussianBlur", &gaussianKsize, 40, gaussianBlurCallback);

    gaussianBlurCallback(gaussianKsize, 0);


    waitKey(0);
    return 0;
}

void gaussianBlurCallback(int, void *)
{
    GaussianBlur(srcImage, dstImage, Size(gaussianKsize * 2 + 1, gaussianKsize * 2 + 1), 0, 0);
    imshow("GaussianBlur", dstImage);

}
