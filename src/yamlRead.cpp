#include <iostream>
#include <opencv2/opencv.hpp>
#include <time.h>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    //init

    FileStorage fs;
    fs.open("test.yaml", FileStorage::READ);
    int framCount = (int)fs["frameCount"];
    cout << "frameCount is " << framCount << endl;

    Mat cameraMatrix, distCoeffs;
    fs["cameraMatrix"] >> cameraMatrix;
    fs["distCoeffs"] >> distCoeffs;
    cout << "cameraMatrix is: " << endl;
    cout << format(cameraMatrix, "python") << endl;

    /*
     * Here is some other data, but I have not tried......
     *
     */


    fs.release();
    cout << "Done!" << endl;

    return 0;
}
