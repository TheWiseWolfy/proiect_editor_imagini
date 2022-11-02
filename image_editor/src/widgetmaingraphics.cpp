#include "widgetmaingraphics.h"

WidgetMainGraphics::WidgetMainGraphics(QWidget *parent)
	: QGraphicsView(parent)
{
	scene = new QGraphicsScene(this);
	
}

WidgetMainGraphics::~WidgetMainGraphics()
{}
