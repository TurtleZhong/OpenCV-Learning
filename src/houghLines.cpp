#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/character.jpg");
    Mat edgeImage, dstImage;

    Canny(srcImage, edgeImage, 50, 150);
    cvtColor(edgeImage, dstImage, CV_GRAY2BGR);

    imshow("edge", edgeImage);

    vector<Vec4i> lines;
    HoughLinesP(edgeImage, lines, 1, CV_PI/180, 90, 80, 10);
    for(int i = 0; i < lines.size(); i++)
    {
//        float rho = lines.at(i)[0], theta = lines[i][1];
//        Point pt1, pt2;
//        double a = cos(theta), b = sin(theta);
//        double x0 = a * rho, y0 = b * rho;
//        pt1.x = cvRound(x0 + 1000 * (-b));
//        pt2.y = cvRound(y0 + 1000 * (a));
//        pt1.x = cvRound(x0 - 1000 * (-b));
//        pt2.y = cvRound(y0 - 1000 * (a));
        Vec4i l = lines[i];
        line(dstImage, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(55, 100, 195), 1, 8);

    }
    imshow("LINES", dstImage);


    waitKey(0);
    return 0;
}
