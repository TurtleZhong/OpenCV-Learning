#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core/core.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat image = imread("/home/m/zxl-opencv/src/lena.png");
    vector <Mat> channels;
    Mat imageBlueChannels;
    Mat imageGreenChannels;
    Mat imageRedChannels;
    Mat mergeImage;

    split(image, channels);

    imageBlueChannels = channels.at(0);
    imageGreenChannels = channels.at(1);
    imageRedChannels = channels.at(2);

    imshow("BlueChannels", imageBlueChannels);
    imshow("imageGreenChannels", imageGreenChannels);
    imshow("imageRedChannels", imageRedChannels);

    merge(channels, mergeImage);
    imshow("mergeImage", mergeImage);



    waitKey(0);

    return 0;
}
