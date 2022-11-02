#include "widgetmainwindow.h"

WidgetMainWindow::WidgetMainWindow(QWidget *parent): QMainWindow(parent),
    ui(new Ui::WidgetMainWindowClass())
{
    ui->setupUi(this);

    //view = new WidgetMainGraphics(this);
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);

    AddLayers();
}
//-------------------------------------------------------------------------------------------------
WidgetMainWindow::~WidgetMainWindow()
{
    delete ui;
}
//-------------------------------------------------------------------------------------------------
void WidgetMainWindow::AddLayers()
{
    CLayer* layer = new CLayer(cv::imread("amogus.jpg"));
    scene->addItem(layer);

}
//-------------------------------------------------------------------------------------------------