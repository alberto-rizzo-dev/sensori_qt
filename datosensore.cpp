#include "datosensore.h"

DatoSensore::DatoSensore(const time_t& dataora) : dataoraRilevazione(dataora) {}

time_t DatoSensore::getOrarioRilevazione() const {
    return dataoraRilevazione;
}
