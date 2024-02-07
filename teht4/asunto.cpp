#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout<<"Asunto maaritetty asukkaita="<<asukasMaara<<" nelioita="<<neliot<<endl;
}

double Asunto::laskeKulutus(double h)
{
    double kulutus = h*asukasMaara * neliot;
    return kulutus;

}
