#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ~ItalianChef();
    ItalianChef(string s, int a, int b);
    string getName();
    void makePasta();


    int getVesi() const;
    void setVesi(int newVesi);

    int getJauhot() const;
    void setJauhot(int newJauhot);

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
