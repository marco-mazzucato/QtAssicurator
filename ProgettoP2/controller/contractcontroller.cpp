#include "contractcontroller.h"

contractController::contractController(Assicurati *a):model(a), view(new contractScene()), it(model->getBegin()) {
    view->loadUser(it);
    connect(view, frecciaavanti, this, prossimo);
}

prossimo(){
    ++it;
    loadUser(it);
}

elimina(){
    idDaElminare = it->getID;
    ++it();
    loaduser(it);
    int n=0;
    for(auto it=model->getBegin; it!=model->getEnd() && it->getId!=idDaEliminare; it++)
        n++;
    model->removeAss(n); //elimina elemento chiama erase(i) su Ass
}

contractScene *contractController::getScene() const
{
    return view;
}

void contractController::deleteMember()
{

}
