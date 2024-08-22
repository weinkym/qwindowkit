#ifndef HUFRAMELESSHANDLER_H
#define HUFRAMELESSHANDLER_H
#include <QWidget>

class HUFramelessHandlerPrivate;
class HUFramelessHandler;

namespace QWK {
class WidgetWindowAgent;
}

class HUFramelessHandler
{
public:
    HUFramelessHandler(QWidget *widget);
    ~HUFramelessHandler();

protected:
    QWK::WidgetWindowAgent *windowAgent();

private:
    HUFramelessHandlerPrivate *m_dptr;
};

#endif // HUFRAMELESSHANDLER_H
