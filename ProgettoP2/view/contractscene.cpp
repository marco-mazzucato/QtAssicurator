#include "contractscene.h"

contractScene::contractScene()
{
    QPushButton freccia;
    connect(freeccia)
}

void contractScene::loadUser(Vector<DeepPtr<Assicurazione>>::iterator it)//lettura dati da iteratore di Ass
{
    //Uso le get per impostare elementi grafici tipo nome = (*it)->getNome
    name = addText((*it)->getName);

    //Uso i cast per vedere il tipo dinamico e imposto i campi opzionali come prima
}
