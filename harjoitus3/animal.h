#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

using namespace std;

class Animal
{
public:
    Animal();
    ~Animal();
    string getColor() const;
    void setColor(const string &newColor);

private:
    //string color;

protected:
    string color;
};

#endif // ANIMAL_H
