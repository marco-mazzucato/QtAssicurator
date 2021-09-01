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

    QGraphicsTextItem *title2 = addText("Codice polizza");
    title2->setPos(500,30);
    title2->setFont(*s);
    addItem(title2);

    QGraphicsTextItem *lnome= new QGraphicsTextItem("Nome:");
    lnome->setPos(30,100);
    lnome->setFont(*l);
    addItem(lnome);

    QGraphicsTextItem *nome = addText(QString::fromStdString((*it)->getNome())+" "+QString::fromStdString((*it)->getCognome()));
    nome->setPos(170,100);
    nome->setFont(*t);
    addItem(nome);

    QGraphicsTextItem *eta = addText(QString::number((*it)->getEta()));
    eta->setPos(400,100);
    eta->setFont(*t);
    addItem(eta);


    connect(this, &contractScene::onNextPress, this, [=](){removeItem(nome);removeItem(eta);removeItem(nome);removeItem(nome);});//da sistemare
    connect(this, &contractScene::onPreviousPress, this, [=](){removeItem(nome);removeItem(eta);removeItem(nome);removeItem(nome);});
    connect(this, &contractScene::onDeletePress, this, [=](){removeItem(nome);removeItem(eta);removeItem(nome);removeItem(nome);});
    connect(this, &contractScene::onHomePress, this, [=](){removeItem(nome);removeItem(eta);removeItem(nome);removeItem(nome);});
    //Uso i cast per vedere il tipo dinamico e imposto i campi opzionali come prima
}













