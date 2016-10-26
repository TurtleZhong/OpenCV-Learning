#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{

    Mat src = imread("/home/m/zxl-opencv/src/lena.png");
    Mat out;

    blur(src, out, Size(5, 5));

    imshow("src", src);
    imshow("out", out);

    waitKey(0);


    return 0;
}
