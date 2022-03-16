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

    bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaAdresatZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);



public:
    PlikiZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    void dopiszAdresataDoPliku (Adresat adresaci);
    vector <Adresat> wczytajAdresatowZPliku();
    void zapiszWszystkichAdresatowDoPliku(vector<Adresat>adresaci);
    int pobierzZPlikuIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int IdZalogowanegoUzytkownika);

};

#endif // PLIKIZADRESATAMI_H
