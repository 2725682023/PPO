#include <iostream>
#include "Student.h"

using namespace std;

string Student::getIndeks() {
    return indeks;
}
void Student::setIndeks(int indeks) {
    this->indeks = indeks;
}
string Student::getTyp() {
    return typ;
}
string Student::getId() {
    return id;
}
string Student::toString() {
    return "Student:\nImie: " + getImie() + "\nNazwisko: " + getNazwisko() + "\nWiek: " + to_string(getWiek()) +  "\nPesel: " + getPesel() + "\nIndeks: " + getIndeks();
}
