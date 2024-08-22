#ifndef ZWIDGET_H
#define ZWIDGET_H

#include <QWidget>
#include "HUFramelessHandler.h"

class QPushButton;

class ZWidget : public QWidget,public HUFramelessHandler
{
    Q_OBJECT
public:
    ZWidget(QWidget *parent = nullptr);
    ~ZWidget();

private:
    QPushButton *m_btn = nullptr;
};

#endif // ZWIDGET_H
