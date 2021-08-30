#include "assbeni.h"

AssBeni::AssBeni(std::string n, std::string c, std::string codf, unsigned int e, int codp, QDate d, double cb): Assicurazione(n, c, codf, e, codp, d), costoBene(cb){}

AssBeni::AssBeni(const AssBeni& a): Assicurazione(a.getNome(), a.getCognome(), a.getCodFiscale(), a.getEta(), a.getCodPolizza(), a.getData()), costoBene(a.getCosto()){}

const double& AssBeni::getCosto() const {return costoBene;}


