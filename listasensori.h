#ifndef LISTASENSORI_H
#define LISTASENSORI_H

#include "sensore.h"

class ListaSensori
{
private:
    vector<Sensore*> sensori;
public:
    ListaSensori() = default;
    ListaSensori(const vector<Sensore*>&);

    bool aggiungiSensore(Sensore *);
    bool idDisponibile(const string&) const;
    vector<const Sensore*> trovaSensori(const string&) const; //ritorna una lista di tutti i sensori che contengono la string all'interno del nome
    ~ListaSensori();
};

#endif // LISTASENSORI_H
