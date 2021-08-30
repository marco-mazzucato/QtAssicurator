#include "addscene.h"

addScene::addScene(): _nome(new QLineEdit()), _cognome(new QLineEdit()), _codf(new QLineEdit()), _eta(new QLineEdit()), _impVers(new QLineEdit()), _costoB(new QLineEdit()), _cil(new QLineEdit()), _cav(new QLineEdit()), _com(new QLineEdit()), _mq(new QLineEdit()), _fascia(new QComboBox()), _neo(new QCheckBox("Neopatentato")), _edi(new QCheckBox("Edificio")), fascia(new QLabel()), impVers(new QLabel()), costoB(new QLabel()), cil(new QLabel()), cav(new QLabel()), com(new QLabel()), mq(new QLabel()), _data(new QDateTimeEdit(QDate::currentDate()))
{
    setSceneRect(0,0,1280,720);
    setBackgroundBrush(Qt::lightGray);
    QRegExp chr("[a-zA-Z]*");
        QValidator* chrVal = new QRegExpValidator(chr);
    QRegExp cf("^[a-zA-Z]{6,6}\\d{2,2}[a-zA-Z]\\d{2,2}[a-zA-Z]\\d{3,3}[a-zA-Z]$");
            QValidator* cfVal = new QRegExpValidator(cf);
    QRegExp et("{1,2}\\d");
            QValidator* etVal = new QRegExpValidator(et);

    QPushButton* vita = new QPushButton("Nuova assicurazione vita");
    vita->setGeometry(50,50,350,150);
    vita->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(vita);

    QPushButton* rca = new QPushButton("Nuova assicurazione RCA");
    rca->setGeometry(450,50,350,150);
    rca->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(rca);

    QPushButton* imm = new QPushButton("Nuova assicurazione immobili");
    imm->setGeometry(850,50,350,150);
    imm->setStyleSheet("font-size:25px;""background-color:grey;");
    addWidget(imm);

    QLabel* nome = new QLabel();
    nome->setText("Nome:");
    nome->setGeometry(50,230,60,30);
    nome->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(nome);

    _nome->setGeometry(200, 230, 200, 30);
    _nome->setStyleSheet("font-size:17px;");
    _nome->setValidator(chrVal);
    addWidget(_nome);

    QLabel* cogn = new QLabel();
    cogn->setText("Cognome:");
    cogn->setGeometry(50,275,90,30);
    cogn->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(cogn);

    _cognome->setGeometry(200, 275, 200, 30);
    _cognome->setStyleSheet("font-size:17px;");
    _cognome->setValidator(chrVal);
    addWidget(_cognome);

    QLabel* codf = new QLabel();
    codf->setText("Cod. Fiscale:");
    codf->setGeometry(50,320,110,30);
    codf->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(codf);

    _codf->setGeometry(200, 320, 200, 30);
    _codf->setStyleSheet("font-size:17px;");
    _codf->setValidator(cfVal);
    addWidget(_codf);

    QLabel* eta = new QLabel();
    eta->setText("Anni:");
    eta->setGeometry(50,365,50,30);
    eta->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(eta);

    _eta->setGeometry(200, 365, 70, 30);
    _eta->setStyleSheet("font-size:17px;");
    _eta->setValidator(etVal);
    addWidget(_eta);

    QLabel* data = new QLabel();
    data->setText("Data:");
    data->setGeometry(50,410,48,30);
    data->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(data);

    _data->setMinimumDate(QDate::currentDate().addDays(-365));
    _data->setGeometry(200, 410, 200, 30);
    _data->setStyleSheet("font-size:17px;""background-color:lightGray;");
    _data->setDisplayFormat("dd.MM.yyyy");
    addWidget(_data);

    impVers->setText("Importo(euro):");
    impVers->setGeometry(50,455,160,30);
    impVers->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(impVers);
    impVers->setVisible(false);

    _impVers->setGeometry(200, 455, 80, 30);
    _impVers->setStyleSheet("font-size:17px;");
    _impVers->setValidator(chrVal);
    addWidget(_impVers);
    _impVers->setVisible(false);

    fascia->setText("Fascia:");
    fascia->setGeometry(50,500,60,30);
    fascia->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(fascia);
    fascia->setVisible(false);

    _fascia->setGeometry(200, 500, 150, 30);
    _fascia->setStyleSheet("font-size:17px;");
    _fascia->addItem("A");
    _fascia->addItem("B");
    _fascia->addItem("C");
    _fascia->addItem("D");
    addWidget(_fascia);
    _fascia->setVisible(false);

    costoB->setText("Costo del bene:");
    costoB->setGeometry(50,455,190,30);
    costoB->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(costoB);
    costoB->setVisible(false);

    _costoB->setGeometry(200, 455, 80, 30);
    _costoB->setStyleSheet("font-size:17px;");
    _costoB->setValidator(chrVal);
    addWidget(_costoB);
    _costoB->setVisible(false);

    cil->setText("Cilindrata:");
    cil->setGeometry(50,500,150,30);
    cil->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(cil);
    cil->setVisible(false);

    _cil->setGeometry(200, 500, 70, 30);
    _cil->setStyleSheet("font-size:17px;");
    _cil->setValidator(chrVal);
    addWidget(_cil);
    _cil->setVisible(false);

    cav->setText("Cavalli:");
    cav->setGeometry(50,545,140,30);
    cav->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(cav);
    cav->setVisible(false);

    _cav->setGeometry(200, 545, 70, 30);
    _cav->setStyleSheet("font-size:17px;");
    _cav->setValidator(chrVal);
    addWidget(_cav);
    _cav->setVisible(false);

    _neo->setGeometry(50,590,150,30);
    _neo->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(_neo);
    _neo->setVisible(false);

    com->setText("Comune:");
    com->setGeometry(50,500,120,30);
    com->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(com);
    com->setVisible(false);

    _com->setGeometry(200, 500, 200, 30);
    _com->setStyleSheet("font-size:17px;");
    _com->setValidator(chrVal);
    addWidget(_com);
    _com->setVisible(false);

    mq->setText("Metri quadrati:");
    mq->setGeometry(50,545,150,30);
    mq->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(mq);
    mq->setVisible(false);

    _mq->setGeometry(200, 545, 70, 30);
    _mq->setStyleSheet("font-size:17px;");
    _mq->setValidator(chrVal);
    addWidget(_mq);
    _mq->setVisible(false);

    _edi->setGeometry(50, 590, 120, 30);
    _edi->setStyleSheet("font-size:20px;""background-color:lightGray;");
    addWidget(_edi);
    _edi->setVisible(false);

    QPushButton* agg = new QPushButton("Aggiungi");
    agg->setGeometry(width()-100,height()-100,100,50);
    agg->setStyleSheet("font-size:15px;""background-color:grey;");
    addWidget(agg);
    connect(agg, &QPushButton::clicked, this, &addScene::onAggPress);

    connect(vita, &QPushButton::clicked, this, &addScene::showVita);
    connect(rca, &QPushButton::clicked, this, &addScene::showRCA);
    connect(imm, &QPushButton::clicked, this, &addScene::showImm);
}

