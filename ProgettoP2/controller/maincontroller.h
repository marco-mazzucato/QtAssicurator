#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H
#include "controller.h"
#include "view/mainscene.h"

class mainController : public controller
{
    Q_OBJECT
private:
    mainScene* view;
public:
    mainController();
    mainScene* getScene() const;
};

#endif // MAINCONTROLLER_H
