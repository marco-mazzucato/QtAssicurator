#include "addcontroller.h"

addController::addController(Assicurati* a): model(a), view(new addScene())
{
    connect(view, &addScene::onAggPress, this, &addController::checkParams);
    connect(view, &addScene::onHomePress, this, [=](){emit changeScene('m');});
}

void addController::checkParams()
{
    bool check=true;
    if(view->getNome()=="" || view->getCognome()=="" || view->getCodf()=="" || view->getCodf().length()!=16 ||
            view->getEta()==0)
        check=false;
    switch (view->pressed()) {
    case 'n':
        check=false;
        break;
    case 'a':
        if(view->getCav()==0 || view->getCil()==0 || view->getCosto()==0)
            check=false;
        break;
    case 'v':
        if(view->getImporto()==0)
            check=false;
        break;
    case 'i':
        if(view->getCosto()==0 || view->getComune()=="" || view->getMq()==0)
            check=false;
        break;
    }
    if(check)
        buildAss();
    else
        view->showError();
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
    view->showSuccess();
}

addScene *addController::getScene() const{return view;}
