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

    QGraphicsTextItem *title3 = addText("Informazioni assicurazione");
    title3->setPos(30,265);
    title3->setFont(*s);
    addItem(title3);

    QGraphicsTextItem *lpremio = addText("Premio da pagare:");
    lpremio->setPos(30,320);
    lpremio->setFont(*l);
    addItem(lpremio);

    QGraphicsTextItem *premio = addText(QString::number((*it)->calcolaPremio())+" €");
    premio->setPos(170,315);
    premio->setFont(*t);
    addItem(premio);

    QGraphicsTextItem *lmassimale = addText("Massimale pagato");
    lmassimale->setPos(30,360);
    lmassimale->setFont(*l);
    addItem(lmassimale);

    QGraphicsTextItem *massimale = addText(QString::number((*it)->calcolaMassimale())+" €");
    massimale->setPos(170,355);
    massimale->setFont(*t);
    addItem(massimale);

    QGraphicsTextItem *indice = addText(QString::number(c)+"/"+QString::number(max));
    indice->setPos(1100,30);
    indice->setFont(*t);
    addItem(indice);





   /* AssVita* a = dynamic_cast<AssVita*>(it->get());
    if(a){
        QGraphicsTextItem *lpremio = addText("Premio da pagare:");
        lpremio->setPos(30,305);
        lpremio->setFont(*l);
        addItem(lpremio);

        QGraphicsTextItem *premio = addText(QString::number(a->calcolaPremio()));
        premio->setPos(30,350);
        premio->setFont(*l);
        addItem(premio);

        connect(this, &contractScene::onHomePress, this, [=](){removeItem(lpremio);removeItem(premio);});
    }*/

    connect(this, &contractScene::onNextPress, this, [=](){removeItem(title1);removeItem(title2);removeItem(title3);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});
    connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(title1);removeItem(title2);removeItem(title3);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});
    connect(this, &contractScene::onDeletePress, this, [=](){removeItem(title1);removeItem(title2);removeItem(title3);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});
    connect(this, &contractScene::onHomePress, this, [=](){removeItem(title1);removeItem(title2);removeItem(title3);removeItem(codp);removeItem(lnome);removeItem(nome);removeItem(leta);removeItem(eta);removeItem(lcodf);removeItem(codf);removeItem(ldata);removeItem(data);removeItem(lpremio);removeItem(premio);removeItem(lmassimale);removeItem(massimale);removeItem(indice);});

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













