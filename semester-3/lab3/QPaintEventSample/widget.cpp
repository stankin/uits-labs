#include "widget.h"
#include <QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}


void Widget::paintEvent(QPaintEvent *e)
{

    QPainter p(this);

    QPen pen;
    pen.setColor(Qt::blue);
    pen.setWidth(3);
    p.setPen(pen);

    p.drawLine(0, 5, 1000, 1000);


    pen.setColor(Qt::red);
    pen.setWidth(5);
    pen.setStyle(Qt::DashDotLine);
    p.setPen(pen);

    p.drawEllipse(QPoint(100,100),30,50);

}

Widget::~Widget()
{
    
}
