#ifndef CONTRACTCONTROLLER_H
#define CONTRACTCONTROLLER_H

#include "controller.h"
#include "model/assicurati.h"
#include "view/contractscene.h"

class contractController : public controller
{
    Q_OBJECT
private:
    Assicurati* model;
    contractScene* view;
public:
    contractController(Assicurati*);
};

#endif // CONTRACTCONTROLLER_H
