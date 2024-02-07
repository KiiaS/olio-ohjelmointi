#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    Person objectPerson1("Matti","Mainio");
    objectPerson1.setCatData();
    objectPerson1.personInfo();

    return 0;
}
