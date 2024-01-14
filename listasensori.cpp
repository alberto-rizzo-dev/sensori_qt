#include "listasensori.h"
#include <algorithm> //per find_if

ListaSensori::ListaSensori(const vector<Sensore*>& sens)
    : sensori(sens) {}

ListaSensori::~ListaSensori(){
    for(auto s : sensori)
        delete s;
}

bool ListaSensori::idDisponibile(const string& id) const{
    auto it = std::find_if(sensori.begin(), sensori.end(), [&id](Sensore * s) {return s->getId() == id;});
    return it != sensori.end();
}

bool ListaSensori::aggiungiSensore(Sensore *s){
    if(!idDisponibile(s->getId())) return false;
    sensori.push_back(s);
    return true;
}

vector<const Sensore*> ListaSensori::trovaSensori(const string& s) const{
    vector<const Sensore*> trovati;
    for(auto i = sensori.begin();i!=sensori.end();i++)
        if(((*i)->getName()).find(s) != std::string::npos) //se s è contenuta nel nome del sensore
            trovati.push_back(*i);
    return trovati;
}
