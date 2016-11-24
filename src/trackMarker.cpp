#include <iostream>
#include <aruco/aruco.h>
#include <aruco/cvdrawingutils.h>
#include <aruco/marker.h>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace aruco;


int main(int argc, char *argv[])
{
    Mat image = imread("/home/m/zxl-opencv/src/lena.png");
    imshow("image",image);





    waitKey(0);
    return 0;
}
