#ifndef SENSOREPOLVERISOTTILI_H
#define SENSOREPOLVERISOTTILI_H

#include "sensore.h"
#include "datosensorepolveri.h"

class SensorePolveriSottili : public Sensore
{
private:
    vector<PolvereSottile> polveriRilevabili;
public:
    SensorePolveriSottili(const vector<PolvereSottile>&,const string &, const string&);
    vector<PolvereSottile> getPolveriRilevabili() const;
    void simulazione();
};

#endif // SENSOREPOLVERISOTTILI_H
