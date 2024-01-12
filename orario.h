#ifndef ORARIO_H
#define ORARIO_H
#include <iostream>

using std::string;
using std::ostream;

class Orario
{
public:
    Orario();
    Orario(short,short);
    short getOre() const;
    short getMinuti() const;
    string toString() const;
protected:
    short ore;
    short minuti;
};

#endif // ORARIO_H
