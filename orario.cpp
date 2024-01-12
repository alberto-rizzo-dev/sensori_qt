#include "Orario.h"

Orario::Orario() : ore(0), minuti(0) {}

Orario::Orario(short o, short m)
{
    if(o<0 || o>23 || m<0 || m>59){
        ore=0;
        minuti=0;
    }
    else{
        ore=o;
        minuti=m;
    }
}

short Orario::getOre() const{
    return ore;
}

short Orario::getMinuti() const{
    return minuti;
}

string Orario::toString() const{

}
