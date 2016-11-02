#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace std;
using namespace cv;

int main(int argc, char *argv[])
{
    Mat image(500, 500, CV_8UC3);
    RNG &rng = theRNG();
    int pointCount = (unsigned) rng % 100 +3;
    vector<Point> points;

    for(int i = 0; i < pointCount; i++)
    {
        Point point;
        point.x = rng.uniform(image.cols / 4, image.rows * 3 / 4);
        point.y = rng.uniform(image.rows / 4, image.rows * 3 / 4);
        points.push_back(point);
    }

    image = Scalar::all(0);
    for (int i = 0; i < pointCount; i++)
    {
        circle(image, points[i], 3, Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)), -1  );
    }
    imshow("image", image);

    vector<int> hull;
    convexHull(Mat(points), hull, true);

    //draw hull
    int hullCount = hull.size();
    Point point0 = points[hull[hullCount - 1]];
    for (int i = 0; i < hull.size(); i++)
    {
        Point point = points[hull[i]];
        line(image, point0, point, Scalar(0, 0, 255), 3 );
        point0 = point;
    }

    imshow("hull", image);

    waitKey(0);
    return 0;
}
