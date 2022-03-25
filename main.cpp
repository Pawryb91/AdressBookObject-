#include <iostream>
#include <cstdlib>

#include "KsiazkaAdresowa.h"

using namespace std;


int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
<<<<<<< HEAD
    char wybor;

    while (true)
    {
        if (!ksiazkaAdresowa.czyUzytkownikJestZalogowany())
        {
            wybor = ksiazkaAdresowa.wyborOpcjiZMenuGlownego();
=======

    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
    ksiazkaAdresowa.wypiszWszytskichUzytkownikow();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.dodajNowegoAdresata();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.dodajNowegoAdresata();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.wylogujUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.dodajNowegoAdresata();
    ksiazkaAdresowa.wyswietlAdresatow();
    ksiazkaAdresowa.wylogujUzytkownika();
    ksiazkaAdresowa.wyswietlAdresatow();
>>>>>>> refs/remotes/origin/main

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                ksiazkaAdresowa.logowanieUzytkownika();
                break;
            case '9':
                exit(0);
                break;
            default:
                cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                system("pause");
                break;
            }
        }
        else
        {
            wybor = ksiazkaAdresowa.wyborOpcjiZMenuUzytkownika();
            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodajNowegoAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyswietlAdresatow();
                break;
            case '3':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '9':
                ksiazkaAdresowa.wylogujUzytkownika();
                break;
            }
        }
    }
    return 0;
}
