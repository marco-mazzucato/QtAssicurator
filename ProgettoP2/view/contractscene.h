#ifndef CONTRACTSCENE_H
#define CONTRACTSCENE_H
#include <QGraphicsScene>
#include <model/assicurati.h>
#include <QPushButton>
#include <QLabel>
#include <QGraphicsTextItem>


class contractScene : public QGraphicsScene
{
    Q_OBJECT
public:
    contractScene();
    void loadUser(Vector<DeepPtr<Assicurazione>>::iterator);
signals:
    void onNextPress();
    void onPreviousPress();
    void onDeletePress();
    void onHomePress();
};

#endif // CONTRACTSCENE_H
