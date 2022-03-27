#ifndef PLIKIZADRESATAMI_H
#define PLIKIZADRESATAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Adresat.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikiZAdresatami{

    const string NAZWA_PLIKU_Z_ADRESATAMI;
    string NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI;
    int IdOstatniegoAdresata;

    bool czyPlikJestPusty(fstream& plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaAdresatZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    void usunPlik(string nazwaPlikuZRozszerzeniem);
    void zmienNazwePliku(string staraNazwa, string nowaNazwa);



public:
    PlikiZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        IdOstatniegoAdresata = 0;
        NAZWA_TYMCZASOWEGO_PLIKU_Z_ADRESATAMI = "temp" + nazwaPlikuZAdresatami;
    };
    bool dopiszAdresataDoPliku (Adresat adresaci);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);
    void edytujWybranaLinieWPliku(Adresat adresat);
    void usunWybranaLinieWPliku(int idUsuwanegoAdresata);

};

#endif // PLIKIZADRESATAMI_H
