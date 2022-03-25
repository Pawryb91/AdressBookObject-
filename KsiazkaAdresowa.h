#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikManager uzytkownikManager;
<<<<<<< HEAD
    AdresatManager *adresatManager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami)
        : uzytkownikManager(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){

    adresatManager = NULL;
=======
    AdresatManager adresatManager;
    Adresat adresat;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami),adresatManager(nazwaPlikuZAdresatami){
    uzytkownikManager.wczytajUzytkownikowZPliku();
    //adresatManager.utworzPlikZDanymiAdresatow();
>>>>>>> refs/remotes/origin/main
};
~KsiazkaAdresowa(){
delete adresatManager;
adresatManager = NULL;
}

    void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
<<<<<<< HEAD
    void wylogujUzytkownika();
    void dodajNowegoAdresata();
    void wyswietlAdresatow ();
    char wyborOpcjiZMenuGlownego();
    bool czyUzytkownikJestZalogowany();
    char wyborOpcjiZMenuUzytkownika();
=======
    int pobierzIdZalogowaneUzytkownika();
    void wylogujUzytkownika();
    void dodajNowegoAdresata();
    void wyswietlAdresatow ();
    vector <Adresat> wczytajAdresatowZPliku();
>>>>>>> refs/remotes/origin/main






};
#endif // KSIAZKAADRESOWA_H
