#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
Mat dstImage = srcImage.clone();

int param = 1;

void bilateraFliterCallback(int, void *);

int main(int argc, char *argv[])
{


    namedWindow("BilateraFliter");
    createTrackbar("Kernal Size ", "BilateraFliter", &param, 40, bilateraFliterCallback);

    bilateraFliterCallback(param, 0);


    waitKey(0);
    return 0;
}

void bilateraFliterCallback(int, void *)
{
    bilateralFilter(srcImage, dstImage, param, param*2, param/2);
    imshow("BilateraFliter", dstImage);

}
