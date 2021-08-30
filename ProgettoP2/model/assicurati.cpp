#include "assicurati.h"

Assicurati::Assicurati(): currentAss(0), Ass() {

    Ass.push_back(new RCA("Marco", "Mazzucato", "mzzmrc9904", 21, 552255, QDate(2020,10,4), 17000, 1200, 85, false));
    Ass.push_back(new AssImmobili("Luca", "Fantini", "lcfant9904", 45, 856965, QDate(2020,8,21), 200000, "Monselice", 120, true));
    Ass.push_back(new AssVita("Giada", "Dante", "gdddnt9904", 32, 455887, QDate(2019,1,15), 'C', 250000));
}

int Assicurati::getNewId() const
{
    int maxid=0;
    for(auto cit=Ass.begin();cit!=Ass.end();cit++)
        if((*cit)->getCodPolizza()>maxid)
            maxid=(*cit)->getCodPolizza();
    return maxid+1;
}

//void addAss()

/*void Assicurati::removeAss(std::string cod){

}
*/
