#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    ItalianChef kokki2("Mario ", 1, 2);
    kokki2.setJauhot(250);
    kokki2.setVesi(100);
    kokki2.makePasta();


    return 0;
}
