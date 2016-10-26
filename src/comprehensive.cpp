#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    // Load a picture and then show it.
    Mat lena = imread("/home/m/zxl-opencv/src/lena.png");
    imshow("lena", lena);

    //Load two images and one cover the other one, and then show in one image.

    Mat image = imread("/home/m/zxl-opencv/src/lena.png", CV_LOAD_IMAGE_COLOR);
    Mat logo  = imread("/home/m/zxl-opencv/src/logo.png");

    imshow("image", image);
    imshow("logo", logo);

    // Creat a image that conserve the ROI

    Mat imageROI;

    imageROI = image(Rect(350, 300, logo.cols, logo.rows));

    addWeighted(imageROI, 0.5, logo, 0.5, 0., imageROI);

    imshow("outputROI", image);



    waitKey(0);

    return 0;
}
