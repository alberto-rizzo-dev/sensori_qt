#ifndef DATOSENSOREINQUINANTI_H
#define DATOSENSOREINQUINANTI_H

#include "datosensore.h"
#include "vector"
#include "inquinante.h"

using std::vector;

class DatoSensoreInquinanti
{
private:
    vector<pair<Inquinante,double> inquinanti; //todo continua
public:
    DatoSensoreInquinanti();
};

#endif // DATOSENSOREINQUINANTI_H
