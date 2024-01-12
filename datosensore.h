#ifndef DATOSENSORE_H
#define DATOSENSORE_H

#include <time.h>
#include <string>

using std::string;

class DatoSensore
{
private:
    time_t dataoraRilevazione;
public:
    DatoSensore(const time_t&); //cambiare in dataora
    virtual ~DatoSensore() = default;
    string getOrarioRilevazione() const;
    string getDataRilevazione() const;
    //todo get time, forse tostring
};

#endif // DATOSENSORE_H
