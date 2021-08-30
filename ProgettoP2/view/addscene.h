#ifndef ADDSCENE_H
#define ADDSCENE_H
#include <QGraphicsScene>
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>
#include <QRegExpValidator>
#include <QValidator>
#include <QRegExp>
#include <QDate>
#include <qdatetimeedit.h>
#include <qcombobox.h>
#include <qcheckbox.h>

class addScene : public QGraphicsScene
{
    Q_OBJECT
private:
    QLineEdit *_nome, *_cognome, *_codf, *_eta,
                    *_impVers, *_costoB, *_cil,
                    *_cav, *_com, *_mq;
    QComboBox *_fascia;
    QCheckBox *_neo, *_edi;
    QLabel *fascia, *impVers, *costoB, *cil, *cav, *com, *mq;
    QDateTimeEdit *_data;
public:
    addScene();
    std::string getNome() const;
    std::string getCognome() const;
    std::string getCodf() const;
    unsigned int getEta() const;
    QDate getData() const;
    char getFascia() const;
    unsigned int getImporto() const;
    unsigned int getCosto() const;
    unsigned int getCil() const;
    unsigned int getCav() const;
    bool isNeo() const;
    std::string getComune() const;
    unsigned int getMq() const;
    bool isEdi() const;

signals:
    void onAggPress();

public slots:
    void showVita();
    void showRCA();
    void showImm();
};

#endif // ADDSCENE_H