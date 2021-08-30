#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <QGraphicsScene>


class controller: public QObject
{
    Q_OBJECT
public:
    controller();
    virtual QGraphicsScene* getScene() const = 0;

signals:
    void changeScene(char);
};

#endif // CONTROLLER_H
