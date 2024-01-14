#include "sensore.h"
#include <random>

Sensore::Sensore(const string&i,const string& desc)
    : id(i) , descrizione(desc){}

Sensore::Sensore(const Sensore &s) : Sensore(s.id,s.descrizione){
    for(auto d : s.datiRilevati)
        datiRilevati.push_back(new DatoSensore(*d));
}

Sensore::~Sensore(){
    for(auto dato : datiRilevati)
        delete dato;
}

string Sensore::getId() const{
    return id;
}

string Sensore::getDescrizione() const{
    return descrizione;
}

vector<DatoSensore *> Sensore::getDatiRilevati() const{
    return datiRilevati;
}

void Sensore::rilevaDato(DatoSensore * dato) {
    datiRilevati.push_back(dato);
}

void Sensore::reset(){
    for(auto dato : datiRilevati)
        delete dato;
    datiRilevati.clear();
}

double Sensore::randomDouble(short min,short max){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> dis(min, max);

    double random_double = dis(gen);

    return random_double;
}

Sensore& Sensore::operator = (const Sensore& s){
    for(auto dato : datiRilevati)
        delete dato;

    id=s.id;
    descrizione=s.descrizione;

    for(auto d : s.datiRilevati)
        datiRilevati.push_back(new DatoSensore(*d));

    return *this;
}

