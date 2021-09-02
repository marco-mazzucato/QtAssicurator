#ifndef ASSBENI_H
#define ASSBENI_H
#include "assicurazione.h"

class AssBeni: public Assicurazione
{
private:
    double costoBene;
public:
    AssBeni(std::string, std::string, std::string, unsigned int, int, QDate, double);
    AssBeni(const AssBeni&);
    ~AssBeni() = default;

    const double& getCosto() const;

    virtual double calcolaFranchigia() const = 0;
};

#endif // ASSBENI_H
