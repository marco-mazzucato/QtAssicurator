#include "assvita.h"

AssVita::AssVita(std::string n, std::string c, std::string codf, unsigned int e, std::string codp, QDate d, char f, double i): Assicurazione(n, c, codf, e, codp, d), fascia(f), importoVersato(i){}

AssVita::AssVita(const AssVita& a): Assicurazione(a.getNome(), a.getCognome(), a.getCodFiscale(), a.getEta(), a.getCodPolizza(), a.getData()), fascia(a.getFascia()), importoVersato(a.getImporto()) {}

const char& AssVita::getFascia() const {return fascia;}

const double& AssVita::getImporto() const {return importoVersato;}

AssVita* AssVita::clone() const{return new AssVita(*this);}

double AssVita::calcolaPremio() const {
    if(getEta()>40){
    switch(fascia){
        case 'A' : return (importoVersato/10) +500;
        break;
        case 'B' : return (importoVersato/10) +400;
        break;
        case 'C' : return (importoVersato/10) +350;
        break;
        case 'D' : return (importoVersato/10) +300;
        break;
    }
    }
    else{
        switch(fascia){
            case 'A' : return (importoVersato/10) +300;
            break;
            case 'B' : return (importoVersato/10) +250;
            break;
            case 'C' : return (importoVersato/10) +200;
            break;
            case 'D' : return (importoVersato/10) +150;
            break;
    }
    }
}

double AssVita::calcolaMassimale() const {
    if(getEta()<40)
        return importoVersato*1.5;
    else
        return importoVersato*1.3;
}

