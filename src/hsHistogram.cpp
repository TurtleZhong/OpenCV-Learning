#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    /*convert the image to the HSV format*/
    Mat srcImage, hsvImage;
    srcImage = imread("/home/m/zxl-opencv/src/lena.png");
    cvtColor(srcImage, hsvImage, CV_BGR2HSV);

    /*parameters for calcHist*/
    int hueBinNum = 30;
    int saturationBinNum = 32;
    int histSize[] = {hueBinNum, saturationBinNum};

    float hueRanges[] = {0, 180};
    float saturationRanges[] = {0, 256};
    const float* ranges[] = {hueRanges, saturationRanges};
    MatND dstHist;
    int channels[] = {0, 1};

    calcHist(&hsvImage, 1, channels, Mat(), dstHist, 2, histSize, ranges, true, false);

    /*parameters for drawing the histogram*/
    double maxValue = 0;
    minMaxLoc(dstHist, 0, &maxValue);

    int scale = 10;
    Mat histImage = Mat::zeros(saturationBinNum * scale, hueBinNum * scale, CV_8UC3);

    /*drawing the histogram*/


    for(int saturation = 0; saturation < saturationBinNum; saturation++)
    {
        for(int hue = 0; hue < hueBinNum; hue++)
        {
            float binValue = dstHist.at<float>(hue, saturation);
            int intensity = cvRound(binValue * 255 / maxValue);

            rectangle(histImage, Point(hue * scale, saturation * scale),
                      Point( (hue + 1)*scale -1 , (saturation + 1)*scale -1), Scalar::all(intensity), CV_FILLED);

        }

    }


    imshow("hsvImage", hsvImage);
    imshow("histImage", histImage);



    waitKey(0);


    return 0;
}
