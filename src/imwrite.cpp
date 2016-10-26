#include <iostream>
#include <opencv2/opencv.hpp>
#include <vector>

using namespace cv;
using namespace std;

void creatAlphaMat(Mat &mat);

int main(int argc, char *argv[])
{
    //Creat an image with Alpha channel
    Mat mat(480, 640, CV_8UC4);
    creatAlphaMat(mat);
    vector<int> compressParams;
    compressParams.push_back(CV_IMWRITE_PNG_COMPRESSION);
    imwrite("Alpha.png", mat, compressParams);
    imshow("Alpha", mat);

    waitKey(0);


    return 0;
}
/**
 * @brief creatAlphaMat--> creat an image with 4 channels
 * @param mat
 */
void creatAlphaMat (Mat &mat)
{
    for (int i = 0; i < mat.rows; ++i)
    {
        for (int j = 0; j < mat.cols; ++j)
        {
            Vec4b&rgba = mat.at<Vec4b>(i, j);
            rgba[0] = UCHAR_MAX;
            rgba[1] = 255;
            rgba[2] = 125;
            rgba[3] = 123;


        }
    }
}


