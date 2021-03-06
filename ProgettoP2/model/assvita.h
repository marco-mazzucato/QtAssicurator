#ifndef ASSVITA_H
#define ASSVITA_H
#include "assicurazione.h"

class AssVita: public Assicurazione
{
private:
    char fascia;
    double importoVersato;
public:
    AssVita(std::string, std::string, std::string, unsigned int, int, QDate, char, double);
    AssVita(const AssVita&);
    ~AssVita() =default;

    const char& getFascia() const;
    const double& getImporto() const;

    virtual AssVita* clone() const override;
    double calcolaPremio() const override;
    double calcolaMassimale() const override;
};

#endif // ASSVITA_H
