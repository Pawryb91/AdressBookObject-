#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikiZAdresatami.h"

using namespace std;

class AdresatManager{

vector <Adresat> adresaci;
int IdOstatniegoAdresata;
PlikiZAdresatami plikZAdresatami;

Adresat podajDaneNowegoAdresata(int IdZalogowanegoUzytkownika);


public:

    AdresatManager (string nazwaPlikuZAdresatami) : plikZAdresatami(nazwaPlikuZAdresatami) {};
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownika(int IdZalogowanegoUzytkownika);
    void wypiszWszytskichAdresatow (int IdZalogowanegoUzytkownika);
    void dodajNowegoAdresata(int idZalogowanegoUzytkownika);
    void ustawIdOstatniegoAdresata (int noweIdOstatniegoAdresata);
    int pobierzIdOstatniegoAdresata ();
    void wyswietlWszystkichAdresatow(vector <Adresat> adresaci);
    void wyswietlDaneAdresata(Adresat adresat);
    vector <Adresat> pobierzVector();
    void ustawVector(vector <Adresat> adresaci);
    void wyczyscVector();

};


#endif // ADRESATMANAGER_H
