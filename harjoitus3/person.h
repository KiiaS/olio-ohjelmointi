#ifndef PERSON_H
#define PERSON_H
#include "cat.h"

#include <iostream>

using namespace std;

class Person
{
public:
    Person();
    Person(string fn, string ln);
    ~Person();
    void setFname(const string &newFname);
    void setLname(const string &newLname);
    void personInfo();
    void setCatData();


private:
    string fname;
    string lname;
    Cat objectCat1;
    //luodaan Cat luokan olio
    //eli kyseessä vahva kooste=composition
};

#endif // PERSON_H
