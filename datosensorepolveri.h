#ifndef DATOSENSOREPOLVERI_H
#define DATOSENSOREPOLVERI_H

#include "datosensore.h"
#include "polveresottile.h"
#include "vector"

using std::vector;

class DatoSensorePolveri : public DatoSensore
{
private:
    PolvereSottile polvere;
    double valorePolvere;
public:
    DatoSensoreInquinante(const PolvereSottile&,double,const time_t&); //cambiare in dataora
    double getValorePolvere() const;
    PolvereSottile getPolvere() const;
};

#endif // DATOSENSOREPOLVERI_H
