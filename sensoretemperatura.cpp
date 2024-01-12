#include "sensoretemperatura.h"

SensoreTemperatura::SensoreTemperatura(double min,double max,const string &id, const string& desc)
    : Sensore(id,desc) , minimaRilevabile(min) , massimaRilevabile(max) {}

void SensoreTemperatura::simulazione(){
    vector<DatoSensoreTemperatura*> datiRilevati;
    if(!datiRilevati.empty())
        datiRilevati.clear();

    time_t oraCorrente = time(NULL);

    for(short i=0; i<12;i++){
        rilevaDato(new DatoSensoreTemperatura(Sensore::randomDouble(minimaRilevabile,massimaRilevabile),oraCorrente));
        oraCorrente -=1440;
    }
}
