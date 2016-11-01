#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/dog.png");
    Mat cannyImage, dstImage;
    vector<Vec4i> hierarchy;
    dstImage = Mat::zeros(srcImage.rows, srcImage.cols, srcImage.type());
    Canny(srcImage, cannyImage, 100, 200);
    //imshow("canny", cannyImage);

    vector< vector<Point> > counters;
    findContours(cannyImage, counters, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);

    int index = 0;
    for(; index >= 0; index = hierarchy[index][0])
    {
            drawContours(dstImage, counters, index, Scalar(0, 0, 255), 3);
            cout << "index is " << index << endl;
    }

    imshow("dstImage", dstImage);



    waitKey(0);
    return 0;
}
