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
    Vector<DeepPtr<Assicurazione>>::iterator it;
public:
    contractController(Assicurati*);
    contractScene* getScene() const;
public slots:
    void deleteMember();
};

#endif // CONTRACTCONTROLLER_H
