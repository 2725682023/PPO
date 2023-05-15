#include <iostream>
#include "ui.h"
#include "osoby.h"
#include "Student.h"
#include "Pracownik.h"

using namespace std;

osoby osobyVector;

void menu_glowne(){
    cout << "________MENU GŁÓWNE________" << endl;
    cout << "1. Dodaj osobę" << endl;
    cout << "2. Znajdz osobę" << endl;
    cout << "3. Ile jest osób" << endl;
    cout << "4. Zakoncz program" << endl;
}
void menu_dodawania(){
    cout << "________MENU DODAWANIA OSOBY________" << endl;
    cout << "1. Dodaj studenta" << endl;
    cout << "2. Dodoaj pracownika" << endl;
    cout << "3. Wróć do menu głównego" << endl;
}
void menu_szukania(){
    cout << "________MENU SZUKANIA________" << endl;
    cout << "1. Szukaj studenta" << endl;
    cout << "2. Szukaj pracownika" << endl;
    cout << "3. Wróć do menu głównego" << endl;
}
void menu_sukania_studenta(){
    cout << "________MENU SZUKANIA STUDENTA________" << endl;
    cout << "1. Szukaj po peselu" << endl;
    cout << "2. Szukaj po indeksie" << endl;
    cout << "3. Wróć do menu szukania" << endl;
}
void menu_szukania_pracownika(){
    cout << "________MENU SZUKANIA PRACOWNIKA________" << endl;
    cout << "1. Szukaj po peselu" << endl;
    cout << "2. Szukaj po Numerze karty" << endl;
    cout << "3. Szukaj po stanowisku(w przygotowaniu)" << endl;
    cout << "4. Wróć do menu szukania" << endl;
}
void menu_ilosci(){
    cout << "________MENU ILOŚCI________" << endl;
    cout << "1. Ile jest studentów" << endl;
    cout << "2. Ile jest pracowników" << endl;
    cout << "3. Ile jest wszystkich osób" << endl;
    cout << "4. Wróć do menu głównego" << endl;
}
Student dodaj_Studenta(){
    Student s;
    cout << "Wproawdzaj dane: " << endl;
    cout << "Imie: ";
    string imie;
    cin >> imie;
    s.setImie(imie);
    cout << "Nazwisko: ";
    string nazwisko;
    cin >> nazwisko;
    s.setNazwisko(nazwisko);
    cout << "Pesel: ";
    string pesel;
    cin >> pesel;
    int x = s.setPesel(pesel);
    if(x == 1){
        cout << "Pesel za krutki" << endl;
        return s;
    }else if(x == 2){
        cout << "Pesel za dlugi" << endl;
        return s;
    }
    cout << "Indeks: ";
    int indeks;
    cin >> indeks;
    s.setIndeks(indeks);
    return s;
}
Pracownik dodaj_Pracownika(){
    Pracownik p;
    cout << "Wproawdzaj dane: " << endl;
    cout << "Imie: ";
    string imie;
    cin >> imie;
    p.setImie(imie);
    cout << "Nazwisko: ";
    string nazwisko;
    cin >> nazwisko;
    p.setNazwisko(nazwisko);
    cout << "Pesel: ";
    string pesel;
    cin >> pesel;
    int x = p.setPesel(pesel);
    if(x == 1){
        cout << "Pesel za krutki" << endl;
        return p;
    }else if(x == 2){
        cout << "Pesel za dlugi" << endl;
        return p;
    }
    cout << "Numer karty pracownika: ";
    string nrKartyPracowinka;
    cin >> nrKartyPracowinka;
    p.setNrKarty(nrKartyPracowinka);
    cout << "Stanowisko: ";
    string stanowisko;
    cin >> stanowisko;
    p.setStanowisko(stanowisko);
    return p;
}
int main() {
    ui();
    int x = 1; //zmienna sterująca pętlą
    while(x != 0){
        menu_glowne();
        int wybor1; //numer wybranej pozycji z menu
        cin >> wybor1;
        Osoba o;
        switch(wybor1){
            case 1:{
                menu_dodawania();
                int wybor2;
                cin >> wybor2;
                switch(wybor2){
                    case 1: {
                        //o = dodaj_Studenta();
                        //osobyVector.dodawanieOsoby(o);
                        Student s;
                        cout << "Wproawdzaj dane: " << endl;
                        cout << "Imie: ";
                        string imie;
                        cin >> imie;
                        s.setImie(imie);
                        cout << "Nazwisko: ";
                        string nazwisko;
                        cin >> nazwisko;
                        s.setNazwisko(nazwisko);
                        cout << "Pesel: ";
                        string pesel;
                        cin >> pesel;
                        int x = s.setPesel(pesel);
                        if(x == 1){
                            cout << "Pesel za krutki" << endl;
                        }else if(x == 2){
                            cout << "Pesel za dlugi" << endl;
                        }
                        cout << "Indeks: ";
                        int indeks;
                        cin >> indeks;
                        s.setIndeks(indeks);
                        break;
                    }
                    case 2:{
                        //o = dodaj_Pracownika();
                        //osobyVector.dodawanieOsoby(o);
                        Pracownik p;
                        cout << "Wproawdzaj dane: " << endl;
                        cout << "Imie: ";
                        string imie;
                        cin >> imie;
                        p.setImie(imie);
                        cout << "Nazwisko: ";
                        string nazwisko;
                        cin >> nazwisko;
                        p.setNazwisko(nazwisko);
                        cout << "Pesel: ";
                        string pesel;
                        cin >> pesel;
                        int x = p.setPesel(pesel);
                        if(x == 1){
                            cout << "Pesel za krutki" << endl;
                        }else if(x == 2){
                            cout << "Pesel za dlugi" << endl;
                        }
                        cout << "Numer karty pracownika: ";
                        string nrKartyPracowinka;
                        cin >> nrKartyPracowinka;
                        p.setNrKarty(nrKartyPracowinka);
                        cout << "Stanowisko: ";
                        string stanowisko;
                        cin >> stanowisko;
                        p.setStanowisko(stanowisko);
                        break;
                    }
                    case 3:{
                        break;
                    }
                    default:{
                        cout << "Operacja niemozliwa, wybierz numer z przedzialu 1-3" << endl;
                        break;
                    }
                }
                break;
            }
            case 2:{
                menu_szukania();
                int wybor2;
                cin >> wybor2;
                switch(wybor2){
                    case 1:{
                        menu_sukania_studenta();
                        int wybor3;
                        cin >> wybor3;
                        switch(wybor3){
                            case 1:{
                                cout << "Podaj pesel: ";
                                string pesel;
                                cin >> pesel;
                                cout << osobyVector.getOsobaPoPeselu(pesel).toString() << endl;
                                break;
                            }
                            case 2:{
                                cout << "Podaj indeks: ";
                                int indeks;
                                cin >> indeks;
                                cout << osobyVector.getOsobaPoId(indeks).toString() << endl;
                                break;
                            }
                            case 3:{
                                break;
                            }
                            default:{
                                cout << "Operacja niemozliwa, wybierz numer z przedzialu 1-3" << endl;
                                break;
                            }
                        }

                        break;
                    }
                    case 2:{
                        menu_szukania_pracownika();
                        int wybor3;
                        cin >> wybor3;
                        switch(wybor3){
                            case 1:{
                                cout << "Podaj pesel: ";
                                string pesel;
                                cin >> pesel;
                                cout << osobyVector.getOsobaPoPeselu(pesel).toString() << endl;
                                break;
                            }
                            case 2:{
                                cout << "Podaj numer karty pracownika: ";
                                int nrKarty;
                                cin >> nrKarty;
                                cout << osobyVector.getOsobaPoId(nrKarty).toString() << endl;
                                break;
                            }
                            case 3:{
                                cout << "Funkcja jeszcze nie gotowa" << endl;
                                break;
                            }
                            case 4:{
                                break;
                            }
                            default:{
                                cout << "Operacja niemozliwa, wybierz numer z przedzialu 1-4" << endl;
                                break;
                            }
                        }

                        break;
                    }
                    case 3:{
                        break;
                    }
                    default:{
                        cout << "Operacja niemozliwa, wybierz numer z przedzialu 1-3" << endl;
                        break;
                    }
                }
                break;
            }
            case 3:{
                menu_ilosci();
                int wybor3;
                cin >> wybor3;
                switch(wybor3){
                    case 1:{
                        cout << "Liczba studentow: " << osobyVector.getLiczbaStudentow() << endl;
                        break;
                    }
                    case 2:{
                        cout << "Liczba pracownikow: " << osobyVector.getLiczbaPracownikow() << endl;
                        break;
                    }
                    case 3:{
                        cout << "Liczba wszystkich osob: " << osobyVector.getLiczbaOsob() << endl;
                        break;
                    }
                    case 4:{
                        break;
                    }
                    default:{
                        cout << "Operacja niemozliwa, wybierz numer z przedzialu 1-4" << endl;
                        break;
                    }
                }
                break;
            }
            case 4:{
                x = 0;
                cout << "Do zobaczenia!!!" << endl;
                break;
            }
            default:
            {
                cout << "Operacja niemozliwa, wybierz numer z przedzialu 1-7" << endl;
                break;
            }
        }
    }
    return 0;
}
