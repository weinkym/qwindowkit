#include "HUFramelessHandler.h"
#include "HUFramelessHandlerPrivate.h"

HUFramelessHandler::HUFramelessHandler(QWidget *widget)
    :m_dptr(new HUFramelessHandlerPrivate(widget,this))

{

}

HUFramelessHandler::~HUFramelessHandler()
{

}

QWK::WidgetWindowAgent *HUFramelessHandler::windowAgent()
{
    return m_dptr->windowAgent();
}

bool HUFramelessHandler::hasChild(const QPoint &pos) const
{
    return false;
}

void HUFramelessHandler::initFramelesss()
{
    m_dptr->initFramelesss();
}
