#include "contractscene.h"

contractScene::contractScene()
{
    setSceneRect(0,0,1280,720);
    setBackgroundBrush(Qt::lightGray);

    QPushButton* avanti = new QPushButton("Avanti");
    avanti->setGeometry(1000,570, 200,90);
    avanti->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(avanti);

    QPushButton* indietro = new QPushButton("Indietro");
    indietro->setGeometry(790,570, 200,90);
    indietro->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(indietro);

    QPushButton* elimina = new QPushButton("Rimuovi assicurazione");
    elimina->setGeometry(790,430,410,100);
    elimina->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(elimina);

    QPushButton* home = new QPushButton("Home");
    home->setGeometry(30,570,200,100);
    home->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(home);

    connect(avanti, &QPushButton::clicked, this, &contractScene::onNextPress);
    connect(indietro, &QPushButton::clicked, this, &contractScene::onPreviousPress);
    connect(elimina, &QPushButton::clicked, this, &contractScene::onDeletePress);
    connect(home, &QPushButton::clicked, this, &contractScene::onHomePress);

}

void contractScene::loadUser(Vector<DeepPtr<Assicurazione>>::iterator it, int c, int max)
{
    QFont* s=new QFont();
    s->setPointSize(20);
    QFont* t=new QFont();
    t->setPointSize(15);
    QFont* l=new QFont();
    l->setPointSize(12);

    QGraphicsTextItem *title1 = addText("Dati assicurato");
    title1->setPos(30,30);
    title1->setFont(*s);
    addItem(title1);

    QGraphicsTextItem *title2 = addText("Codice polizza:");
    title2->setPos(500,30);
    title2->setFont(*s);
    addItem(title2);

    QGraphicsTextItem *codp = addText(QString::number((*it)->getCodPolizza()));
    codp->setPos(685,30);
    codp->setFont(*s);
    addItem(codp);

    QGraphicsTextItem *indice = addText(QString::number(c)+"/"+QString::number(max));
    indice->setPos(1150,30);
    indice->setFont(*s);
    addItem(indice);

    QGraphicsTextItem *lnome= new QGraphicsTextItem("Nome:");
    lnome->setPos(30,85);
    lnome->setFont(*l);
    addItem(lnome);

    QGraphicsTextItem *nome = addText(QString::fromStdString((*it)->getNome())+" "+QString::fromStdString((*it)->getCognome()));
    nome->setPos(170,80);
    nome->setFont(*t);
    addItem(nome);

    QGraphicsTextItem *lcodf = addText("Codice fiscale:");
    lcodf->setPos(30,125);
    lcodf->setFont(*l);
    addItem(lcodf);

    QGraphicsTextItem *codf = addText(QString::fromStdString((*it)->getCodFiscale()));
    codf->setPos(170,120);
    codf->setFont(*t);
    addItem(codf);

    QGraphicsTextItem *leta = addText("Anni:");
    leta->setPos(30,165);
    leta->setFont(*l);
    addItem(leta);

    QGraphicsTextItem *eta = addText(QString::number((*it)->getEta()));
    eta->setPos(170,160);
    eta->setFont(*t);
    addItem(eta);

    QGraphicsTextItem *ldata = addText("Inizio contratto:");
    ldata->setPos(30,205);
    ldata->setFont(*l);
    addItem(ldata);

    QGraphicsTextItem *data = addText((*it)->getData().toString());
    data->setPos(170,200);
    data->setFont(*t);
    addItem(data);

    AssVita* v = dynamic_cast<AssVita*>(it->get());
    if(v){
        QGraphicsTextItem *titlev = addText("Informazioni assicurazione vita");
        titlev->setPos(30,265);
        titlev->setFont(*s);
        addItem(titlev);

        QGraphicsTextItem *lfascia = addText("Fascia appartenenza:");
        lfascia->setPos(30,320);
        lfascia->setFont(*l);
        addItem(lfascia);

        QGraphicsTextItem *fascia = addText(QChar(v->getFascia()));
        fascia->setPos(190,315);
        fascia->setFont(*t);
        addItem(fascia);

        QGraphicsTextItem *limporto = addText("Importo versato:");
        limporto->setPos(30,360);
        limporto->setFont(*l);
        addItem(limporto);

        QGraphicsTextItem *importo = addText(QString::number(v->getImporto()));
        importo->setPos(190,355);
        importo->setFont(*t);
        addItem(importo);

        connect(this, &contractScene::onNextPress, this, [=](){removeItem(titlev);removeItem(lfascia);removeItem(fascia);removeItem(limporto);removeItem(importo);});
        connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(titlev);removeItem(lfascia);removeItem(fascia);removeItem(limporto);removeItem(importo);});
        connect(this, &contractScene::onDeletePress, this, [=](){removeItem(titlev);removeItem(lfascia);removeItem(fascia);removeItem(limporto);removeItem(importo);});
        connect(this, &contractScene::onHomePress, this, [=](){removeItem(titlev);removeItem(lfascia);removeItem(fascia);removeItem(limporto);removeItem(importo);});
    }

   RCA* r = dynamic_cast<RCA*>(it->get());
    if(r){
        QGraphicsTextItem *titler = addText("Informazioni assicurazione RCA");
        titler->setPos(30,265);
        titler->setFont(*s);
        addItem(titler);

        QGraphicsTextItem *lcilindrata = addText("Cilindrata veicolo:");
        lcilindrata->setPos(30,320);
        lcilindrata->setFont(*l);
        addItem(lcilindrata);

        QGraphicsTextItem *cilindrata = addText(QString::number(r->getCilindrata()));
        cilindrata->setPos(170,315);
        cilindrata->setFont(*t);
        addItem(cilindrata);

        QGraphicsTextItem *lcavalli = addText("Cavalli veicolo:");
        lcavalli->setPos(30,360);
        lcavalli->setFont(*l);
        addItem(lcavalli);

        QGraphicsTextItem *cavalli = addText(QString::number(r->getCavalli()));
        cavalli->setPos(170,355);
        cavalli->setFont(*t);
        addItem(cavalli);

        connect(this, &contractScene::onNextPress, this, [=](){removeItem(titler);removeItem(lcilindrata);removeItem(cilindrata);removeItem(lcavalli);removeItem(cavalli);});
        connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(titler);removeItem(lcilindrata);removeItem(cilindrata);removeItem(lcavalli);removeItem(cavalli);});
        connect(this, &contractScene::onDeletePress, this, [=](){removeItem(titler);removeItem(lcilindrata);removeItem(cilindrata);removeItem(lcavalli);removeItem(cavalli);});
        connect(this, &contractScene::onHomePress, this, [=](){removeItem(titler);removeItem(lcilindrata);removeItem(cilindrata);removeItem(lcavalli);removeItem(cavalli);});
    }

    AssImmobili* i = dynamic_cast<AssImmobili*>(it->get());
     if(i){
         QGraphicsTextItem *titlei = addText("Informazioni assicurazione immobili");
         titlei->setPos(30,265);
         titlei->setFont(*s);
         addItem(titlei);

         QGraphicsTextItem *lcomune = addText("Comune immobile:");
         lcomune->setPos(30,320);
         lcomune->setFont(*l);
         addItem(lcomune);

         QGraphicsTextItem *comune = addText(QString::fromStdString(i->getComune()));
         comune->setPos(170,315);
         comune->setFont(*t);
         addItem(comune);

         QGraphicsTextItem *lmetri = addText("Metri quadrati:");
         lmetri->setPos(30,360);
         lmetri->setFont(*l);
         addItem(lmetri);

         QGraphicsTextItem *metri = addText(QString::number(i->getMq()));
         metri->setPos(170,355);
         metri->setFont(*t);
         addItem(metri);

         connect(this, &contractScene::onNextPress, this, [=](){removeItem(titlei);removeItem(lcomune);removeItem(comune);removeItem(lmetri);removeItem(metri);});
         connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(titlei);removeItem(lcomune);removeItem(comune);removeItem(lmetri);removeItem(metri);});
         connect(this, &contractScene::onDeletePress, this, [=](){removeItem(titlei);removeItem(lcomune);removeItem(comune);removeItem(lmetri);removeItem(metri);});
         connect(this, &contractScene::onHomePress, this, [=](){removeItem(titlei);removeItem(lcomune);removeItem(comune);removeItem(lmetri);removeItem(metri);});
     }

    QGraphicsTextItem *lpremio = addText("Premio da pagare:");
    lpremio->setPos(500,80);
    lpremio->setFont(*s);
    addItem(lpremio);

    QGraphicsTextItem *premio = addText(QString::number((*it)->calcolaPremio())+" €");
    premio->setPos(750,80);
    premio->setFont(*s);
    addItem(premio);

    QGraphicsTextItem *lmassimale = addText("Massimale pagato:");
    lmassimale->setPos(500,130);
    lmassimale->setFont(*s);
    addItem(lmassimale);

    QGraphicsTextItem *massimale = addText(QString::number((*it)->calcolaMassimale())+" €");
    massimale->setPos(750,130);
    massimale->setFont(*s);
    addItem(massimale);

    AssBeni* a = dynamic_cast<AssBeni*>(it->get());
    if(a){
        QGraphicsTextItem *lfranchigia = addText("Franchigia:");
        lfranchigia->setPos(500,180);
        lfranchigia->setFont(*s);
        addItem(lfranchigia);

        QGraphicsTextItem *franchigia = addText(QString::number(a->calcolaFranchigia()));
        franchigia->setPos(650,180);
        franchigia->setFont(*s);
        addItem(franchigia);

        connect(this, &contractScene::onNextPress, this, [=](){removeItem(lfranchigia);removeItem(franchigia);});
        connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(lfranchigia);removeItem(franchigia);});
        connect(this, &contractScene::onDeletePress, this, [=](){removeItem(lfranchigia);removeItem(franchigia);});
        connect(this, &contractScene::onHomePress, this, [=](){removeItem(lfranchigia);removeItem(franchigia);});
    }




    connect(this, &contractScene::onNextPress, this, [=](){removeItem(title1);removeItem(title2);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});
    connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(title1);removeItem(title2);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});
    connect(this, &contractScene::onDeletePress, this, [=](){removeItem(title1);removeItem(title2);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});
    connect(this, &contractScene::onHomePress, this, [=](){removeItem(title1);removeItem(title2);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});

}

void contractScene::loadEmptyUser()
{
    QFont* t=new QFont();
    t->setPointSize(30);

    QGraphicsTextItem *indice = addText("Non ci sono utenti salvati nel database");
    indice->setPos(200,200);
    indice->setFont(*t);
    addItem(indice);
}













