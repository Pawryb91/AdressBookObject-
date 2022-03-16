#include <iostream>

#include "KsiazkaAdresowa.h"

using namespace std;


int main()
{
    Adresat adresat;
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    PlikiZUzytkownikami plik("Uzytkownicy.txt");
    UzytkownikManager uzytkownikManager ("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();

    ksiazkaAdresowa.rejestracjaUzytkownika();

    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    cin.ignore();
    ksiazkaAdresowa.ustawIdZalogowanegoUzytkownika(ksiazkaAdresowa.logowanieUzytkownika());
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika(ksiazkaAdresowa.pobierzIdZalogowaneUzytkownika());
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();

    AdresatManager adresatManager("Adresaci.txt");

    adresatManager.ustawVector(adresatManager.wczytajAdresatowZalogowanegoUzytkownika(ksiazkaAdresowa.pobierzIdZalogowaneUzytkownika()));

    ksiazkaAdresowa.wyswieltAdresatow(adresatManager.pobierzVector());
    ksiazkaAdresowa.dodajNowegoAdresata(ksiazkaAdresowa.pobierzIdZalogowaneUzytkownika());
    ksiazkaAdresowa.wyswieltAdresatow(adresatManager.pobierzVector());
    ksiazkaAdresowa.wylogujUzytkownika();
    adresatManager.ustawVector(adresatManager.wczytajAdresatowZalogowanegoUzytkownika(ksiazkaAdresowa.pobierzIdZalogowaneUzytkownika()));
    ksiazkaAdresowa.wyswieltAdresatow(adresatManager.pobierzVector());
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();


    //ksiazkaAdresowa.wylogujUzytkownika();



    return 0;
}
