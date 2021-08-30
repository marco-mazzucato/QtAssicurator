#include "addcontroller.h"

addController::addController(): model(new Assicurati()), view(new addScene())
{
    connect(view, &addScene::onAggPress, this, &addController::buildAss);
}

void addController::buildAss()
{
    Assicurazione* a;
    switch (view->pressed()) {
    case 'n':
        break;
    case 'v':
        a = new AssVita( view->getNome(), view->getCognome(), view->getCodf(), view->getEta(), model->getNewId(), view->getData(), view->getFascia(), view->getImporto());
        model->addAss(a);
        break;
    case 'i':
        a = new AssImmobili( view->getNome(), view->getCognome(), view->getCodf(), view->getEta(), model->getNewId(), view->getData(), view->getCosto(), view->getComune(), view->getMq(), view->isEdi());
        model->addAss(a);
        break;
    case 'a':
        a = new RCA( view->getNome(), view->getCognome(), view->getCodf(), view->getEta(), model->getNewId(), view->getData(), view->getCosto(), view->getCil(), view->getCav(), view->isNeo());
        model->addAss(a);
        break;
    }
}
