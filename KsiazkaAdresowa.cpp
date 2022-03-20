#include "KsiazkaAdresowa.h"
#include <iostream>

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    cout << "REJESTRACJA "<< endl << endl;
uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszytskichUzytkownikow(){
 uzytkownikManager.wypiszWszytskichUzytkownikow();
}

KsiazkaAdresowa::logowanieUzytkownika(){
system("cls");
cout << "LOGOWANIE "<< endl << endl;
cout << "PRESS ENTER TO CONTINUE..." << endl;
cin.ignore();
uzytkownikManager.ustawIdZalogowanegoUzytkownika(uzytkownikManager.logowanieUzytkownika());
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(){

uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika(uzytkownikManager.pobierzIdZalogowanegoUzytkownika());
}

int KsiazkaAdresowa::pobierzIdZalogowaneUzytkownika(){
return uzytkownikManager.pobierzIdZalogowanegoUzytkownika();
}

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
}


