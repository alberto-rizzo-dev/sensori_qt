#include "sensorepolverisottili.h"

SensorePolveriSottili::SensorePolveriSottili(const vector<PolvereSottile>& polveri,const string &id, const string& desc)
    : Sensore(id,desc) , polveriRilevabili(polveri) {}

vector<PolvereSottile> SensorePolveriSottili::getPolveriRilevabili() const{
    return polveriRilevabili;
}

void SensorePolveriSottili::simulazione(){
    if(!Sensore::datiRilevati.empty())
        Sensore::datiRilevati.clear();

    time_t oraCorrente = time(NULL);

    for(auto polvere : polveriRilevabili){
        Sensore::rilevaDato(new DatoSensorePolveri(polvere,Sensore::randomDouble(minimaRilevabile,massimaRilevabile),oraCorrente));
    }
}
