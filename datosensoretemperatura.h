#ifndef DATOSENSORETEMPERATURA_H
#define DATOSENSORETEMPERATURA_H

#include "datosensore.h"

class DatoSensoreTemperatura : public DatoSensore
{
private:
    double temperatura;
public:
    DatoSensoreTemperatura(const double&,const time_t&); //cambiare in dataora
    double getTemperatura() const;
};

#endif // DATOSENSORETEMPERATURA_H
