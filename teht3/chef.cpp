#include "chef.h"

Chef::Chef()
{

}

Chef::~Chef()
{
    cout<<"Chef "<<name<<"destruktori"<<endl;
}

Chef::Chef(string s)
{
    name = s;
    cout<<"Chef "<<name<<"konstruktori"<<endl;
}

void Chef::makeSalad()
{
    cout<<"Chef "<<name<<"makes salad"<<endl;
}

void Chef::makeSoup()
{
    cout<<"Chef "<<name<<"makes soup"<<endl;
}
