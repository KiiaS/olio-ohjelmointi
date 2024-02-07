#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo on luotu"<<endl;

}

double Kerrostalo::laskeKulutus(double h)
{
    double kulutus= eka.laskeKulutus(h)+toka.laskeKulutus(h)+kolmas.laskeKulutus(h);
    return kulutus;
}

void Kerrostalo::maaritaAsunnot()
{
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

