#include "assimmobili.h"

AssImmobili::AssImmobili(std::string n, std::string c, std::string codf, unsigned int e, std::string codp, QDate d, double cb, std::string com, unsigned int _mq, bool ed): AssBeni(n, c, codf, e, codp, d, cb), comune(com), mq(_mq), edificio(ed) {}

AssImmobili::AssImmobili(const AssImmobili& a): AssBeni(a.getNome(), a.getCognome(), a.getCodFiscale(), a.getEta(), a.getCodPolizza(), a.getData(), a.getCosto()), comune(a.getComune()), mq(a.getMq()) {}

const std::string& AssImmobili::getComune() const {return comune;}

const unsigned int& AssImmobili::getMq() const {return mq;}

AssImmobili* AssImmobili::clone() const{return new AssImmobili(*this);}

double AssImmobili::calcolaPremio() const {
    if(edificio)
        return (mq*2.5) + (getCosto()/400);
    else
        return (mq*1.5) + (getCosto()/500);
}

double AssImmobili::calcolaMassimale() const {return getCosto()/1.3;}

double AssImmobili::calcolaFranchigia() const {return (getCosto()/100)*2;}
