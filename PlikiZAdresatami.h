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
    int IdOstatniegoAdresata;

<<<<<<< HEAD
    bool czyPlikJestPusty(fstream& plikTekstowy);
=======

>>>>>>> refs/remotes/origin/main
    string zamienDaneAdresataNaLinieZDanymiOddzielonaPionowymiKreskami(Adresat adresat);
    string pobierzLiczbe(string tekst, int pozycjaZnaku);
    Adresat pobierzDaneAdresata(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaAdresatZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);



public:
<<<<<<< HEAD
    PlikiZAdresatami(string nazwaPlikuZAdresatami) : NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        IdOstatniegoAdresata = 0;
    };
    bool dopiszAdresataDoPliku (Adresat adresaci);
    int pobierzIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZPliku(int idZalogowanegoUzytkownika);

=======
    PlikiZAdresatami(string NAZWAPLIKUZADRESATAMI) : nazwaPlikuZAdresatami(NAZWAPLIKUZADRESATAMI){};
    void dopiszAdresataDoPliku (Adresat adresaci);
    void zapiszWszystkichAdresatowDoPliku(vector<Adresat>adresaci);
    int pobierzZPlikuIdOstatniegoAdresata();
    vector<Adresat> wczytajAdresatowZPliku(int IdZalogowanegoUzytkownika);
    bool czyPlikJestPusty(fstream& plikTekstowy);
>>>>>>> refs/remotes/origin/main

};

#endif // PLIKIZADRESATAMI_H
