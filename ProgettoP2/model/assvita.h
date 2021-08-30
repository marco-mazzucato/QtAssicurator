#ifndef ASSVITA_H
#define ASSVITA_H
#include "assicurazione.h"

class AssVita: public Assicurazione // assicurazione di 10 anni il premio ogni anno
{
private:
    char fascia; // A B C D dal piu facoltoso
    double importoVersato;
public:
    AssVita(std::string, std::string, std::string, unsigned int, std::string, QDate, char, double);
    AssVita(const AssVita&);
    ~AssVita() =default;

    const char& getFascia() const;
    const double& getImporto() const;

    virtual AssVita* clone() const override;
    double calcolaPremio() const override;
    double calcolaMassimale() const override;
};

#endif // ASSVITA_H
