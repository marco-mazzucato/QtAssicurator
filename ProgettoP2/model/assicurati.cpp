#include "assicurati.h"

Assicurati::Assicurati(): currentAss(0), Ass() {

    Ass.push_back(new RCA("Marco", "Mazzucato", "MZZMRC99R04F382E", 21, 1, QDate(2020,10,4), 17000, 1200, 85, false));
    Ass.push_back(new AssImmobili("Luca", "Fantini", "FNTLCU80D14L781S", 45, 2, QDate(2020,8,21), 200000, "Monselice", 120, true));
    Ass.push_back(new AssVita("Giada", "Dante", "gdddnt9904", 32, 3, QDate(2019,1,15), 'C', 250000));
}

int Assicurati::getNewId() const
{
    int maxid=0;
    for(auto cit=Ass.begin();cit!=Ass.end();cit++)
        if((*cit)->getCodPolizza()>maxid)
            maxid=(*cit)->getCodPolizza();
    return maxid+1;
}

void Assicurati::addAss(Assicurazione *a) {Ass.push_back(a);}

void Assicurati::removeAss(int i) {Ass.erase(i);}

//void addAss()

/*void Assicurati::removeAss(std::string cod){

}
*/
