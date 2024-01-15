#include "sensore.h"
#include <random>

Sensore::Sensore(const string&i,const string& desc)
    : id(i) , descrizione(desc){}

string Sensore::getId() const{
    return id;
}

string Sensore::getDescrizione() const{
    return descrizione;
}

double Sensore::randomDouble(short min,short max){
    std::random_device rd;
    std::mt19937 gen(rd());

    std::uniform_real_distribution<double> dis(min, max);

    double random_double = dis(gen);

    return random_double;
}

