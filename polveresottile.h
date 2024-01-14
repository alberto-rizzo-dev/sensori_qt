#ifndef POLVERESOTTILE_H
#define POLVERESOTTILE_H

#include <string>
using namespace std;

class PolvereSottile
{
private:
    string id;
    string nome;
    string descrizione;
public:
    PolvereSottile(const string&,const string&,const string&);
    string getNome() const;
    string getDescrizione() const;
    string getId() const;
};

#endif // POLVERESOTTILE_H
