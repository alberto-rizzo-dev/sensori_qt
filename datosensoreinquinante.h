#ifndef DATOSENSOREINQUINANTE_H
#define DATOSENSOREINQUINANTE_H

#include "datosensore.h"
#include "inquinante.h"
#include "vector"

using std::vector;

class DatoSensoreInquinante : public DatoSensore
{
private:
    pair<Inquinante,double> valoreInquinante;
public:
    DatoSensoreInquinante(const pair<Inquinante,double>&,const time_t&);
    pair<Inquinante,double> getValoreInquinante() const;
};

#endif // DATOSENSOREINQUINANTE_H
