#pragma once

#include <QGraphicsPixmapItem>
#include "opencv2/core/mat.hpp"
#include "utils.h"

class CLayer  : public QGraphicsPixmapItem
{

public:
	explicit CLayer(cv::Mat image);
	~CLayer();

	//QRectF boundingRect() const;
	void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
	void SetImage(cv::Mat image);


protected:
	void mousePressEvent(QGraphicsSceneMouseEvent *event);
	void mouseReleaseEvent(QGraphicsSceneMouseEvent*event);

private:
	bool isPressed;
	
};
