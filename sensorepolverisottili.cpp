#include "sensorepolverisottili.h"

SensorePolveriSottili::SensorePolveriSottili(const vector<PolvereSottile>& polveri,const string &id, const string& desc)
    : Sensore(id,desc) , polveriRilevabili(polveri) {}

vector<PolvereSottile> SensorePolveriSottili::getPolveriRilevabili() const{
    return polveriRilevabili;
}

void SensorePolveriSottili::simulazione(){
    if(!Sensore::getDatiRilevati().empty())
        Sensore::reset();

    time_t oraCorrente = time(NULL);

    for(auto polvere : polveriRilevabili){
        Sensore::rilevaDato(new DatoSensorePolveri(polvere,Sensore::randomDouble(0,100),oraCorrente));
    }
}

string SensorePolveriSottili::getName() const{
    return "polv-"+Sensore::getId();
}

