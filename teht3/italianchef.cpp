#include "italianchef.h"

ItalianChef::ItalianChef()
{

}

ItalianChef::~ItalianChef()
{
}

ItalianChef::ItalianChef(string s, int a, int b)
{
    name = s;
    cout<<"Chef "<<name<<"konstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<"makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<"uses jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<"uses vesi = "<<vesi<<endl;

}

int ItalianChef::getVesi() const
{
    return vesi;
}

void ItalianChef::setVesi(int newVesi)
{
    vesi = newVesi;
}

int ItalianChef::getJauhot() const
{
    return jauhot;
}

void ItalianChef::setJauhot(int newJauhot)
{
    jauhot = newJauhot;
}
