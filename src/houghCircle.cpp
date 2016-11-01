#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/circles1.jpg", 1);
    Mat midImage, dstImage;

    imshow("srcImage", srcImage);
    cvtColor(srcImage, midImage, CV_BGR2GRAY);

    GaussianBlur(midImage, midImage, Size(3, 3), 0, 0);
    imshow("midImage", midImage);

    vector<Vec3f> circles;
    HoughCircles(midImage, circles, CV_HOUGH_GRADIENT, 1, 50, 100, 200, 0, 0);

    //draw the circles

    for(int i = 0; i < circles.size(); i++)
    {
        Point center( cvRound(circles[i][0]), cvRound(circles[i][1]) );
        int radius = cvRound(circles[i][2]);
        circle(srcImage, center, 3, Scalar(0, 255, 0), -1, 8, 0);
        circle(srcImage, center, radius, Scalar(0, 255, 0), 3, 8, 0);


    }


    imshow("circle", srcImage);

    waitKey(0);
    return 0;
}
