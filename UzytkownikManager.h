#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include <windows.h>

#include "Uzytkownik.h"
#include "PlikiZUzytkownikami.h"

using namespace std;

class UzytkownikManager{

    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
    PlikiZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikManager (string nazwaPlikuZUzytkownikami) : plikZUzytkownikami(nazwaPlikuZUzytkownikami) {};
    void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void ustawIdZalogowanegoUzytkownika (int Id);
    int pobierzIdZalogowanegoUzytkownika ();
    void wylogujUzytkownika();
};
#endif // UZYTKOWNIKMANAGER_H
