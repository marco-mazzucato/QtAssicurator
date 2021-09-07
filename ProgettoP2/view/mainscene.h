#ifndef MAINSCENE_H
#define MAINSCENE_H
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsTextItem>

class mainScene : public QGraphicsScene
{
    Q_OBJECT
public:
    mainScene();
signals:
    void onAddPress();
    void onSearchPress();
};

#endif // MAINSCENE_H
