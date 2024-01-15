#include "datosensoretemperatura.h"

DatoSensoreTemperatura::DatoSensoreTemperatura(const double& temp,const time_t& data)
    : DatoSensore(data), temperatura(temp){}

double DatoSensoreTemperatura::getTemperatura() const {
    return temperatura;
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
