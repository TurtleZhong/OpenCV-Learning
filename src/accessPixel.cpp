#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

void salt(Mat image, int n);

int main(int argc, char *argv[])
{
    Mat image = imread("/home/m/zxl-opencv/src/lena.png",0);
    salt(image, 3000);
    imshow("Image", image);
    waitKey(0);
    return 0;
}

void salt (Mat image, int n)
{
    int i,j;
    for (int k = 0; k < n; k++)
    {
        i = rand() % image.cols;
        j = rand() % image.rows;
        //cout << "i = " << i << ", " << "j= " << j << endl;
    }
    if (image.type() == CV_8UC1)
    {
        image.at<uchar>(j, i) = 255;
        cout << "Gray image" << endl;
    }
    else if (image.type() == CV_8UC3)
    {
        image.at<Vec3b>(j, i)[0] = 255;
        image.at<Vec3b>(j, i)[1] = 255;
        image.at<Vec3b>(j, i)[2] = 255;
    }
}
