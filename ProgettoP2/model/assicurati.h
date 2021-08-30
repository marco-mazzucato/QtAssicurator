#ifndef ASSICURATI_H
#define ASSICURATI_H
#include <QObject> // vedere
#include "assvita.h"
#include "rca.h"
#include "assimmobili.h"
#include "vector.h"
#include "deepptr.h" // vedere cosa manca includere

class Assicurati
{
    Q_OBJECT
private:
    unsigned int currentAss;
    Vector<DeepPtr<Assicurazione>> Ass;

public:
    Assicurati();
    Assicurazione& cercaPerNomeCognome(std::string, std::string);
    Assicurazione& cercaPerCodice(std::string);
    int getNewId() const;

public slots:

    void addAss(Assicurazione*);
    void removeAss(std::string);//bohhh

};

#endif // ASSICURATI_H
