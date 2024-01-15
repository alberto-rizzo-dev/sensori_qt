#ifndef SENSORETEMPERATURA_H
#define SENSORETEMPERATURA_H

#include "sensore.h"

class SensoreTemperatura : public Sensore
{
private:
    class DatoSensoreTemperatura
    {
    private:
        double temperatura;
        time_t dataoraRilevazione;
    public:
        DatoSensoreTemperatura(const double&,const time_t&); //cambiare in dataora
        double getTemperatura() const;
    };
    double minimaRilevabile;
    double massimaRilevabile;
public:
    SensoreTemperatura(double,double,const string&,const string&);
    ~SensoreTemperatura() = default;
    double getTemperaturaAttuale() const;
    void simulazione();
    string getName() const;
    SensoreTemperatura * clone() const;
    void reset();
};

#endif // SENSORETEMPERATURA_H
