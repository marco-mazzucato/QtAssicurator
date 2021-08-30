#ifndef ASSICURAZIONE_H
#define ASSICURAZIONE_H
#include <QDate>

class Assicurazione
{
private:
    std::string nome, cognome, codFiscale;
    unsigned int eta;
    std::string codPolizza;
    QDate inizioContratto;
public:
    Assicurazione(std::string, std::string, std::string, unsigned int, std::string, QDate);
    Assicurazione(const Assicurazione&);
    virtual ~Assicurazione() = default;

    const std::string& getNome() const;
    const std::string& getCognome() const;
    const std::string& getCodFiscale() const;
    const unsigned int& getEta() const;
    const std::string& getCodPolizza() const;
    const QDate& getData() const;

    virtual Assicurazione* clone() const =0;
    virtual double calcolaPremio() const = 0;
    virtual double calcolaMassimale() const = 0;
};

#endif // ASSICURAZIONE_H
