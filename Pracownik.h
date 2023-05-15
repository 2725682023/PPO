#ifndef PPO_PRACOWNIK_H
#define PPO_PRACOWNIK_H

#include "Osoba.h"

using namespace std;

class Pracownik : public Osoba, public Identifiable{
private:
    string stanowisko;
    string nrKartyPracowinka;
    string typ = "Pracownik";
    string id = nrKartyPracowinka;

public:
    //Zwraca stanowisko
    string getStanowisko();

    //Ustawia stanowisko
    void setStanowisko(string stanowisko);

    //Zwraca nr karty pracownika
    string getNrKarty();

    //Ustawia nr karty pracownika
    void setNrKarty(string nrKartyPracownika);

    //Zwraca typ
    string getTyp();

    //Zwraca id
    string getId();

    string toString();
};


#endif //PPO_PRACOWNIK_H
