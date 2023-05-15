#include <iostream>
#include "osoby.h"

using namespace std;

void osoby::dodawanieOsoby(Osoba osoba) {
    osobyVector.push_back(osoba);
}

void osoby::usuwanieOsobyPoId(int indeks) {
    osobyVector.erase(osobyVector.begin() + indeks);
}

void osoby::usuwanieOsobyPoPeselu(Osoba osoba) {
    for (int i = 0; i < osobyVector.size(); i++) {
        if (osobyVector[i].getPesel() == osoba.getPesel()) {
            osobyVector.erase(osobyVector.begin() + i);
        }
    }
}

Osoba osoby::getOsobaPoId(int indeks) {
    return osobyVector[indeks];
}

Osoba osoby::getOsobaPoPeselu(string pesel) {
    Osoba osoba;
    for (int i = 0; i < osobyVector.size(); i++) {
        if (osobyVector[i].getPesel() == pesel) {
            osoba = osobyVector[i];
        }
    }
    return osoba;
}

int osoby::getLiczbaOsob() {
    return osobyVector.size();
}

int osoby::getLiczbaStudentow() {
    int liczbaStudentow = 0;
    for (int i = 0; i < osobyVector.size(); i++) {
        if (osobyVector[i].getTyp() == "Student") {
            liczbaStudentow++;
        }
    }
    return liczbaStudentow;
}

int osoby::getLiczbaPracownikow() {
    int liczbaPracownikow = 0;
    for (int i = 0; i < osobyVector.size(); i++) {
        if (osobyVector[i].getTyp() == "Pracownik") {
            liczbaPracownikow++;
        }
    }
    return liczbaPracownikow;
}

osoby::~osoby() {
}
