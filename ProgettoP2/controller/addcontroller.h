#ifndef ADDCONTROLLER_H
#define ADDCONTROLLER_H
#include "controller.h"
#include <model/assicurati.h>
#include <view/addscene.h>


class addController : public controller
{
    Q_OBJECT
private:
    Assicurati* model;
    addScene* view;
public:
    addController();
};

#endif // ADDCONTROLLER_H
