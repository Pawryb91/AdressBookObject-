#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "AdresatManager.h"

using namespace std;

class KsiazkaAdresowa{

    UzytkownikManager uzytkownikManager;
    AdresatManager adresatManager;
public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami) : uzytkownikManager(nazwaPlikuZUzytkownikami),adresatManager(nazwaPlikuZAdresatami){
    uzytkownikManager.wczytajUzytkownikowZPliku();
    //adresatManager.wczytajAdresatowZpliku();
};

    void rejestracjaUzytkownika();
    void wypiszWszytskichUzytkownikow();
    int logowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika);
    void ustawIdZalogowanegoUzytkownika(int Id);
    int pobierzIdZalogowaneUzytkownika();
    void wylogujUzytkownika();
    void dodajNowegoAdresata(int idZalogowanegoUzytkownika);
    void wyswieltAdresatow (vector <Adresat> adresaci);






};
#endif // KSIAZKAADRESOWA_H
