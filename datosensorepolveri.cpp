#include "datosensorepolveri.h"

DatoSensorePolveri::DatoSensorePolveri(const PolvereSottile&p,double val,const time_t& orarioRilevazione)
    : DatoSensore(orarioRilevazione) , polvere(p) ,valorePolvere(val) {}

double DatoSensorePolveri::getValorePolvere() const{
    return valorePolvere;
}

PolvereSottile DatoSensorePolveri::getPolvere() const{
    return polvere;
}
