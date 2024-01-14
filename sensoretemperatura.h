#ifndef SENSORETEMPERATURA_H
#define SENSORETEMPERATURA_H

#include "sensore.h"
#include "datosensoretemperatura.h"

class SensoreTemperatura : public Sensore
{
private:
    double minimaRilevabile;
    double massimaRilevabile;
public:
    SensoreTemperatura(double,double,const string&,const string&);
    ~SensoreTemperatura() = default;
    double getTemperaturaAttuale() const;
    void simulazione();
    string getName() const;
};

#endif // SENSORETEMPERATURA_H
