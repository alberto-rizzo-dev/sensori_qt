
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

    ListaSensori(const ListaSensori&);
    ListaSensori& operator = (const ListaSensori&);
    ~ListaSensori();

    bool idDisponibile(const string&) const;
    bool aggiungiSensore(Sensore *);
    bool eliminaSensore(Sensore *);
    bool modificaSensore(Sensore *,Sensore *);
    vector<Sensore*> trovaSensori(const string&); //non const: i sensori ritornati potrebbero essere modificati
};

#endif // LISTASENSORI_H
