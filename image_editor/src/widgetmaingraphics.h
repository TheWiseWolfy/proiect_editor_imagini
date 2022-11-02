#pragma once

#include <QGraphicsView>
#include "clayer.h"
class WidgetMainGraphics  : public QGraphicsView
{
	Q_OBJECT

public:
	WidgetMainGraphics(QWidget *parent = 0);
	~WidgetMainGraphics();

private:
	QGraphicsScene *scene;
	std::vector<CLayer> layerManager;

};
