#include "sensoretemperatura.h"

SensoreTemperatura::SensoreTemperatura(const double &min,const double &max,const string &id, const string& desc)
    : Sensore(id,desc) , minimaRilevabile(min) , massimaRilevabile(max) {}
