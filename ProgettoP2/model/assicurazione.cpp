#include "assicurazione.h"

Assicurazione::Assicurazione(std::string n, std::string c, std::string codf, unsigned int e, std::string codp, QDate d): nome(n), cognome(c), codFiscale(codf), eta(e), codPolizza(codp), inizioContratto(d){}

Assicurazione::Assicurazione(const Assicurazione& a): nome(a.nome), cognome(a.cognome), codFiscale(a.codFiscale), eta(a.eta), codPolizza(a.codPolizza), inizioContratto(a.inizioContratto){}

const std::string& Assicurazione::getNome() const {return nome;}

const std::string& Assicurazione::getCognome() const {return cognome;}

const std::string& Assicurazione::getCodFiscale() const {return codFiscale;}

const unsigned int& Assicurazione::getEta() const {return eta;}

const std::string& Assicurazione::getCodPolizza() const {return codPolizza;}

const QDate& Assicurazione::getData() const {return inizioContratto;}

