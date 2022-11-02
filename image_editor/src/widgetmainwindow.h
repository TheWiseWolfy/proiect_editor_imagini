#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_widgetmainwindow.h"
#include "utils.h"
#include "clayer.h"
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

QT_BEGIN_NAMESPACE
namespace Ui { class WidgetMainWindowClass; };
QT_END_NAMESPACE

class WidgetMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    WidgetMainWindow(QWidget *parent = nullptr);
    ~WidgetMainWindow();

public:
   void AddLayers();
private:
    Ui::WidgetMainWindowClass *ui;
    QGraphicsScene* scene;
    std::vector<CLayer> layerManager;

};
