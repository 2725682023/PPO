#include "Pracownik.h"

using namespace std;

string Pracownik::getStanowisko() {
    return stanowisko;
}
void Pracownik::setStanowisko(string stanowisko){
    this->stanowisko = stanowisko;
}
string Pracownik::getNrKarty() {
    return nrKartyPracowinka;
}
void Pracownik::setNrKarty(string nrKartyPracownika) {
    this->nrKartyPracowinka = nrKartyPracownika;
}
string Pracownik::getTyp() {
    return typ;
}
string Pracownik::getId() {
    return id;
}
string Pracownik::toString() {
    return "Pracownik:\nImie: " + getImie() + "\nNazwisko: " + getNazwisko() + "\nWiek: " + to_string(getWiek()) + "\nPesel: " + getPesel() + "\nStanowisko: " + getStanowisko() + "\nNumer karty pracownika: " + getNrKarty();
}
