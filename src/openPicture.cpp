#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Point2f p (6, 2);
    cout << "p = " << p << endl;
    cout << p.x << endl;
    Point3f p3 (8, 5, 4);
    cout << "p3.z = " << p3.z << endl;

    vector<float> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(8);
    cout << Mat(v) << endl;
    vector <Point2f> points(20);

    for (int i = 0; i < 20; ++i)
    {
        points[i] = Point2f((float)(i * 3), (float)(i * 7));
    }
    cout << points[4].x << endl;
    Mat image;
    cout << "This image is " << image.rows << " x " << image.cols << endl;
    image = imread("/home/m/zxl-opencv/src/lena.png", CV_LOAD_IMAGE_GRAYSCALE);

    cout << "This image has " << image.channels() << " channels." << endl;
    cout << "Read image susscessfuly!" << endl;
    cout << "And now This image is " << image.rows << " x " << image.cols << endl;

    if(image.empty())
    {
        cout << "Read image wrong" << endl;
    }

    Mat result;
    flip(image, result, 1);

    //namedWindow("Original Image");
    //namedWindow("Output image");
    imshow("Original Image", image);
    imshow("Output image", result);
    cv::waitKey(0);

    return 0;
}
