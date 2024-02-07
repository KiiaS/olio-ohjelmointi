#ifndef CAT_H
#define CAT_H
#include "animal.h"

class Cat: public Animal
{
public:
    Cat();
    ~Cat();
    string getName() const;
    void setName(const string &newName);
    void catInfo();

private:
    string name;

};

#endif // CAT_H
