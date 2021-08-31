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
    home->setGeometry(50,570,200,100);
    home->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(home);

    connect(avanti, &QPushButton::clicked, this, &contractScene::onNextPress);
    connect(indietro, &QPushButton::clicked, this, &contractScene::onPreviousPress);
    connect(elimina, &QPushButton::clicked, this, &contractScene::onDeletePress);
    connect(home, &QPushButton::clicked, this, &contractScene::onHomePress);

}

void contractScene::loadUser(Vector<DeepPtr<Assicurazione>>::iterator it)//lettura dati da iteratore di Ass
{
    QFont* s=new QFont();
    s->setPointSize(20);
    QFont* t=new QFont();
    t->setPointSize(15);

    QGraphicsTextItem *title1 = addText("Dati assicurato");
    title1->setPos(50,30);
    title1->setFont(*s);
    addItem(title1);

    QLabel *lnome= new QLabel("Nome:");
    lnome->setGeometry(50,100,100,30);
    lnome->setStyleSheet("font-size: 15px;"
                         "background-color:rgba(255,255,255,0)");
    addWidget(lnome);

    QGraphicsTextItem *nome = addText(QString::fromStdString((*it)->getNome()));
    nome->setPos(170,100);
    addItem(nome);

    QGraphicsTextItem *cognome = addText(QString::fromStdString((*it)->getCognome()));
    cognome->setPos(200,100);
    addItem(cognome);

    QGraphicsTextItem *eta = addText(QString::number((*it)->getEta()));
    eta->setPos(280,100);
    addItem(eta);

    connect(this, &contractScene::onNextPress, lnome, [=](){delete lnome;});// tutto qua i widget
    connect(this, &contractScene::onNextPress, this, [=](){removeItem(nome);removeItem(nome);removeItem(nome);removeItem(nome);removeItem(nome);});//da sistemare

    //Uso i cast per vedere il tipo dinamico e imposto i campi opzionali come prima
}













