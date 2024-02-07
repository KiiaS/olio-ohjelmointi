#include <iostream>
#include "student.h"


using namespace std;
/*  esimerkki Student luokast, jolla private tyyppiset jäsenmuuttujat
    fname, lname ja niille public tyyppiset Getter ja Setter metodit
    sekä public tyyppinen metodi studentInfo, joka tulostaa
    tiedot
*/

int main()
{
    // luodaan Student luokasta olio pinoon
    Student objectStudent1;
    objectStudent1.setFname("Teppo");
    objectStudent1.setLname("Testi");
    objectStudent1.studentInfo();

    Student objectStudent2("Aino", "Joki");
    objectStudent2.studentInfo();

    //luodaan Student luokasta olio kekoon
    Student *objectStudent3;
    objectStudent3=new Student("Liisa","Virta");
    objectStudent3->studentInfo();
    delete objectStudent3;
    objectStudent3=nullptr;



    return 0;
}

