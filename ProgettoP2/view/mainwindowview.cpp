#include "mainwindowview.h"

mainwindowview::mainwindowview() {}

void mainwindowview::resizeEvent(QResizeEvent* event){
    QGraphicsView::resizeEvent(event);
    fitInView(scene()->sceneRect(), Qt::KeepAspectRatio);
}
