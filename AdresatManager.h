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
<<<<<<< HEAD

Adresat podajDaneNowegoAdresata();
void wyswietlDaneAdresata (Adresat adresat);
=======
Adresat podajDaneNowegoAdresata(int IdZalogowanegoUzytkownika);

>>>>>>> refs/remotes/origin/main


public:

<<<<<<< HEAD
    AdresatManager (string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
     : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
     adresaci = plikZAdresatami.wczytajAdresatowZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
     };

    void dodajNowegoAdresata();
    void wyswietlWszystkichAdresatow();
=======
    AdresatManager (string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    vector <Adresat> wczytajAdresatowZPliku(int IdZalogowanegoUzytkownika);
    void wypiszWszytskichAdresatow (int IdZalogowanegoUzytkownika);
    void dodajNowegoAdresata(int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata (int noweIdOstatniegoAdresata);
    int pobierzIdOstatniegoAdresata ();
    void wyswietlWszystkichAdresatow(vector <Adresat> adresaci);
    void wyswietlDaneAdresata(Adresat adresat);
    vector <Adresat> pobierzVector();
    void ustawVector(vector <Adresat> adresaci);
    void wyczyscVector();
    void utworzPlikZDanymiAdresatow();
>>>>>>> refs/remotes/origin/main

};


#endif // ADRESATMANAGER_H
