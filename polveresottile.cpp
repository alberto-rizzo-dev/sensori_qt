#include "polveresottile.h"

PolvereSottile::PolvereSottile(const string& i,const string& n,const string& desc)
    : id(i) , nome(n) , descrizione(desc){}

string PolvereSottile::getId() const{
    return id;
}

string PolvereSottile::getNome() const{
    return nome;
}

string PolvereSottile::getDescrizione() const{
    return descrizione;
}
