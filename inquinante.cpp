#include "inquinante.h"

Inquinante::Inquinante(const string& i,const string& n,const string& desc)
    : id(i) , nome(n) , descrizione(desc){}

string Inquinante::getId() const{
    return id;
}

string Inquinante::getNome() const{
    return nome;
}

string Inquinante::getDescrizione() const{
    return descrizione;
}
