#include "contractcontroller.h"
#include <QDebug>

contractController::contractController(Assicurati *a):model(a), view(new contractScene()), it(model->getBegin()), count(1) {
    view->loadUser(it, count, model->getSize());
    connect(view, &contractScene::onNextPress, this, &contractController::nextMember);
    connect(view, &contractScene::onPreviousPress, this, &contractController::previousMember);
    connect(view, &contractScene::onDeletePress, this, &contractController::deleteMember);
    connect(view, &contractScene::onHomePress, this, [=](){emit changeScene('m'); it=model->getBegin(); view->loadUser(it, count, model->getSize()); count=1;});
}

void contractController::deleteMember()
{
    int max(model->getSize());
    if(max){
        if(max-count){ //max-count>0
            int elimina = (*it)->getCodPolizza();
            ++it;
            int riprendi = (*it)->getCodPolizza();
            int i=0;
            for(auto dit=model->getBegin(); (*dit)->getCodPolizza()!=elimina;++dit)
                i++;
            model->removeAss(i);
            it=model->getBegin();
            while((*it)->getCodPolizza()!=riprendi)
                ++it;
            view->loadUser(it,count,model->getSize());
        }
        else{ //max-count=0
            int elimina = (*it)->getCodPolizza();
            if(max!=1)
            {
                --it;
                int riprendi = (*it)->getCodPolizza();
                int i=0;
                for(auto dit=model->getBegin(); (*dit)->getCodPolizza()!=elimina;++dit)
                    i++;
                model->removeAss(i);
                it=model->getBegin();
                while ((*it)->getCodPolizza()!=riprendi)
                    ++it;
                view->loadUser(it, count, model->getSize());
            }
            else{
                model->removeAss(0);
                view->loadEmptyUser();
            }
        }
    }
}

void contractController::nextMember()
{
    if(model->getSize())
    {
        ++it;
        ++count;
        if(it==model->getEnd()){
            --it;
            --count;
        }
        view->loadUser(it, count, model->getSize());
    }
}

void contractController::previousMember()
{
    if(it!=model->getBegin()){
        --it;
        --count;
    }
    if(model->getSize())
        view->loadUser(it, count, model->getSize());
}

contractScene *contractController::getScene() const
{
    return view;
}
