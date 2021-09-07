#include "mainscene.h"

mainScene::mainScene()
{
    setSceneRect(0,0,1280,720);
    setBackgroundBrush(QColor(188, 210, 238));
    QFont* s=new QFont();
    s->setPointSize(70);

    QGraphicsTextItem* title = addText("Benvenuto in QtAssicurator");
    title->setPos(70, 170);
    title->setFont(*s);
    title->setTextWidth(15*width()/16);
    title->setDefaultTextColor(Qt::black);

    QPushButton* add = new QPushButton("Aggiungi assicurazione");
    add->setGeometry(width()/2-500,height()/2+50,400,120);
    add->setStyleSheet("font-size:25px;""background-color:#6E7B8B;");
    addWidget(add);
    connect(add,&QPushButton::clicked,this, &mainScene::onAddPress);

    QPushButton* search = new QPushButton("Ricerca assicurazioni");
    search->setGeometry(width()/2,height()/2+50,400,120);
    search->setStyleSheet("font-size:25px;""background-color:#6E7B8B;");
    addWidget(search);
    connect(search,&QPushButton::clicked,this, &mainScene::onSearchPress);
}
