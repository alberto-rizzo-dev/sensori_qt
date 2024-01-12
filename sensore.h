#ifndef SENSORE_H
#define SENSORE_H

#include<string>
#include"vector"
#include "datosensore.h"

using std::vector;
using namespace std;

class Sensore
{
private:
    string id;
    string descrizione;
    vector<DatoSensore *> datiRilevati;
public:
    Sensore(const string&,const string&);
    vector<DatoSensore *> getDatiRilevati() const;
    void rilevaDato(DatoSensore *);
    virtual ~Sensore() = default;
    virtual vector<DatoSensore *> simulazione() = 0;
};

#endif // SENSORE_H
