#include "maincontroller.h"

mainController::mainController(): view(new mainScene){
    connect(view, &mainScene::onAddPress, this, [=](){emit changeScene('a');});
    connect(view, &mainScene::onSearchPress, this, [=](){emit changeScene('v');});
}

mainScene* mainController::getScene() const{return view;}
