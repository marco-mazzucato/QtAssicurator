#include "contractcontroller.h"

contractController::contractController(Assicurati *a):model(a), view(new contractScene()), it(model->getBegin()) {
    view->loadUser(it);
    connect(view, &contractScene::onNextPress, this, &contractController::nextMember);
    connect(view, &contractScene::onPreviousPress, this, &contractController::previousMember);
    connect(view, &contractScene::onDeletePress, this, &contractController::deleteMember);
    connect(view, &contractScene::onHomePress, this, [=](){emit changeScene('m');});
}

void contractController::deleteMember()
{
    int codDaEliminare = (*it)->getCodPolizza();
    ++it;
    view->loadUser(it);
    int n=0;
    for(auto it=model->getBegin(); it!=model->getEnd() && (*it)->getCodPolizza()!=codDaEliminare; it++)
        n++;
    model->removeAss(n);
}

void contractController::nextMember()
{
    ++it;
    view->loadUser(it);
}

void contractController::previousMember()
{
    --it;
    view->loadUser(it);
}

contractScene *contractController::getScene() const
{
    return view;
}