std::string addScene::getNome() const
{
    return _nome->text().toLocal8Bit().constData();
}

std::string addScene::getCognome() const
{
    return _cognome->text().toLocal8Bit().constData();
}

std::string addScene::getCodf() const
{
    return _codf->text().toLocal8Bit().constData();
}

unsigned int addScene::getEta() const
{
    return _eta->text().toInt();
}

QDate addScene::getData() const
{
    return _data->date();
}

char addScene::getFascia() const
{
    return *(_fascia->currentText().toLocal8Bit().data());
}

unsigned int addScene::getImporto() const
{
    return _impVers->text().toInt();
}

unsigned int addScene::getCosto() const
{
    return _costoB->text().toInt();
}

unsigned int addScene::getCil() const
{
    return _cil->text().toInt();
}

unsigned int addScene::getCav() const
{
    return _cav->text().toInt();
}

bool addScene::isNeo() const
{
    return _neo->text().toLocal8Bit().constData();
}

std::string addScene::getComune() const
{
    return _com->text().toLocal8Bit().constData();
}

unsigned int addScene::getMq() const
{
    return _mq->text().toInt();
}

bool addScene::isEdi() const
{
    return _edi->text().toLocal8Bit().constData();
}

void addScene::showVita()
{
    fascia->setVisible(!fascia->isVisible());
    _fascia->setVisible(!_fascia->isVisible());
    impVers->setVisible(!impVers->isVisible());
    _impVers->setVisible(!_impVers->isVisible());
    costoB->setVisible(false);
    _costoB->setVisible(false);
    cil->setVisible(false);
    _cil->setVisible(false);
    cav->setVisible(false);
    _cav->setVisible(false);
    _neo->setVisible(false);
    com->setVisible(false);
    _com->setVisible(false);
    mq->setVisible(false);
    _mq->setVisible(false);
    _edi->setVisible(false);

}

void addScene::showRCA(){
    costoB->setVisible(true);
    _costoB->setVisible(true);
    cil->setVisible(!cil->isVisible());
    _cil->setVisible(!_cil->isVisible());
    cav->setVisible(!cav->isVisible());
    _cav->setVisible(!_cav->isVisible());
    _neo->setVisible(!_neo->isVisible());
    fascia->setVisible(false);
    _fascia->setVisible(false);
    impVers->setVisible(false);
    _impVers->setVisible(false);
    com->setVisible(false);
    _com->setVisible(false);
    mq->setVisible(false);
    _mq->setVisible(false);
    _edi->setVisible(false);
}

void addScene::showImm(){
    costoB->setVisible(true);
    _costoB->setVisible(true);
    com->setVisible(!com->isVisible());
    _com->setVisible(!_com->isVisible());
    mq->setVisible(!mq->isVisible());
    _mq->setVisible(!_mq->isVisible());
    _edi->setVisible(!_edi->isVisible());
    fascia->setVisible(false);
    _fascia->setVisible(false);
    impVers->setVisible(false);
    _impVers->setVisible(false);
    cil->setVisible(false);
    _cil->setVisible(false);
    cav->setVisible(false);
    _cav->setVisible(false);
    _neo->setVisible(false);
}



