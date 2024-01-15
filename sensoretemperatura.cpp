#include "sensoretemperatura.h"

SensoreTemperatura::SensoreTemperatura(double min,double max,const string &id, const string& desc)
    : Sensore(id,desc) , minimaRilevabile(min) , massimaRilevabile(max) {}

void SensoreTemperatura::simulazione(){
    if(!Sensore::getDatiRilevati().empty())
        Sensore::reset();

    time_t oraCorrente = time(NULL);

    for(short i=0; i<12;i++){
        Sensore::rilevaDato(DatoSensoreTemperatura(Sensore::randomDouble(minimaRilevabile,massimaRilevabile),oraCorrente));
        oraCorrente -=1440;
    }
}

SensoreTemperatura * SensoreTemperatura::clone() const{
    return new SensoreTemperatura(*this);
}

string SensoreTemperatura::getName() const {
    return "temp-"+Sensore::getId();
}
