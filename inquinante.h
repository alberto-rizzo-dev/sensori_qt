#ifndef INQUINANTE_H
#define INQUINANTE_H

#include <string>
using namespace std;

class Inquinante
{
private:
    string id;
    string nome;
    string descrizione;
public:
    Inquinante(const string&,const string&,const string&);
    string getNome() const;
    string getDescrizione() const;
    string getId() const;
};

#endif // INQUINANTE_H
