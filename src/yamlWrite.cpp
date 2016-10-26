#include <iostream>
#include <opencv2/opencv.hpp>
#include <time.h>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    //init

    FileStorage fs;
    fs.open("test.yaml", FileStorage::WRITE);
    fs << "frameCount" << 5;

    time_t rawtime;
    time(&rawtime);

    fs << "calibrationDate" << asctime(localtime(&rawtime));

    Mat cameraMatrix = (Mat_<double>(3,3) << 1000, 0, 320, 0, 1000, 240, 0, 0, 1);
    Mat distCoeffs   = (Mat_<double>(5,1) << 0.1, 0.01, -0.001, 0, 0);
    fs << "cameraMatrix" << cameraMatrix << "distCoeffs" << distCoeffs;

    /*
     * Here is some other data, but I have not tried......
     *
     */


    fs.release();
    cout << "Done!" << endl;

    return 0;
}
