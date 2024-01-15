#ifndef SENSORE_H
#define SENSORE_H

#include<string>
#include"vector"

using std::vector;
using namespace std;

class Sensore
{
private:
    string id;
    string descrizione;
protected:
    static double randomDouble(short,short); //leggere negli appunti se serve const, penso di no
public:
    Sensore(const string&,const string&);
    string getId() const;
    string getDescrizione() const;

    virtual ~Sensore() = default;

    virtual void simulazione() = 0;
    virtual void reset() = 0;
    virtual string getName() const =0;
    virtual Sensore *clone() const =0;
};

#endif // SENSORE_H
