#include "HUFramelessHandlerPrivate.h"
#include <QObject>
#include "HUFramelessHandler.h"

HUFramelessHandlerPrivate::HUFramelessHandlerPrivate(QWidget *widget, HUFramelessHandler *ptr)
    :m_widget(widget)
    ,m_pptr(ptr)
{
    m_windowAgent = new QWK::WidgetWindowAgent(this);
//    m_windowAgent->setup(widget);
//    m_windowAgent->setTitleBar(widget);
//    m_windowAgent->setHasChildCb([this](const QObject *,const QPoint &pos)->bool {
//        if(m_pptr)
//        {
//            return m_pptr->hasChild(pos);
//        }
//        return false;
//    });
}

HUFramelessHandlerPrivate::~HUFramelessHandlerPrivate()
{

}

QWK::WidgetWindowAgent *HUFramelessHandlerPrivate::windowAgent()
{
    return m_windowAgent;
}

void HUFramelessHandlerPrivate::initFramelesss()
{
    if(!m_inited)
    {
        //为了解决部分提前初始化的dialog父窗口页面异常
        m_inited = true;
        m_windowAgent->setup(m_widget);
        m_windowAgent->setTitleBar(m_widget);
        m_windowAgent->setHasChildCb([this](const QObject *,const QPoint &pos)->bool {
            if(m_pptr)
            {
                return m_pptr->hasChild(pos);
            }
            return false;
        });
    }
}

