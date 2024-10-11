#ifndef HUFRAMELESSHANDLERPRIVATE_H
#define HUFRAMELESSHANDLERPRIVATE_H
#include <QObject>
#include <QPointer>
#include <QWidget>
#include <QWKWidgets/widgetwindowagent.h>

class HUFramelessHandler;

class HUFramelessHandlerPrivate : public QObject
{
    Q_OBJECT
public:
    HUFramelessHandlerPrivate(QWidget *widget,HUFramelessHandler *ptr);
    ~HUFramelessHandlerPrivate();
    QWK::WidgetWindowAgent *windowAgent();
    void initFramelesss();

private:
    HUFramelessHandler* m_pptr = nullptr;
    bool m_inited = false;
    QPointer<QWidget> m_widget;
    QWK::WidgetWindowAgent *m_windowAgent;
};

#endif // HUFRAMELESSHANDLERPRIVATE_H
