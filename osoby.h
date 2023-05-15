#ifndef PPO_OSOBY_H
#define PPO_OSOBY_H

#include <iostream>
#include <vector>
#include "Osoba.h"
#include "Student.h"
#include "Pracownik.h"

using namespace std;

class osoby {
protected:
    vector <Osoba> osobyVector;
public:
    void dodawanieOsoby(Osoba osoba);
    void usuwanieOsobyPoId(int id);
    void usuwanieOsobyPoPeselu(Osoba osoba);
    Osoba getOsobaPoId(int id);
    Osoba getOsobaPoPeselu(string pesel);
    int getLiczbaOsob();
    int getLiczbaStudentow();
    int getLiczbaPracownikow();
    ~osoby();


};

#endif //PPO_OSOBY_H
