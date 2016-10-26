#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/dog.png");
    Mat dilateImage, erodeImage;
    int kernalSize = 4;
    Mat element = getStructuringElement(MORPH_RECT,
                                        Size(2 * kernalSize + 1, 2 * kernalSize + 1),
                                        Point(kernalSize, kernalSize));
    dilate(srcImage, dilateImage, element);

    imshow("dilate", dilateImage);

    erode(srcImage, erodeImage, element);
    imshow("erode", erodeImage);
    imshow("srcImgae", srcImage);


    waitKey(0);
    return 0;
}
