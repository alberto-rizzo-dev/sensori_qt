#include "sensoretemperatura.h"

SensoreTemperatura::SensoreTemperatura(double min,double max,const string &id, const string& desc)
    : Sensore(id,desc) , minimaRilevabile(min) , massimaRilevabile(max) {}

void SensoreTemperatura::simulazione(){
    if(!datiRilevati.empty())
        datiRilevati.clear();

    time_t oraCorrente = time(NULL);

    for(short i=0; i<12;i++){
        Sensore::rilevaDato(new DatoSensoreTemperatura(Sensore::randomDouble(minimaRilevabile,massimaRilevabile),oraCorrente));
        oraCorrente -=1440;
    }
}
