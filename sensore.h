#ifndef SENSORE_H
#define SENSORE_H

#include<string>
using namespace std;

class Sensore
{
private:
    string id;
    string descrizione;

public:
    Sensore();
    virtual ~Sensore() = default;
    virtual int simulazione() = 0; //TODO cambiare int con tipo cazzo
};

#endif // SENSORE_H
