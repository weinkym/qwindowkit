#ifndef ZTITLEBAR_H
#define ZTITLEBAR_H

#include <QWidget>

class ZTitleBar : public QWidget
{
    Q_OBJECT
public:
    ZTitleBar(QWidget *parent = nullptr);
    ~ZTitleBar();

protected:
    void paintEvent(QPaintEvent *event) override;
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void mouseDoubleClickEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual bool nativeEvent(const QByteArray &eventType, void *message, long *result);
};

#endif // ZTITLEBAR_H
