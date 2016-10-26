#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

Mat image;

int ContrastValue;
int BrightValue;

void contrastAndBright(int, void *);

int main(int argc, char *argv[])
{

    image = imread("/home/m/zxl-opencv/src/lena.png");
    //contrastAndBright(image);

    ContrastValue = 100;
    BrightValue = 50;

    namedWindow("lena");



    createTrackbar("contrastValue", "lena", &ContrastValue, 300, contrastAndBright);
    createTrackbar("BrightValue", "lena", &BrightValue, 200, contrastAndBright);

    contrastAndBright(ContrastValue, 0);
    contrastAndBright(BrightValue, 0);



    waitKey(0);
    return 0;
}



void contrastAndBright (int, void*)
{
    int rows = image.rows;
    int cols = image.cols;
    Mat img;
    image.copyTo(img); //For protecting the original image data.
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int c = 0; c < 3; c++) //channels
            img.at<Vec3b>(i,j)[c] = saturate_cast<uchar>(ContrastValue * img.at<Vec3b>(i,j)[c] * 0.01 + BrightValue);
        }
    }
    cout <<  ContrastValue << endl;
    cout << BrightValue << endl;
    imshow("lena",img);
}
