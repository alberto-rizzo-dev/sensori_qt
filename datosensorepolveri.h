#ifndef DATOSENSOREPOLVERI_H
#define DATOSENSOREPOLVERI_H

#include "polveresottile.h"
#include "vector"
#include <ctime>

using std::vector;

class DatoSensorePolveri
{
private:
    PolvereSottile polvere;
    double valorePolvere;
    time_t dataRilevazione;
public:
    DatoSensorePolveri(const PolvereSottile&,double,const time_t&); //cambiare in dataora
    double getValorePolvere() const;
    time_t  getDataRilevazione() const;
    PolvereSottile getPolvere() const;
};

#endif // DATOSENSOREPOLVERI_H
