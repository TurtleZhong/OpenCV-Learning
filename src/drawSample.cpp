#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

const char * WindowName1 = "chamestry";
const char * WindowName2 = "integrate";
const int WindowWidth = 600;

void drawEllipse(Mat &img, double angle);
void drawFilledCircle(Mat &img, Point center);

int main(int argc, char *argv[])
{
    double time0 = double(getTickCount());

    Mat atomImage(WindowWidth, WindowWidth, CV_8UC3, Scalar(30, 30, 30));
    drawEllipse(atomImage, 90);
    drawEllipse(atomImage, 0);
    drawEllipse(atomImage, 45);
    drawEllipse(atomImage, -45);

    drawFilledCircle(atomImage, Point(WindowWidth / 2, WindowWidth / 2));

    imshow (WindowName1, atomImage);
    time0 = ((double)getTickCount() - time0)/getTickFrequency();
    cout << "The run time is " << time0 << "s" << endl;

    waitKey(0);
    return 0;
}


void drawEllipse (Mat &img, double angle)
{
    int thickness = 2;
    int lineType = 8;

    ellipse(img,
            Point (WindowWidth / 2, WindowWidth / 2),
            Size (WindowWidth / 4, WindowWidth / 16),
            angle,
            0,
            360,
            Scalar(255, 129, 0),
            thickness,
            lineType
            );
}

void drawFilledCircle (Mat &img, Point center)
{
    int thickness = -1;
    int lineType = 8;

    circle(img,
           center,
           WindowWidth/32,
           Scalar(0, 0, 255),
           thickness,
           lineType
           );
}


