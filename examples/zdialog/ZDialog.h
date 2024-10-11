#ifndef ZDIALOG_H
#define ZDIALOG_H
#include <QDialog>
#include "HUFramelessHandler.h"
#include "ZTitleBar.h"

class ZDialog : public QDialog,public HUFramelessHandler
{
    Q_OBJECT
public:
    ZDialog(QWidget *parent = nullptr);
    ~ZDialog();
    void show();

protected:
    virtual bool nativeEvent(const QByteArray &eventType, void *message, long *result);
    virtual bool hasChild(const QPoint &pos) const override;
    virtual void showEvent(QShowEvent *event) override;

private:
    ZTitleBar *m_titleBar;
};

#endif // ZDIALOG_H
