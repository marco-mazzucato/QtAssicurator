#ifndef MAINWINDOWVIEW_H
#define MAINWINDOWVIEW_H
#include <QGraphicsView>

class mainwindowview : public QGraphicsView
{
private:
    void resizeEvent(QResizeEvent*);
public:
    mainwindowview();
};

#endif // MAINWINDOWVIEW_H
