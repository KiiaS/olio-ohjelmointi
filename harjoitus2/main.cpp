#include "cat.h"
#include <iostream>

using namespace std;

int main()
{
    // Cat objectCat;
    // objectCat.setColor("musta");
    // cout<<"Color is "<<objectCat.getColor()<<endl;

    Cat *objectCat2=new Cat;
    objectCat2 ->setColor("oranssi");
    //cout<<"Color is "<<objectCat2->getColor()<<endl;
    objectCat2 ->setName("Karvinen");
    objectCat2 ->catInfo();
    delete objectCat2;
    objectCat2=nullptr;
    return 0;
}