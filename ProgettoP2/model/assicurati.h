#ifndef ASSICURATI_H
#define ASSICURATI_H
#include <QObject> // vedere
#include "assvita.h"
#include "rca.h"
#include "assimmobili.h"
#include "vector.h"
#include "deepptr.h" // vedere cosa manca includere

class Assicurati: public QObject
{
    Q_OBJECT
private:
    Vector<DeepPtr<Assicurazione>> Ass;

public:
    Assicurati();
    int getNewId() const;
    Vector<DeepPtr<Assicurazione>>::iterator getBegin();
    Vector<DeepPtr<Assicurazione>>::iterator getEnd();

public slots:

    void addAss(Assicurazione*);
    void removeAss(int);

};

#endif // ASSICURATI_H
