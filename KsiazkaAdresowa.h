#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;
    Adresat adresat;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami),adresatManager(nazwaPlikuZAdresatami){
    uzytkownikManager.wczytajUzytkownikowZPliku();
    //adresatManager.utworzPlikZDanymiAdresatow();
};

    void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    int pobierzIdZalogowaneUzytkownika();
    void wylogujUzytkownika();
    void dodajNowegoAdresata();
    void wyswietlAdresatow ();
    vector <Adresat> wczytajAdresatowZPliku();






};
#endif // KSIAZKAADRESOWA_H
