#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{

    Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
    Mat downImage, upImage;
    pyrDown(srcImage, downImage, Size(srcImage.rows / 2, srcImage.cols / 2));
    pyrUp(srcImage, upImage, Size(srcImage.rows * 2, srcImage.cols * 2));
    imshow("srcImage", srcImage);
    imshow("pyrDown", downImage);
    imshow("pyrUp", upImage);



    waitKey(0);
    return 0;
}
