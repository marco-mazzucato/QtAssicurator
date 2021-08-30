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
        if()
        a = new AssVita(view->getNome(), view->getCognome());
        break;
    case 'i':
        break;
    case 'a':
        break;
    }
    model->addAss(a);
}
