#include "datosensoretemperatura.h"

DatoSensoreTemperatura::DatoSensoreTemperatura(const double& temp,const time_t& orarioRilevazione)
    : DatoSensore(orarioRilevazione), temperatura(temp){}

double DatoSensoreTemperatura::getTemperatura() const {
    return temperatura;
}
