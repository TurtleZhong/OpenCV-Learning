#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    /*convert the image to the HSV format*/
    Mat srcImage;
    srcImage = imread("/home/m/zxl-opencv/src/lena.png");

    /*parameters for calcHist*/
    int bins = 256;
    int histSize[] = {bins};

    float range[] = {0, 256};
    const float* ranges[] = {range};
    MatND dstHist;
    int channels[] = {0};

    calcHist(&srcImage, 1, channels, Mat(), dstHist, 1, histSize, ranges, true, false);

    /*parameters for drawing the histogram*/
    double maxValue = 0;
    minMaxLoc(dstHist, 0, &maxValue);

    cout << "maxValue = " << maxValue << endl;
    int scale = 3;
    int histHeight = 256;
    Mat histImage = Mat::zeros(histHeight, bins * scale, CV_8UC3);

    /*drawing the histogram*/


    for(int i = 0; i < bins; i++)
    {
        float binValue = dstHist.at<float>(i);
        int intensity = cvRound(binValue * histHeight / maxValue);
        rectangle(histImage, Point(i * scale, histHeight - 1), Point((i + 1) * scale - 1, histHeight - intensity),
                  Scalar(0, 0, 255), -1);


    }


    imshow("srcImage", srcImage);
    imshow("histImage", histImage);



    waitKey(0);


    return 0;
}
