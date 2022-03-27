#include "KsiazkaAdresowa.h"
#include <iostream>


void KsiazkaAdresowa::rejestracjaUzytkownika(){
    cout << "REJESTRACJA "<< endl << endl;
uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszytskichUzytkownikow() {
    uzytkownikManager.wypiszWszytskichUzytkownikow();
}

KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikManager.logowanieUzytkownika();
    if (uzytkownikManager.czyUzytkownikJestZalogowany()) {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){

uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

void KsiazkaAdresowa::wylogujUzytkownika() {
    uzytkownikManager.wylogujUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
    cout << "Wylogowano uzytkownika" << endl;
    system("pause");
}

void KsiazkaAdresowa::dodajNowegoAdresata() {
    if (uzytkownikManager.czyUzytkownikJestZalogowany())
    {
        adresatManager -> dodajNowegoAdresata();
    }
    else{
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}
void KsiazkaAdresowa::wyswietlAdresatow () {
    if(uzytkownikManager.czyUzytkownikJestZalogowany()){
     adresatManager -> wyswietlWszystkichAdresatow();
    }
}

char KsiazkaAdresowa::wyborOpcjiZMenuGlownego() {

    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}


char KsiazkaAdresowa::wyborOpcjiZMenuUzytkownika(){

char wybor;

      system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;

}

void KsiazkaAdresowa::edytujAdresata(){
adresatManager -> edytujAdresata();
}

void KsiazkaAdresowa::usunAdresata(){
adresatManager -> usunAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu(){
adresatManager -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku(){
adresatManager -> wyszukajAdresatowPoNazwisku();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
return uzytkownikManager.czyUzytkownikJestZalogowany();
}

