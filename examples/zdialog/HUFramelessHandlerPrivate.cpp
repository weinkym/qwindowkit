#include "HUFramelessHandlerPrivate.h"

HUFramelessHandlerPrivate::HUFramelessHandlerPrivate(QWidget *widget, HUFramelessHandler *ptr)
    :m_widget(widget)
    ,m_pptr(ptr)
{
    m_windowAgent = new QWK::WidgetWindowAgent(this);
    m_windowAgent->setup(widget);
//    m_windowAgent->setTitleBar(widget);
}

HUFramelessHandlerPrivate::~HUFramelessHandlerPrivate()
{

}

QWK::WidgetWindowAgent *HUFramelessHandlerPrivate::windowAgent()
{
    return m_windowAgent;
}

