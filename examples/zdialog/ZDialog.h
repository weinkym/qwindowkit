#ifndef ZDIALOG_H
#define ZDIALOG_H
#include <QDialog>
#include "HUFramelessHandler.h"

class ZDialog : public QDialog,public HUFramelessHandler
{
    Q_OBJECT
public:
    ZDialog(QWidget *parent = nullptr);
    ~ZDialog();
};

#endif // ZDIALOG_H
