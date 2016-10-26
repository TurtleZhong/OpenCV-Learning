#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

Mat srcImage = imread("/home/m/zxl-opencv/src/dog.png");
Mat dilateImage, erodeImage;
int kernalSize = 4;
int mode;

void process();

void onChoice(int, void *);
void onKernalSize(int, void *);

int main(int argc, char *argv[])
{


    namedWindow("dilateAndErode");

    createTrackbar("dilate_or_erode", "dilateAndErode", &mode, 1, onChoice);
    onChoice(mode, 0);
    createTrackbar("kernalSize", "dilateAndErode", &kernalSize, 7, onKernalSize);
    onKernalSize(kernalSize, 0);


    waitKey(0);
    return 0;
}

void process()
{
    Mat element = getStructuringElement(MORPH_RECT,
                                        Size(2 * kernalSize + 1, 2 * kernalSize + 1),
                                        Point(kernalSize, kernalSize));
    if (mode == 0)
    {
        dilate(srcImage, dilateImage, element);
        imshow("dilateAndErode", dilateImage);
    }
    else
    {
        erode(srcImage, erodeImage, element, Point(-1, -1));
        imshow("dilateAndErode", erodeImage);
    }
}

void onChoice(int, void *)
{
    process();
}

void onKernalSize(int, void *)
{
    process();
}
