#include "datosensoretemperatura.h"

DatoSensoreTemperatura::DatoSensoreTemperatura(const double& temp,const time_t& data)
    : DatoSensore(data), temperatura(temp){}

double DatoSensoreTemperatura::getTemperatura() const {
    return temperatura;
}
