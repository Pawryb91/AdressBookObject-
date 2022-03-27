#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikManager uzytkownikManager;
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPliku,string nazwaPlikuZAdresatami)
        : uzytkownikManager(nazwaPliku), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){

    adresatManager = NULL;
};
~KsiazkaAdresowa(){
delete adresatManager;
adresatManager = NULL;
}

    void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();

    void wylogujUzytkownika();
    void dodajNowegoAdresata();
    void wyswietlAdresatow ();
    char wyborOpcjiZMenuGlownego();
    bool czyUzytkownikJestZalogowany();
    char wyborOpcjiZMenuUzytkownika();
    void edytujAdresata();
    void usunAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();

};
#endif // KSIAZKAADRESOWA_H
