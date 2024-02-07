#include <iostream>
#include "asunto.h"
#include "kerros.h"
#include "katutaso.h"
#include "kerrostalo.h"
using namespace std;

int main()
{
    // Asunto olio;
    // olio.maarita(2,100);

    // Katutaso olio3;
    // olio3.maaritaAsunnot();

    // Kerros olio2;
    // olio2.maaritaAsunnot();

    Kerrostalo olio4;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    olio4.maaritaAsunnot();
    cout<<"Koko kerrostalon kulutus ="<<olio4.laskeKulutus(1)<<endl;

    // cout<<"Asunnon kulutus, kun hinta=1 on "<<olio.laskeKulutus(1)<<endl;
    // cout<<"Katutason ja perityn kerroksen kulutus, kun hinta = 1 on "<<olio3.laskeKulutus(1)+olio2.laskeKulutus(1)<<endl;
    return 0;
}
