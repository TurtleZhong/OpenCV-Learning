#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>
/**
 * Using 3 methods to access the pixel of the image, and test the time-cost of each method.
 */
using namespace std;
using namespace cv;

void colorReduce1 (Mat& inputImage, Mat& outputImage, int div);
void colorReduce2 (Mat& inputImage, Mat& outputImage, int div);
void colorReduce3 (Mat& inputImage, Mat& outputImage, int div);

int main(int argc, char *argv[])
{
    Mat srcImage = imread("/home/m/zxl-opencv/src/lena.png");
    imshow("srcImage", srcImage);

    Mat dstImage;
    dstImage.create(srcImage.rows, srcImage.cols, srcImage.type());

    double time0 = (double) getTickCount();
    /* meathod 1 cost 0.00433777s */
    //colorReduce1(srcImage, dstImage, 32);

    /* meathod 2 cost 0.0148197s */
    //colorReduce2(srcImage, dstImage, 32);

    /* meathod 3 cost 0.0153091s */
    colorReduce3(srcImage, dstImage, 32);

    time0 = ((double) getTickCount() - time0) / getTickFrequency();

    cout << "This method cost " << time0 << "s" << endl;

    imshow("dstImage", dstImage);


    waitKey(0);

    return 0;
}

/**
 * @brief colorReduce1--> using pointer to assess the pixel
 * @param imputImage
 * @param outputImage
 * @param div
 */
void colorReduce1 (Mat& inputImage, Mat& outputImage, int div)
{
    outputImage = inputImage.clone();
    int rows = outputImage.rows;
    int cols = outputImage.cols * outputImage.channels();
    cout << "Row: " << rows << "  Cols: " << cols << endl;
    //access to the pixel u
    for (int i = 0; i < rows; i++)
    {
        uchar* data = outputImage.ptr<uchar>(i);
        for (int j = 0; j < cols; j++)
        {
            data[j] = data[j] / div *div +div/2;
        }
    }
}

/**
 * @brief colorReduce2 --> using iterator to assess the pixel
 * @param inputImage
 * @param outputImage
 * @param div
 */
void colorReduce2(Mat &inputImage, Mat &outputImage, int div)
{
    outputImage = inputImage.clone();
    Mat_<Vec3b>::iterator it = outputImage.begin<Vec3b>();
    Mat_<Vec3b>::iterator itend = outputImage.end<Vec3b>();

    //access to the pixel
    for(; it != itend; it++)
    {
        (*it)[0] = (*it)[0] / div *div + div/2;
        (*it)[1] = (*it)[1] / div *div + div/2;
        (*it)[2] = (*it)[2] / div *div + div/2;
    }
}

void colorReduce3(Mat &inputImage, Mat &outputImage, int div)
{
    outputImage = inputImage.clone();
    int rows = outputImage.rows;
    int cols = outputImage.cols;

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            outputImage.at<Vec3b>(i, j)[0] = outputImage.at<Vec3b>(i, j)[0] /div *div + div/2;
            outputImage.at<Vec3b>(i, j)[1] = outputImage.at<Vec3b>(i, j)[1] /div *div + div/2;
            outputImage.at<Vec3b>(i, j)[2] = outputImage.at<Vec3b>(i, j)[2] /div *div + div/2;
        }
    }
}
