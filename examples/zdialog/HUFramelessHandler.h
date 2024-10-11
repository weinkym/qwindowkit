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
    virtual bool hasChild(const QPoint &pos) const;
    void initFramelesss();

private:
    friend class HUFramelessHandlerPrivate;
    HUFramelessHandlerPrivate *m_dptr;
};

#endif // HUFRAMELESSHANDLER_H
