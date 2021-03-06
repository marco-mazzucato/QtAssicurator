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
    int count;
public:
    contractController(Assicurati*);
    contractScene* getScene() const;
public slots:
    void deleteMember();
    void nextMember();
    void previousMember();
    void updateModel();
};

#endif // CONTRACTCONTROLLER_H
