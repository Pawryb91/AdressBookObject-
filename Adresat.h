#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat {

    int idAdresata;
    int idUzytkownikaAdresat;
    string imieAdresata;
    string nazwiskoAdresata;
    string nrTelefonuAdresata;
    string adresEmailAdresata;
    string adresDomowyAdresata;

public:

    void ustawIdAdresata(int noweIdAdresata);
    void ustawIdUzytkownikaAdresat(int noweIdUzytkownikaAdresat);
    void ustawImieAdresata(string noweImieAdresata);
    void ustawNazwiskoAdresata(string noweNazwiskoAdresata);
    void ustawNrTelefonuAdresata(string noweNrTelefonuAdresata);
    void ustawAdresEmailAdresata(string noweAdresEmailAdresata);
    void ustawAdresDomowyAdresata(string noweAdresDomowyAdresata);

    int pobierzIdAdresata();
    int pobierzIdUzytkownikaAdresat();
    string pobierzImieAdresata();
    string pobierzNazwiskoAdresata();
    string pobierzNrTelefonuAdresata();
    string pobierzAdresEmailAdresata();
    string pobierzAdresDomowyAdresata();

};
#endif // ADRESAT_H
