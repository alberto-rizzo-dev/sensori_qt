#include "listasensori.h"
#include <algorithm> //per find_if

ListaSensori::ListaSensori(const vector<Sensore*>& sens)
    : sensori(sens) {}

ListaSensori::~ListaSensori(){
    for(auto s : sensori)
        delete s;
}

bool ListaSensori::idDisponibile(const string& id) const{
    //ritorna true se nessun sensore nella lista ha come campo id quello fornito alla funzione
    //ritorna false in caso contrario
    auto it = std::find_if(sensori.begin(), sensori.end(), [&id](Sensore * s) {return s->getId() == id;}); //ritorna iteratore che punta ad un sensore con id = a quello fornito, sensori.end() se non è presente
    return it != sensori.end();
}

bool ListaSensori::aggiungiSensore(Sensore *s){
    //se s punta ad un sensore con id = all'id di uno dei sensori della lista la funzione ritorna false
    //in caso contrario s viene aggiunto alla lista e la funzione ritorna true
    if(!idDisponibile(s->getId())) return false;
    sensori.push_back(s);
    return true;
}

vector<const Sensore*> ListaSensori::trovaSensori(const string& s) const{
    //ritorna una lista di tutti i sensori che contengono la stringa 's' all'interno del nome
    bool eliminaSensore(const Sensore&);
    vector<const Sensore*> trovati;
    for(auto i = sensori.begin();i!=sensori.end();i++)
        if(((*i)->getName()).find(s) != std::string::npos) //se s è contenuta nel nome del sensore
            trovati.push_back(*i);
    return trovati;
}

bool ListaSensori::eliminaSensore(Sensore * s){
    //elimina il sensore nella lista che ha lo stesso indirizzo del sensore puntato da s
    //se non viene trovato nessun sensore con l'id fornito, ritorna false
    auto it = std::find_if(sensori.begin(), sensori.end(), [s](Sensore * sensore) {return sensore == s;});
    delete *it;
    sensori.erase(it);
    return true;
}

bool ListaSensori::modificaSensore(Sensore * vecchio,Sensore * nuovo){
    /*elimina il sensore nella lista che ha lo stesso indirizzo del sensore puntato da vecchio
      poi viene inserito un nuovo puntatore nella lista contenente i valori modificati*/
    //se non viene trovato nessun sensore oppure i tipi dinamici di vecchio e nuovo non coincidono ritorna false
    auto it = std::find_if(sensori.begin(), sensori.end(), [vecchio](Sensore * sensore) {return sensore == vecchio;});
    if(it==sensori.end() || typeid(*nuovo) == typeid(*vecchio)) return false;
    *it=nuovo;
    delete vecchio;
    return true;
}


