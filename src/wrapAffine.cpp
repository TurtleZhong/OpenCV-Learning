#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    //define 2 points and represents the triangle;
    Point2f srcTriangle[3];
    Point2f dstTriangle[3];

    Mat rotMat(2, 3, CV_32FC1);
    Mat warpMat(2, 3, CV_32FC1);

    Mat srcImage, dstImageWrap, dstImageWrapRotate;

    srcImage = imread("/home/m/zxl-opencv/src/lena.png");

    dstImageWrap = Mat::zeros(srcImage.rows, srcImage.cols, srcImage.type());

    srcTriangle[0] = Point2f(0, 0);
    srcTriangle[1] = Point2f(srcImage.cols -1, 0);
    srcTriangle[2] = Point2f(0, srcImage.rows - 1);

    dstTriangle[0] = Point2f(srcImage.cols * 0.0, srcImage.rows * 0.33);
    dstTriangle[1] = Point2f(srcImage.cols * 0.65, srcImage.rows * 0.35);
    dstTriangle[2] = Point2f(srcImage.cols * 0.15, srcImage.rows * 0.6);

    //show the triangles;
    line(srcImage, srcTriangle[0], srcTriangle[1], Scalar(255, 0, 0), 3);
    line(srcImage, srcTriangle[1], srcTriangle[2], Scalar(255, 0, 0), 3);
    line(srcImage, srcTriangle[0], srcTriangle[2], Scalar(255, 0, 0), 3);
    line(srcImage, dstTriangle[0], dstTriangle[1], Scalar(0, 255, 0), 3);
    line(srcImage, dstTriangle[1], dstTriangle[2], Scalar(0, 255, 0), 3);
    line(srcImage, dstTriangle[0], dstTriangle[2], Scalar(0, 255, 0), 3);
    imshow("src", srcImage);


    warpMat = getAffineTransform(srcTriangle, dstTriangle);
    cout << warpMat << endl;

    warpAffine(srcImage, dstImageWrap, warpMat, dstImageWrap.size());

    imshow("warpImage", dstImageWrap);




    waitKey(0);
    return 0;
}
