#include "clayer.h"

CLayer::CLayer(cv::Mat image)
{
	isPressed = false;
	setFlags(ItemIsMovable);
	SetImage(image);
}

CLayer::~CLayer()
{
	
}
void CLayer::SetImage(cv::Mat image)
{
	setPixmap(Tools::cvMatToQPixmap(image));
}


void CLayer::paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget)
{
	QRectF rec = boundingRect();
}

void CLayer::mousePressEvent(QGraphicsSceneMouseEvent * event)
{
	isPressed = true;
	update();
	QGraphicsPixmapItem::mousePressEvent(event);
}

void CLayer::mouseReleaseEvent(QGraphicsSceneMouseEvent* event)
{
	isPressed = false;
	update();
	QGraphicsPixmapItem::mouseReleaseEvent(event);

}
