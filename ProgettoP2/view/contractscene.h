#ifndef CONTRACTSCENE_H
#define CONTRACTSCENE_H
#include <QGraphicsScene>
#include <model/assicurati.h>


class contractScene : public QGraphicsScene
{
    Q_OBJECT
public:
    contractScene();
    void loadUser(Vector<DeepPtr<Assicurazione>>::iterator);
};

#endif // CONTRACTSCENE_H
