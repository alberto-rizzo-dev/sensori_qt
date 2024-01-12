#include "DataOra.h"
#include<time.h>

DataOra::DataOra(){
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);

    giorno = aTime->tm_mday;
    mese = aTime->tm_mon + 1;
    anno = aTime->tm_year + 1900;
    ore = aTime->tm_hour;
    minuti = aTime->tm_sec;
}

DataOra::DataOra(short gg,short mm, short aa, short h,short min)
    : Orario(h,min), giorno(gg), mese(mm), anno(aa){}

short DataOra::getGiorno() const {
    return giorno;
}

short DataOra::getMese() const {
    return mese;
}

short DataOra::getAnno() const {
    return anno;
}

string DataOra::toString() const {

}

