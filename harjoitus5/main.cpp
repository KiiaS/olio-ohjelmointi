#include <iostream>
#include "classa.h"
#include "classb.h"
using namespace std;

int main()
{
    ClassA objectA;
    ClassB objectB;
    ClassB & refB = objectB;


    objectA.print1(objectB);
    objectA.print2(refB);
    objectA.print3();

    return 0;
}
