#include "sensorepolverisottili.h"

//DATO SENSORE
SensorePolveriSottili::DatoSensorePolveri::DatoSensorePolveri(const PolvereSottile&p,double val,const time_t& orarioRilevazione)
    : dataRilevazione(orarioRilevazione) , polvere(p) ,valorePolvere(val) {}

double SensorePolveriSottili::DatoSensorePolveri::getValorePolvere() const{
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
    for(auto polvere : polveriRilevabili){
        auto d = DatoSensorePolveri(polvere,Sensore::randomDouble(0,100),time(NULL));
        polveriRilevate.push_back(d);
    }
}

void SensorePolveriSottili::reset(){
    polveriRilevate.clear();
}

SensorePolveriSottili * SensorePolveriSottili::clone() const{
    return new SensorePolveriSottili(*this);
}

string SensorePolveriSottili::getName() const{
    return "polv-"+Sensore::getId();
}

string SensorePolveriSottili::toString() const{
    if(polveriRilevate.empty())
        return "\nvuota";
    string s="\nSENSORE: "+getId()+"\n";
    for(auto p : polveriRilevate){
       s+=p.getPolvere().getNome()+": "+std::to_string(p.getValorePolvere())+"\n";
    }
    return s;
}




