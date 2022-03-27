#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikiZAdresatami.h"
#include "UzytkownikManager.h"

using namespace std;

class AdresatManager{

const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
vector <Adresat> adresaci;
PlikiZAdresatami plikZAdresatami;

Adresat podajDaneNowegoAdresata();
void wyswietlDaneAdresata (Adresat adresat);
int podajIdWybranegoAdresata();
char wybierzOpcjeZMenuEdycja();
void zaktualizujDaneWybranegoAdresata(Adresat adresat);
void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);



public:

    AdresatManager (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
     : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
     adresaci = plikZAdresatami.wczytajAdresatowZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
     };

    void dodajNowegoAdresata();
    void wyswietlWszystkichAdresatow();

    void edytujAdresata();
    void usunAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
};


#endif // ADRESATMANAGER_H
