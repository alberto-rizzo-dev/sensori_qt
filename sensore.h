#ifndef SENSORE_H
#define SENSORE_H

#include<string>
#include"vector"
#include "datosensore.h"
#include <time.h>

using std::vector;
using namespace std;

class Sensore
{
private:
    string id;
    string descrizione;
    vector<DatoSensore> datiRilevati;
protected:
    static double randomDouble(short,short); //leggere negli appunti se serve const, penso di no
public:
    Sensore(const string&,const string&);
    string getId() const;
    string getDescrizione() const;
    vector<DatoSensore> getDatiRilevati() const;
    void rilevaDato(const DatoSensore&);
    void reset();

    virtual ~Sensore() = default;
    virtual void simulazione() = 0;
    virtual string getName() const =0;
    virtual Sensore *clone() const =0;
};

#endif // SENSORE_H
