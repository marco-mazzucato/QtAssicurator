#include "assicurati.h"

Assicurati::Assicurati(): Ass() {

    Ass.push_back(new RCA("Marco", "Mazzucato", "MZZMRC99R04F382E", 21, 1, QDate(2020,10,4), 17000, 1200, 85, false));
    Ass.push_back(new AssImmobili("Luca", "Fantini", "FNTLCU80D14L781S", 45, 2, QDate(2020,8,21), 200000, "Monselice", 120, true));
    Ass.push_back(new AssVita("Giada", "Dante", "DNTGDI73M46A757V", 32, 3, QDate(2019,1,15), 'C', 25000));
    Ass.push_back(new AssVita("Domenico", "Guzzo", "GZZDNC73E11F382N", 35, 4, QDate(2019,1,15), 'A', 13000));
    Ass.push_back(new AssImmobili("Lucia", "Vegro", "VGRLCU93R60C964H", 28, 5, QDate(2019,1,15), 150000, "Conselve", 200, true));
    Ass.push_back(new RCA("Beatrice", "Cecconello", "CCCBRC89L49G693N", 51, 6, QDate(2019,1,15), 21000, 2000, 135, false));
    Ass.push_back(new RCA("Nicola", "Franzolin", "FRNNCL93S18A075A", 25, 7, QDate(2019,1,15), 12000, 1000, 80, false));
    Ass.push_back(new AssImmobili("Vittorio", "Zanellato", "ZNLVTR78B16L414H", 23, 8, QDate(2019,1,15), 80000, "Padova", 500, false));
    Ass.push_back(new RCA("Simone", "Crivellari", "CRVSMN78S16A075Z", 42, 9, QDate(2019,1,15), 28000, 1800, 120, true));
    Ass.push_back(new AssVita("Benedetta", "Bottaro", "BTTBDT89P69C964A", 48, 10, QDate(2019,1,15), 'D', 18000));
}

int Assicurati::getNewId() const
{
    int maxid=0;
    for(auto cit=Ass.begin();cit!=Ass.end();cit++)
        if((*cit)->getCodPolizza()>maxid)
            maxid=(*cit)->getCodPolizza();
    return maxid+1;
}

Vector<DeepPtr<Assicurazione>>::iterator Assicurati::getBegin()
{
    return Ass.begin();
}

Vector<DeepPtr<Assicurazione>>::iterator Assicurati::getEnd()
{
    return Ass.end();
}

int Assicurati::getSize() const{
    return Ass.size();
}

void Assicurati::addAss(Assicurazione *a) {Ass.push_back(a);}

void Assicurati::removeAss(int i) {Ass.erase(i);}
