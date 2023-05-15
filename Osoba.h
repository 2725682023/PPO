#ifndef PPO_OSOBA_H
#define PPO_OSOBA_H

#include <iostream>
#include <vector>
#include <string>
#include "Identifiable.h"

using namespace std;

class Osoba {
protected:
    string imie;
    string nazwisko;
    string pesel;
    int wiek;

    //sprawdza zgodność długości peselu
    int checkPesel(string pesel);

    //ustawia wiek
    void setWiek(string pesel);
public:
    //odczytanie imienia
    string getImie();

    //ustawianie imienia
    void setImie(string imie);

    //odczutanie nazwiska
    string getNazwisko();

    //ustawianie nazwiska
    void setNazwisko(string nazwisko);

    //Zwracanie peselu
    string getPesel();

    //Sprawdza czy pesel ma poprawną długość i jeśli tak to go ustawia
    int setPesel(string pesel);

    //zwraca wiek
    int getWiek();

    //Zwraca typ
    virtual string getTyp();

    //Zwraca id
    virtual string getId();

    //Zwraca stringa z danymi osoby
    virtual string toString();

    //Destruktor
    virtual ~Osoba();

};


#endif //PPO_OSOBA_H
