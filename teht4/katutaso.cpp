#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{

}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double h)
{
    double kulutus= as1.laskeKulutus(h)+as2.laskeKulutus(h);
    return kulutus;
}
