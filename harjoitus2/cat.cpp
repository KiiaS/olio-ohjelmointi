#include "cat.h"

Cat::Cat()
{
    cout<<"Cat-luokan muodostin"<<endl;
}

Cat::~Cat()
{
    cout<<"Cat-luokan tuhoaja"<<endl;
}

string Cat::getName() const
{
    return name;
}

void Cat::setName(const string &newName)
{
    name = newName;
}

void Cat::catInfo()
{
    cout<<"***************"<<endl;
    // jos color on private
    cout<<"private: Nimeni on "<<name<<" olen "<<getColor()<<endl;
    // jos color on protected
    cout<<"protected: Nimeni on "<<name<<" olen "<<color<<endl;
    cout<<"***************"<<endl;

}
