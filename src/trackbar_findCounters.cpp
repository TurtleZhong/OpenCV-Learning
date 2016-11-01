#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;


Mat srcImage = imread("/home/m/zxl-opencv/src/dog.png");



vector<Vec4i> hierarchy;
vector< vector<Point> > counters;
int thres = 100;

void onCannyChange(int, void *);
int main(int argc, char *argv[])
{


    namedWindow("findCounters");
    createTrackbar("canny", "findCounters", &thres, 200, onCannyChange);
    onCannyChange(thres, 0);


    waitKey(0);
    return 0;
}

void onCannyChange(int, void *)
{
    Mat dstImage;
    dstImage = Mat::zeros(srcImage.rows, srcImage.cols, srcImage.type());

    Mat cannyImage;
    Canny(srcImage, cannyImage, thres, thres * 2);
    //imshow("canny", cannyImage);


    findContours(cannyImage, counters, hierarchy, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE);


    int index = 0;
    for(; index >= 0; index = hierarchy[index][0])
    {
            drawContours(dstImage, counters, index, Scalar(0, 0, 255), 1);
            cout << "index is " << index << endl;
    }

    imshow("findCounters", dstImage);
}
