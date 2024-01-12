#ifndef DATAORA_H
#define DATAORA_H

#include "Orario.h"

class DataOra : public Orario
{
public:
    DataOra();
    DataOra(short,short,short,short,short);
    short getGiorno() const;
    short getMese() const;
    short getAnno() const;
    string toString() const;
    static DataOra fromTimeT();
private:
    short giorno;
    short mese;
    short anno;
};
#endif // DATAORA_H
