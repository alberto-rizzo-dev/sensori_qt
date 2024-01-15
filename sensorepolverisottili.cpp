#include "sensorepolverisottili.h"

//DATO SENSORE
SensorePolveriSottili::DatoSensorePolveri::DatoSensorePolveri(const PolvereSottile&p,double val,const time_t& orarioRilevazione)
    : dataRilevazione(orarioRilevazione) , polvere(p) ,valorePolvere(val) {}

double DatoSensorePolveri::getValorePolvere() const{
    return valorePolvere;
}

PolvereSottile SensorePolveriSottili::DatoSensorePolveri::getPolvere() const{
    return polvere;
}

time_t SensorePolveriSottili::DatoSensorePolveri::getDataRilevazione() const{
    return dataRilevazione;
}

//SENSORE

SensorePolveriSottili::SensorePolveriSottili(const vector<PolvereSottile>& polveri,const string &id, const string& desc)
    : Sensore(id,desc) , polveriRilevabili(polveri) {}

vector<PolvereSottile> SensorePolveriSottili::getPolveriRilevabili() const{
    return polveriRilevabili;
}

void SensorePolveriSottili::simulazione(){
    reset();
    time_t oraCorrente = time(NULL);

    for(auto polvere : polveriRilevabili){
        Sensore::rilevaDato(DatoSensorePolveri(polvere,Sensore::randomDouble(0,100),oraCorrente));
    }
}

void SensorePolveriSottili::reset(){
    //svuota la lista
}

SensorePolveriSottili * SensorePolveriSottili::clone() const{
    return new SensorePolveriSottili(*this);
}

string SensorePolveriSottili::getName() const{
    return "polv-"+Sensore::getId();
}



