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

    bool idDisponibile(const string&) const;
    bool aggiungiSensore(Sensore *);
    bool eliminaSensore(Sensore *);
    bool modificaSensore(Sensore *,Sensore *);
    vector<const Sensore*> trovaSensori(const string&) const;
    ~ListaSensori();
};

#endif // LISTASENSORI_H
