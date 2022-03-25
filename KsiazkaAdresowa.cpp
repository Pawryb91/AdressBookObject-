#include "KsiazkaAdresowa.h"
#include <iostream>

<<<<<<< HEAD
void KsiazkaAdresowa::rejestracjaUzytkownika() {
    cout << "REJESTRACJA "<< endl << endl;
    uzytkownikManager.rejestracjaUzytkownika();
=======
void KsiazkaAdresowa::rejestracjaUzytkownika(){
    cout << "REJESTRACJA "<< endl << endl;
uzytkownikManager.rejestracjaUzytkownika();
>>>>>>> refs/remotes/origin/main
}

void KsiazkaAdresowa::wypiszWszytskichUzytkownikow() {
    uzytkownikManager.wypiszWszytskichUzytkownikow();
}

<<<<<<< HEAD
KsiazkaAdresowa::logowanieUzytkownika() {

    uzytkownikManager.logowanieUzytkownika();
    if (uzytkownikManager.czyUzytkownikJestZalogowany()) {
        adresatManager = new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
    }

}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {

    uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
=======
KsiazkaAdresowa::logowanieUzytkownika(){
system("cls");
cout << "LOGOWANIE "<< endl << endl;
cout << "PRESS ENTER TO CONTINUE..." << endl;
cin.ignore();
uzytkownikManager.ustawIdZalogowanegoUzytkownika(uzytkownikManager.logowanieUzytkownika());
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){

uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
>>>>>>> refs/remotes/origin/main
}

void KsiazkaAdresowa::wylogujUzytkownika() {
    uzytkownikManager.wylogujUzytkownika();
    delete adresatManager;
    adresatManager = NULL;
    cout << "Wylogowano uzytkownika" << endl;
    system("pause");
}

<<<<<<< HEAD
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
=======
void KsiazkaAdresowa::wylogujUzytkownika(){
uzytkownikManager.wylogujUzytkownika();
adresatManager.wyczyscVector();
cout << "Wylogowano uzytkownika" << endl;
system("pause");
}

void KsiazkaAdresowa::dodajNowegoAdresata(){
adresatManager.dodajNowegoAdresata(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}
void KsiazkaAdresowa::wyswietlAdresatow (){
adresatManager.ustawVector(adresatManager.wczytajAdresatowZPliku(uzytkownikManager.pobierzIdZalogowanegoUzytkownika()));
adresatManager.wyswietlWszystkichAdresatow(adresatManager.pobierzVector());
}

vector <Adresat> KsiazkaAdresowa::wczytajAdresatowZPliku(){

adresatManager.wczytajAdresatowZPliku(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
>>>>>>> refs/remotes/origin/main
}

char KsiazkaAdresowa::wyborOpcjiZMenuUzytkownika(){

char wybor;

    system("cls");
    cout << "    >>> MENU  UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyswietl adresatow" << endl;
    cout << "3. Zmien haslo" << endl;
    cout << "9. Wyloguj" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;

}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
return uzytkownikManager.czyUzytkownikJestZalogowany();
}
