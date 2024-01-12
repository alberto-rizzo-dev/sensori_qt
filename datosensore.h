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
    time_t getOrarioRilevazione() const;
    //todo get time, forse tostring
};

#endif // DATOSENSORE_H
