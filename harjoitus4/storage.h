#ifndef STORAGE_H
#define STORAGE_H
#include "bicycle.h"
#include "fatbike.h"
#include <iostream>
using namespace std;

class Storage
{
public:
    Storage();
    ~Storage();
private:
    Bicycle a;
    Bicycle b;
    Bicycle c;
    Fatbike d;
    Fatbike e;
};

#endif // STORAGE_H
