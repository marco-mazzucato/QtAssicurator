#include "rca.h"

RCA::RCA(std::string n, std::string c, std::string codf, unsigned int e, std::string codp, QDate d, double cb, unsigned int cil, unsigned int cav, bool neo): AssBeni(n, c, codf, e, codp, d, cb), cilindrata(cil), cavalli(cav), neopatentato(neo) {}

RCA::RCA(const RCA& a): AssBeni(a.getNome(), a.getCognome(), a.getCodFiscale(), a.getEta(), a.getCodPolizza(), a.getData(), a.getCosto()), cilindrata(a.getCilindrata()), cavalli(a.getCavalli()), neopatentato(a.getNeoPatentato()) {}

const unsigned int& RCA::getCilindrata() const {return cilindrata;}

const unsigned int& RCA::getCavalli() const {return cavalli;}

const bool& RCA::getNeoPatentato() const {return neopatentato;}

RCA* RCA::clone() const{return new RCA(*this);}

double RCA::calcolaPremio() const {return (cilindrata/100) + (cavalli*(neopatentato ? 2 : 1.6)); }

double RCA::calcolaMassimale() const {return getCosto()*12;}

double RCA::calcolaFranchigia() const {return (getCosto()/100)*5;}

