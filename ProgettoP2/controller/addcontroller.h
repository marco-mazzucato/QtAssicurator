#ifndef ADDCONTROLLER_H
#define ADDCONTROLLER_H
#include "controller.h"
#include <model/assicurati.h>
#include <view/addscene.h>


class addController : public controller, public QObject
{
private:
    Assicurati* model;
    addScene* view;
public:
    addController();
public slots:
    void buildAss();
};

#endif // ADDCONTROLLER_H
