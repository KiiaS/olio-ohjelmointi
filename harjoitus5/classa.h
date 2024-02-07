#ifndef CLASSA_H
#define CLASSA_H
#include "classb.h"
#include <iostream>
using namespace std;

class ClassA
{
public:
    ClassA();
    void print1(ClassB B);
    void print2(ClassB &B);
    void print3();
};

#endif // CLASSA_H
