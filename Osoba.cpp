#include <iostream>
#include "Osoba.h"

using namespace std;

int Osoba::checkPesel(string pesel) {
    if(pesel.length() == 11){
        pesel = pesel;
        return 0;
    }else{
        if(pesel.length() < 11){
            return 1; // pesel za krutki
        }else {
            return 2; // pesel za dlugi
        }
    }
};
void Osoba::setWiek(string pesel) {
    this->wiek = 2020 - (1900 + (pesel[0] - '0') * 10 + (pesel[1] - '0'));
}
int Osoba::getWiek() {
    return wiek;
}
int Osoba::setPesel(string pesel) {
    int check = checkPesel(pesel);
    if(check == 0) {
        this->pesel = pesel;
        setWiek(pesel);
    } else {
        cout << "Niepoprawny pesel!!!" << endl;
    }
    return check;
}
string Osoba::getPesel(){
    return pesel;
}
string Osoba::getNazwisko() {
    return nazwisko;
}
void Osoba::setNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
}
string Osoba::getImie() {
    return imie;
}
void Osoba::setImie(string imie) {
    this->imie = imie;
}
string Osoba::toString() {
    return "Imie: " + imie + "\nNazwisko: " + nazwisko + "\nPesel: " + pesel + "\nWiek: " + to_string(wiek);
}
Osoba::~Osoba(){

}
