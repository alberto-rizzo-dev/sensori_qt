#include "listasensori.h"
#include <algorithm> //per find_if
#include <typeinfo>
//test
#include<iostream>
using namespace std;
//---

ListaSensori::ListaSensori(const vector<Sensore*>& sens)
    : sensori(sens) {}

ListaSensori::ListaSensori(const ListaSensori& ls){
    for(auto s : ls.sensori)
        sensori.push_back(s->clone());
}

ListaSensori::~ListaSensori(){
    for(auto s : sensori)
        delete s;
}


ListaSensori& ListaSensori::operator = (const ListaSensori& ls){
    if(this!=&ls) return *this;
    for(auto s : sensori)
        delete s;
    sensori.clear();
    for(auto s : ls.sensori)
        sensori.push_back(s->clone());
    return *this;
}

bool ListaSensori::idDisponibile(const string& id) const{
    //ritorna true se nessun sensore nella lista ha come campo id quello fornito alla funzione
    //ritorna false in caso contrario
    if(sensori.empty()) return true;
    auto it = std::find_if(sensori.begin(), sensori.end(), [&id](Sensore * s) {return s->getId() == id;}); //ritorna iteratore che punta ad un sensore con id = a quello fornito, sensori.end() se non è presente
    return it == sensori.end();
}

bool ListaSensori::aggiungiSensore(Sensore * s){
    //se s punta ad un sensore con id = all'id di uno dei sensori della lista la funzione ritorna false
    //in caso contrario s viene aggiunto alla lista e la funzione ritorna true
    if(!idDisponibile(s->getId())) return false;
    sensori.push_back(s);
    return true;
}

vector<Sensore*> ListaSensori::trovaSensori(const string& s){
    //ritorna una lista di tutti i sensori che contengono la stringa 's' all'interno del nome
    vector<Sensore*> trovati;
    for(auto i = sensori.begin();i!=sensori.end();i++)
        if(((*i)->getName()).find(s) != std::string::npos) //se s è contenuta nel nome del sensore
            trovati.push_back(*i);
    return trovati;
}

bool ListaSensori::eliminaSensore(Sensore * s){
    //elimina il sensore nella lista che ha lo stesso indirizzo del sensore puntato da s
    //se non viene trovato nessun sensore con l'id fornito, ritorna false
    auto it = std::find_if(sensori.begin(), sensori.end(), [s](Sensore * sensore) {return sensore == s;});
    if(it==sensori.end()) return false;
    delete *it;
    sensori.erase(it);
    return true;
}

bool ListaSensori::modificaSensore(Sensore * vecchio,Sensore * nuovo){
    /*elimina il sensore nella lista che ha lo stesso indirizzo del sensore puntato da vecchio
      poi viene inserito un nuovo puntatore nella lista contenente i valori modificati*/
    //se non viene trovato nessun sensore oppure ritorna false
    //ritorna false se passo due puntatori con tipo dinamico differente
    //ritorna false se nuovo id fornito non è disponibile -> fa anche si che se vecchio == nuovo ritorna false
    if(vecchio==nuovo) return false;
    if(typeid(*vecchio) != typeid(*nuovo)){cout<<"eccoci"; return false;};
    if(!idDisponibile(nuovo->getId())) return false;
    auto it = std::find_if(sensori.begin(), sensori.end(), [vecchio](Sensore * sensore) {return sensore == vecchio;});
    if(it==sensori.end()) return false;
    *it=nuovo;
    delete vecchio;
    return true;
}

//test
void ListaSensori::stampa() const{
    for(auto it : sensori)
        cout<<it->toString();
}



