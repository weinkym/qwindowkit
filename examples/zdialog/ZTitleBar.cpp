#include "ZTitleBar.h"
#include <QPainter>
#include <QDebug>
#include <Windows.h>
#include "QPushButton"

ZTitleBar::ZTitleBar(QWidget *parent)
    :QWidget(parent)
{
    QPushButton * btn = new QPushButton("ABCD",this);
    btn->setFixedSize(100,90);
}

ZTitleBar::~ZTitleBar()
{

}

void ZTitleBar::paintEvent(QPaintEvent *event)
{
    QPainter p(this);
    p.setBrush(QBrush(QColor("#90FF0000")));
    p.drawRect(QRect(0,0,this->width(),this->height()));
}

void ZTitleBar::mousePressEvent(QMouseEvent *event)
{
    qDebug()<<Q_FUNC_INFO<<__LINE__;
}

void ZTitleBar::mouseReleaseEvent(QMouseEvent *event)
{
    qDebug()<<Q_FUNC_INFO<<__LINE__;
}

void ZTitleBar::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug()<<Q_FUNC_INFO<<__LINE__;
}

void ZTitleBar::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<Q_FUNC_INFO<<__LINE__;
}

bool ZTitleBar::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    MSG* msg = (MSG*)message;
    qDebug()<<Q_FUNC_INFO<<__LINE__<<msg->message;
    return QWidget::nativeEvent(eventType,message,result);
}
