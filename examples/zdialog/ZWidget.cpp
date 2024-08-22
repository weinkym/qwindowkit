#include "ZWidget.h"
#include <QPushButton>
#include <QWKWidgets/widgetwindowagent.h>

ZWidget::ZWidget(QWidget *parent)
    :QWidget(parent)
    ,HUFramelessHandler(this)
{
    QWidget *widget = new QWidget(this);
    widget->setStyleSheet("QWidget{background:#90FF00;}");
    widget->setGeometry(100,0,100,90);
    m_btn = new QPushButton(widget);
    m_btn->setText("jjjjjjjjjj");
    m_btn->setGeometry(0,0,100,90);
//    windowAgent()->setHitTestVisible(m_btn,true);
}

ZWidget::~ZWidget()
{

}
