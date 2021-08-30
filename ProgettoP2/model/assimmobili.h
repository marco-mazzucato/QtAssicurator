#ifndef ASSIMMOBILI_H
#define ASSIMMOBILI_H
#include "assbeni.h"

class AssImmobili: public AssBeni
{
private:
    std::string comune;
    unsigned int mq;
    bool edificio; // true se edificio altrimenti terreno
public:
    AssImmobili(std::string, std::string, std::string, unsigned int, std::string, QDate, double, std::string, unsigned int, bool);
    AssImmobili(const AssImmobili&);
    ~AssImmobili() = default;

    const std::string& getComune() const;
    const unsigned int& getMq() const;

    virtual AssImmobili* clone() const override;
    double calcolaPremio() const override;
    double calcolaMassimale() const override;
    double calcolaFranchigia() const override;
};

#endif // ASSIMMOBILI_H
