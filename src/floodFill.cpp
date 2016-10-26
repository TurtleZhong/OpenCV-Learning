#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat src = imread("/home/m/zxl-opencv/src/dog.png");
    imshow("srcImage", src);

    Rect ccomp;
    floodFill(src, Point(100, 100), Scalar(155, 255, 55), &ccomp, Scalar(40,40,40), Scalar(50,50,50));
    imshow("floodFill", src);
    waitKey(0);



    return 0;
}
