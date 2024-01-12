#include "sensore.h"
#include <random>

Sensore::Sensore(const string&i,const string& desc)
    : id(i) , descrizione(desc){}

vector<DatoSensore *> Sensore::getDatiRilevati() const{
    return datiRilevati;
}

void Sensore::rilevaDato(DatoSensore * dato) {
    datiRilevati.push_back(dato);
}

double Sensore::randomDouble(short min,short max){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> dis(min, max);

    double random_double = dis(gen);

    return random_double;
}
