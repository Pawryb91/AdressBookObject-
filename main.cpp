#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;


int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.dodajNowegoAdresata();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.dodajNowegoAdresata();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.wylogujUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajNowegoAdresata();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.wylogujUzytkownika();
    ksiazkaAdresowa.wyswietlAdresatow();

    return 0;
}
