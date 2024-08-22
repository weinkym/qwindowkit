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
