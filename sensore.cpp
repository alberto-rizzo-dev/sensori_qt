#include "sensore.h"

Sensore::Sensore(const string&i,const string& desc)
    : id(i) , descrizione(desc){}

vector<DatoSensore *> Sensore::getDatiRilevati() const{
    return datiRilevati;
}

void Sensore::rilevaDato(DatoSensore * dato) {
    datiRilevati.push_back(dato);
}
