#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat function ()
{
    Mat ima(300, 300, CV_8U, 50);
    return ima;
}

int main(int argc, char *argv[])
{
    Mat gray = function();
    Mat gray1 = gray.clone();

    imshow ("Clone", gray1);
    imshow ("Image", gray);
    waitKey(0);
    return 0;
}

