#include "sensoretemperatura.h"

//DATO SENSORE


SensoreTemperatura::DatoSensoreTemperatura::DatoSensoreTemperatura(const double& temp,const time_t& data)
    : dataoraRilevazione(data), temperatura(temp){}

double SensoreTemperatura::DatoSensoreTemperatura::getTemperatura() const {
    return temperatura;
}

//SENSORE

SensoreTemperatura::SensoreTemperatura(double min,double max,const string &id, const string& desc)
    : Sensore(id,desc) , minimaRilevabile(min) , massimaRilevabile(max) {}

void SensoreTemperatura::simulazione(){
    reset();
    time_t oraCorrente = time(NULL);

    for(short i=0; i<12;i++){
        temperatureRilevate.push_back(DatoSensoreTemperatura(Sensore::randomDouble(minimaRilevabile,massimaRilevabile),oraCorrente));
        oraCorrente -=1440;
    }
}

void SensoreTemperatura::reset(){
    temperatureRilevate.clear();
}

SensoreTemperatura * SensoreTemperatura::clone() const{
    return new SensoreTemperatura(*this);
}

string SensoreTemperatura::getName() const {
    return "temp-"+Sensore::getId();
}

string SensoreTemperatura::toString() const { //per test, rimuovere probabilmente
    if(temperatureRilevate.empty())
        return "vuota";
    string s="SENSORE: "+getId()+"\n";
    short tmp=1;
    for(auto t : temperatureRilevate){
        s+=std::to_string(tmp)+":"+std::to_string(t.getTemperatura())+"\n";
        tmp++;
    }
    return s;
}


/* AGGIUNGERE ALLA VIEW

string Orario::getOrario() const {
    struct tm *time = localtime(&dataOra);

    short ore = time->tm_hour;
    short minuti = time->tm_sec;

    char fixMin= minuti <10 ? '0':'\0';
    char fixOre = ore <10 ? '0':'\0';
    return fixOre+ std::to_string(ore)+':'+fixMin+ std::to_string(minuti);
}

string Orario::getData() const {
    struct tm *time = localtime(&dataOra);

    short giorno = time->tm_mday;
    short mese = time->tm_mon + 1;
    short anno = time->tm_year + 1900;

    char fixGiorno= giorno <10 ? '0':'\0';
    char fixMese = mese <10 ? '0':'\0';
    return fixGiorno+std::to_string(giorno)+'/'+fixMese+std::to_string(mese)+'/'+fixMese+std::to_string(anno);
}

*/
