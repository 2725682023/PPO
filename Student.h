#ifndef PPO_STUDENT_H
#define PPO_STUDENT_H

#include <iostream>
#include "Osoba.h"


using namespace std;

class Student : public Osoba, public Identifiable{
private:
   string indeks;
   string typ = "Student";
   string id = indeks;

public:
    //Zwraca indeks
    string getIndeks();

    //Ustawia indeks
    void setIndeks(int indeks);

    //Zwraca typ
    string getTyp();

    //Zwraca id
    string getId();

    string toString();
};

#endif //PPO_STUDENT_H
