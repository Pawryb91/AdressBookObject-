#include "KsiazkaAdresowa.h"

void KsiazkaAdresowa::rejestracjaUzytkownika(){
uzytkownikManager.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszytskichUzytkownikow(){
 uzytkownikManager.wypiszWszytskichUzytkownikow();
}

int KsiazkaAdresowa::logowanieUzytkownika(){
 return uzytkownikManager.logowanieUzytkownika();
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika){
uzytkownikManager.zmianaHaslaZalogowanegoUzytkownika(idZalogowanegoUzytkownika);
}
void KsiazkaAdresowa::ustawIdZalogowanegoUzytkownika (int Id){
 uzytkownikManager.ustawIdZalogowanegoUzytkownika(Id);
}

int KsiazkaAdresowa::pobierzIdZalogowaneUzytkownika(){
return uzytkownikManager.pobierzIdZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika(){
uzytkownikManager.wylogujUzytkownika();
adresatManager.wyczyscVector();
}

void KsiazkaAdresowa::dodajNowegoAdresata(int idZalogowanegoUzytkownika){
adresatManager.dodajNowegoAdresata(idZalogowanegoUzytkownika);
}
void KsiazkaAdresowa::wyswieltAdresatow (vector <Adresat> adresaci){
adresatManager.wyswietlWszystkichAdresatow(adresaci);
}


