#include <iostream>
#include <aruco/aruco.h>
#include <aruco/cvdrawingutils.h>
#include <aruco/marker.h>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace aruco;


int main(int argc, char *argv[])
{

    /*open the camera*/
    VideoCapture cap(1);
    if(!cap.isOpened())
    {
        return -1;
    }
    Mat InImage;
    bool stop = false;
    /*prepare for the camera parameters*/

    CameraParameters camParam;
    double camMatData[3][3] = { {827.5677869352844, 0, 343.4033028034174},
                                {0, 827.4226963772862, 232.8485134241352},
                                {0, 0, 1}

                              };
    double tmpDistCoeffs[5] = {-0.01245509383293474, 0.050954504930418, -0.003378707118209004, 0.006430462217125062, 0};

    Mat cameraMat = Mat(3, 3, CV_64F, camMatData);
    Mat diff      = Mat(1, 5, CV_64F, tmpDistCoeffs);
    Size imgSize(640,480);
    camParam.setParams(cameraMat, diff, imgSize);

    /*random color*/
    RNG rng;

    while(!stop)
    {

        cap >> InImage;
        MarkerDetector MDetector;
        vector<Marker> Markers;
        //detect the marker
        MDetector.detect(InImage, Markers, camParam, 0.041);

        //draw some info for each marker

        for(int i = 0; i < Markers.size(); i++)
        {
            Markers[i].draw(InImage, Scalar(0,0,255), 2);
        }

        // draw a 3d cube in each marker if there is 3d info
        if (camParam.isValid() && 410 != -1)
            for (unsigned int i = 0; i < Markers.size(); i++)
            {
                CvDrawingUtils::draw3dCube(InImage, Markers[i], camParam);
                CvDrawingUtils::draw3dAxis(InImage, Markers[i], camParam);
            }


        imshow("Marker_Tracker", InImage);

        if(waitKey(30) >= 0)
        {
            stop = true;
        }
    }

    return 0;
}
