#include "mainwindow.h"
#include <QApplication>

//test
#include "listasensori.h"
#include "sensorepolverisottili.h"
#include "sensoretemperatura.h"
#include <iostream>
using namespace std;
//---

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    //test

    ListaSensori s;
    vector<PolvereSottile> tmp;
    tmp.push_back(PolvereSottile("cocaina","cocaina","ti sballa"));
    tmp.push_back(PolvereSottile("eroina","eroina","ti sballa ancora di piu"));

    Sensore * s1 =  new SensorePolveriSottili(tmp,"ciao","descrizione bella");
    Sensore * s2 =  new SensorePolveriSottili(tmp,"oi","descrizione bella");
    Sensore * s3 =  new SensoreTemperatura(0,100,"bellissima","cacca");

    Sensore * assente = new SensorePolveriSottili(tmp,"assente","assente");

    s.aggiungiSensore(s1);
    s.aggiungiSensore(s2);
    s.aggiungiSensore(s3);

    cout<<s.modificaSensore(s1,assente);

    assente->simulazione();
    s2->simulazione();
    s3->simulazione();

    s.eliminaSensore(assente);
    s.stampa();
    //---

    return a.exec();
}
