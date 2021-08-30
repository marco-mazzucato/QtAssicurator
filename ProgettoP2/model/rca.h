#ifndef RCA_H
#define RCA_H
#include "assbeni.h"

class RCA: public AssBeni
{
private:
    unsigned int cilindrata;
    unsigned int cavalli;
    bool neopatentato;
public:
    RCA(std::string, std::string, std::string, unsigned int, std::string, QDate, double, unsigned int, unsigned int, bool);
    RCA(const RCA&);
    ~RCA() = default;

    const unsigned int& getCilindrata() const;
    const unsigned int& getCavalli() const;
    const bool& getNeoPatentato() const;

    virtual RCA* clone() const override;
    double calcolaPremio() const override;
    double calcolaMassimale() const override;
    double calcolaFranchigia() const override;
};

#endif // RCA_H
