#ifndef DATOSENSORETEMPERATURA_H
#define DATOSENSORETEMPERATURA_H

#include <ctime>

class DatoSensoreTemperatura
{
private:
    double temperatura;
    time_t dataoraRilevazione;
public:
    DatoSensoreTemperatura(const double&,const time_t&); //cambiare in dataora
    double getTemperatura() const;
};

#endif // DATOSENSORETEMPERATURA_H
