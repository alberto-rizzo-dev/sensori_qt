#ifndef SENSOREPOLVERISOTTILI_H
#define SENSOREPOLVERISOTTILI_H

#include "sensore.h"
#include "polveresottile.h"
#include <ctime>

class SensorePolveriSottili : public Sensore
{
private:
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
    vector<PolvereSottile> polveriRilevabili;
public:
    SensorePolveriSottili(const vector<PolvereSottile>&,const string &, const string&);
    vector<PolvereSottile> getPolveriRilevabili() const;
    void simulazione();
    void reset();
    string getName() const;
    SensorePolveriSottili * clone() const;
};

#endif // SENSOREPOLVERISOTTILI_H
