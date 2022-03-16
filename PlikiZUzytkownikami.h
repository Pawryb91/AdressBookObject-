#ifndef PLIKIZUZYTKOWNIKAMI_H
#define PLIKIZUZYTKOWNIKAMI_H

#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Uzytkownik.h"
#include "MetodyPomocnicze.h"

using namespace std;

class PlikiZUzytkownikami{

    const string nazwaPlikuZUzytkownikami;

    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);

public:
    PlikiZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI) : nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
    void dopiszUzytkownikaDoPliku (Uzytkownik uzytkownik);
    vector <Uzytkownik> wczytajUzytkownikowZPliku();
    void zapiszWszystkichUzytkownikowDoPliku(vector<Uzytkownik>uzytkownicy);

};

#endif // PLIKIZUZYTKOWNIKAMI_H
