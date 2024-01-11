#ifndef DATOSENSORE_H
#define DATOSENSORE_H

#include <ctime>

class DatoSensore
{
private:
    time_t dataoraRilevazione;

public:
    DatoSensore(const time_t&);
    virtual ~DatoSensore() = default;
    virtual DatoSensore * rilevaDato() = 0;
};

#endif // DATOSENSORE_H
