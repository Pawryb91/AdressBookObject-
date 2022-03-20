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

    const string nazwaPlikuZAdresatami;


    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaAdresatZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);



public:
    PlikiZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    void dopiszAdresataDoPliku (Adresat adresaci);
    void zapiszWszystkichAdresatowDoPliku(vector<Adresat>adresaci);
    int pobierzZPlikuIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZPliku(int IdZalogowanegoUzytkownika);
    bool czyPlikJestPusty(fstream& plikTekstowy);

};

#endif // PLIKIZADRESATAMI_H
