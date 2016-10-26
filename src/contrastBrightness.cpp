#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;


const int ContrastValue = 3;
const int BrightValue = 1;

void contrastAndBright(Mat &image);

int main(int argc, char *argv[])
{

    Mat image = imread("/home/m/zxl-opencv/src/lena.png");
    contrastAndBright(image);
    imshow("lena",image);


    waitKey(0);
    return 0;
}

void contrastAndBright (Mat& image)
{
    int rows = image.rows;
    int cols = image.cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int c = 0; c < 3; c++) //channels
            image.at<Vec3b>(i,j)[c] = saturate_cast<uchar>(ContrastValue * image.at<Vec3b>(i,j)[c] + BrightValue);
        }
    }
}
