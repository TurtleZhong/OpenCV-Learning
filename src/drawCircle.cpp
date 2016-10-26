#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat image;
    image = imread("/home/m/zxl-opencv/src/lena.png");
    circle(image, Point(256, 256), 100, 0, 3);
    putText(image, "This is lena!", Point(256, 256), 1, 2.0, 255, 2);
    imshow ("drawCircle", image);
    waitKey(0);

    return 0;
}


