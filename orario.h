#ifndef ORARIO_H
#define ORARIO_H

#include <string>
using std::string;

class Orario //piccola classe di appoggio per convertire time_t in stringa ELIMINARE E METTERE NELLA VITA I DUE METODI
{
private:
    time_t dataOra;
public:
    Orario(const time_t&);
    string getOrario() const;
    string getData() const;
};

#endif // ORARIO_H
