#include "widgetmainwindow.h"
#include <QtWidgets/QApplication>

#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

int main(int argc, char *argv[])
{
    Mat img = imread("E:/Projects/PIU Project/Proiect_cmake/imagine.jpg", IMREAD_COLOR);

    imshow("Text", img);
	
    Mat dx, dy;
    QApplication a(argc, argv);
    WidgetMainWindow w;
    w.show();
    return a.exec();
}
