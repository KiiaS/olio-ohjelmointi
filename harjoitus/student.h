#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public:
    Student();
    Student(string fn, string ln);
    ~Student();

    string getFname() const;
    void setFname(const string &newFname);

    string getLname() const;
    void setLname(const string &newLname);

    void studentInfo();
private:
    string fname;
    string lname;
};

#endif // STUDENT_H
