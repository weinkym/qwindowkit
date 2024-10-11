#include "ZDialog.h"
#include <QWKWidgets/widgetwindowagent.h>
#include <QVBoxLayout>
#include <QDebug>
#include <Windows.h>
#include <QTimer>

static bool hasChild(const QObject *obj,const QPoint &pos)
{
    qDebug()<<Q_FUNC_INFO<<__LINE__;
    auto widget = dynamic_cast<const QWidget*>(obj);
    if(widget)
    {
        auto cw  = widget->childAt(pos);
        if(cw)
        {
            return true;
        }
    }
    return false;
}
ZDialog::ZDialog(QWidget *parent)
    :QDialog(parent)
    ,HUFramelessHandler(this)
{
    m_titleBar = new ZTitleBar(this);
//    m_titleBar->setGeometry(0,0,260,60);
//    //windowAgent()->setTitleBar(m_titleBar);


//    this->resize(600,400);

//    auto m_rootLy = HUUtils::createVLayout();
    auto m_rootLy = new QVBoxLayout;
    this->setLayout(m_rootLy);
//    m_titleBar = new HUTitleBar(this);
//    m_titleBar->getSystemButtonBar()->setBtnVisible(HUSystemButtonBar::BTN_ID_CLOSE, true);
//    m_titleBar->getSystemButtonBar()->setBtnVisible(HUSystemButtonBar::BTN_ID_MIN, true);
//    m_titleBar->getSystemButtonBar()->setBtnVisible(HUSystemButtonBar::BTN_ID_FULL, true);
    m_titleBar->setFixedHeight(90);
//    m_titleBar->setBgColor("#4000FF00");

    m_rootLy->addWidget(m_titleBar);
    auto m_contentWidget = new QWidget;
//    m_contentWidget->setLeftKeyClickable(true);
//    m_contentWidget->setIsNoStatus(false);

//    auto btn = new HUHButton(m_contentWidget);
//    btn->setGeometry(110, 20, 100, 90);
//    btn->setText("AAAAAAAAAAA");
//    btn->backgroundObject().setBgBrushObject(HUStatusObject<QString>("#4B0082", "#191970", "#ADD8E6", "#ccccc"));
    m_rootLy->addWidget(m_contentWidget, 1);
//    m_titleBar->getSystemButtonBar()->setFilter(this);

//    windowAgent()->setHasChildCb(hasChild);
//    windowAgent()->setTitleBar(m_titleBar);
    //windowAgent()->setHitTestVisible(m_contentWidget, true);
    //windowAgent()->setHitTestVisible(m_titleBar->getSystemButtonBar()->getIdBtn(HUSystemButtonBar::BTN_ID_CLOSE), true);
    //windowAgent()->setHitTestVisible(m_titleBar->getSystemButtonBar()->getIdBtn(HUSystemButtonBar::BTN_ID_MIN), true);
    //windowAgent()->setHitTestVisible(m_titleBar->getSystemButtonBar()->getIdBtn(HUSystemButtonBar::BTN_ID_FULL), true);
    this->resize(600, 400);

    {
        auto titleBar = new ZTitleBar(m_contentWidget);
        titleBar->setGeometry(0,200,260,60);
    }
}

ZDialog::~ZDialog()
{

}

void ZDialog::show()
{
    this->initFramelesss();
    QDialog::show();
}

bool ZDialog::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    MSG* msg = (MSG*)message;
    switch (msg->message) {
        case WM_NCLBUTTONDBLCLK:
            qDebug()<<Q_FUNC_INFO<<__LINE__<<msg->message;
            break;
        default:
            break;
    }
    return QDialog::nativeEvent(eventType,message,result);
}

bool ZDialog::hasChild(const QPoint &pos) const
{
    return pos.y() > 80;
}

void ZDialog::showEvent(QShowEvent *event)
{

}
