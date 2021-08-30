#ifndef ASSICURATI_H
#define ASSICURATI_H
#include "assvita.h"
#include "rca.h"
#include "assimmobili.h"
#include "vector.h"
#include "deepptr.h" // vedere cosa manca includere

class Assicurati
{
private:
    unsigned int currentAss;
    Vector<DeepPtr<Assicurazione>> Ass;

public:
    Assicurati();

    void addAss(Assicurazione*);
    void removeAss(std::string);//bohhh
    Assicurazione& cercaPerNomeCognome(std::string, std::string);
    Assicurazione& cercaPerCodice(std::string);


};

#endif // ASSICURATI_H
