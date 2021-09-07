#ifndef ADDCONTROLLER_H
#define ADDCONTROLLER_H
#include "controller.h"
#include <model/assicurati.h>
#include <view/addscene.h>
#include <QObject>

class addController : public controller
{
    Q_OBJECT
private:
    Assicurati* model;
    addScene* view;
public:
    addController(Assicurati*);
public slots:
    void checkParams();
    void buildAss();
    addScene* getScene() const;
};

#endif // ADDCONTROLLER_H
