#include "datosensoreinquinante.h"

DatoSensoreInquinante::DatoSensoreInquinante(const pair<Inquinante,double>& inq,const time_t& orarioRilevazione)
    : DatoSensore(orarioRilevazione) , valoreInquinante(inq) {}

pair<Inquinante,double> DatoSensoreInquinante::getValoreInquinante() const{
    return valoreInquinante;
}

