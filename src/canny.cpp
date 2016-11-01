#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
    Mat cannyImage, edge, gray, srcImage1;
    srcImage1 = srcImage.clone();

    Canny(srcImage, cannyImage, 100, 150);
    imshow("src", srcImage);
    imshow("canny", cannyImage);
    cvtColor(srcImage, gray, COLOR_BGR2GRAY);
    blur(gray, edge, Size(3, 3));
    Canny(edge, edge, 10, 30);
    imshow("1", edge);
    srcImage1.copyTo(cannyImage, edge);
    imshow("blur-canny", cannyImage);

    waitKey(0);
    return 0;
}
