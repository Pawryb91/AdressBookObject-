#ifndef PLIKIZADRESATAMI_H
#define PLIKIZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"
#include "PlikTekstowy.h"

using namespace std;

class PlikiZAdresatami : public PlikTekstowy {

    string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int IdOstatniegoAdresata;

    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaAdresatZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);
    int pobierIdOstatniegoAdresataZPliku();


public:
    PlikiZAdresatami(string nazwaPliku) : PlikTekstowy(nazwaPliku){
        IdOstatniegoAdresata = 0;
        NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "temp" + pobierzNazwePliku();
    };
    bool dopiszAdresataDoPliku (Adresat adresaci);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void edytujWybranaLinieWPliku(Adresat adresat);
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);

};

#endif // PLIKIZADRESATAMI_H
