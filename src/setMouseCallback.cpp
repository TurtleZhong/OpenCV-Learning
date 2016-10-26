#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

const char *WindowName = "mouseCallback";

void onMouse (int event, int x, int y, int flags, void* param);
void drawRectangle (Mat& img, Rect box);

Rect rectangleBox;
bool isDrawing = false;
RNG rng(12345);



int main(int argc, char *argv[])
{
    rectangleBox = Rect(-1, -1, 0, 0);
    Mat srcImage(480, 640, CV_8UC3), tempImage;
    srcImage.copyTo(tempImage);

    srcImage = Scalar::all(0);

    // set mouse callback function

    namedWindow(WindowName);

    setMouseCallback(WindowName, onMouse, (void*)& srcImage);

    while (1) {
        srcImage.copyTo(tempImage);
        if (isDrawing)
        {
            drawRectangle(tempImage, rectangleBox);

        }
        imshow(WindowName, tempImage);

        if (waitKey(10) == 27)
            break;
    }


    return 0;
}

void onMouse (int event, int x, int y, int flags, void* param)
{
    Mat& image = *(Mat*) param;

    switch (event) {
    case EVENT_MOUSEMOVE:
        if (isDrawing)
        {
            rectangleBox.width = x - rectangleBox.x;
            rectangleBox.height = y - rectangleBox.y;
        }
        break;

    case EVENT_LBUTTONDOWN:
        isDrawing = true;
        rectangleBox = Rect(x, y, 0, 0);
        break;

    case EVENT_LBUTTONUP:
        isDrawing = false;
        drawRectangle(image, rectangleBox);
        break;

    default:
        break;
    }
}

void drawRectangle (Mat& img, Rect box)
{

    rectangle(img, box.tl(), box.br(), Scalar(rng.uniform(0, 255), rng.uniform(0, 255), rng.uniform(0, 255)));
}
