#include "AdresatManager.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikManager.h"

Adresat AdresatManager::podajDaneNowegoAdresata(int idZalogowanegoUzytkownika) {
    Adresat adresat;
    MetodyPomocnicze metodyPomocnicze;
    PlikiZAdresatami plikZAdresatami("Adresaci.txt");
    UzytkownikManager uzytkownikManager("Uzytkownicy.txt");
    adresat.ustawIdAdresata(plikZAdresatami.pobierzZPlikuIdOstatniegoAdresata() + 1); //(idOstatniegoAdresata + 1);
    adresat.ustawIdUzytkownikaAdresat(idZalogowanegoUzytkownika);

    cout << "Podaj imie: ";
    adresat.ustawImieAdresata(metodyPomocnicze.wczytajLinie());
    adresat.ustawImieAdresata(metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzImieAdresata()));

    cout << "Podaj nazwisko: ";
    adresat.ustawNazwiskoAdresata(metodyPomocnicze.wczytajLinie());
    adresat.ustawNazwiskoAdresata(metodyPomocnicze.zamienPierwszaLitereNaDuzaAPozostaleNaMale(adresat.pobierzNazwiskoAdresata()));

    cout << "Podaj numer telefonu: ";
    adresat.ustawNrTelefonuAdresata(metodyPomocnicze.wczytajLinie());

    cout << "Podaj email: ";
    adresat.ustawAdresEmailAdresata(metodyPomocnicze.wczytajLinie());

    cout << "Podaj adres: ";
    adresat.ustawAdresDomowyAdresata(metodyPomocnicze.wczytajLinie());

    cout << "ustawIdUzytkownikaAdresat "  <<adresat.pobierzIdUzytkownikaAdresat() << endl;

    cout << "TUTAJ " << adresat.pobierzIdUzytkownikaAdresat() << endl;


    return adresat;
}

void AdresatManager::dodajNowegoAdresata(int idZalogowanegoUzytkownika) {
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);

    cout << adresaci.size() << endl;
    system("pause");
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    //return ++idOstatniegoAdresata;
}

void AdresatManager::ustawIdOstatniegoAdresata (int noweIdOstatniegoAdresata) {
    IdOstatniegoAdresata = noweIdOstatniegoAdresata;
}

int AdresatManager::pobierzIdOstatniegoAdresata () {
    return IdOstatniegoAdresata;
}

void AdresatManager::wyswietlWszystkichAdresatow(vector <Adresat> adresaci)
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatManager::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzIdAdresata() << endl;
    cout << "Imie:               " << adresat.pobierzImieAdresata() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwiskoAdresata() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNrTelefonuAdresata() << endl;
    cout << "Email:              " << adresat.pobierzAdresEmailAdresata() << endl;
    cout << "Adres:              " << adresat.pobierzAdresDomowyAdresata() << endl;
}

vector <Adresat> AdresatManager::wczytajAdresatowZalogowanegoUzytkownika(int IdZalogowanegoUzytkownika){
PlikiZAdresatami plikZAdresatami("Adresaci.txt");
return plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(IdZalogowanegoUzytkownika);
}

vector <Adresat> AdresatManager::pobierzVector(){
return adresaci;
}

void AdresatManager::ustawVector(vector <Adresat> Adresaci){
adresaci = Adresaci;
}
void AdresatManager::wyczyscVector(){
adresaci.clear();
}

