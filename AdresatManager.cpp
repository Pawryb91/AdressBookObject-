#include "AdresatManager.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikManager.h"
#include "Uzytkownik.h"

Adresat AdresatManager::podajDaneNowegoAdresata() {
    Adresat adresat;
<<<<<<< HEAD
    string imie, nazwisko,numerTelefonu,email,adres;
    adresat.ustawIdAdresata((plikZAdresatami.pobierzIdOstatniegoAdresata() + 1)); //(idOstatniegoAdresata + 1);
    adresat.ustawIdUzytkownikaAdresat(ID_ZALOGOWANEGO_UZYTKOWNIKA);
=======
    MetodyPomocnicze metodyPomocnicze;
    PlikiZAdresatami plikZAdresatami("Adresaci.txt");
    UzytkownikManager uzytkownikManager("Uzytkownicy.txt");
    adresat.ustawIdAdresata((plikZAdresatami.pobierzZPlikuIdOstatniegoAdresata() + 1)); //(idOstatniegoAdresata + 1);
    adresat.ustawIdUzytkownikaAdresat(idZalogowanegoUzytkownika);
>>>>>>> refs/remotes/origin/main

    cout << "Podaj imie: ";
    imie = MetodyPomocnicze::wczytajLinie();
    imie = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(imie);

    cout << "Podaj nazwisko: ";
    nazwisko = MetodyPomocnicze::wczytajLinie();
    nazwisko = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(nazwisko);

    cout << "Podaj numer telefonu: ";
    numerTelefonu = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj email: ";
    email = MetodyPomocnicze::wczytajLinie();

    cout << "Podaj adres: ";
<<<<<<< HEAD
    adres = MetodyPomocnicze::wczytajLinie();

    adresat.ustawImieAdresata(imie);
    adresat.ustawNazwiskoAdresata(nazwisko);
    adresat.ustawNrTelefonuAdresata(numerTelefonu);
    adresat.ustawAdresEmailAdresata(email);
    adresat.ustawAdresDomowyAdresata(adres);
=======
    adresat.ustawAdresDomowyAdresata(metodyPomocnicze.wczytajLinie());

>>>>>>> refs/remotes/origin/main

    return adresat;
}

<<<<<<< HEAD
void AdresatManager::dodajNowegoAdresata() {
=======
void AdresatManager::dodajNowegoAdresata(int idZalogowanegoUzytkownika) {
>>>>>>> refs/remotes/origin/main

    Adresat adresat;
    system("cls");

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;

<<<<<<< HEAD
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zostal dodany" << endl;
    else
        cout << "Blad. Nie udalo sie dodac nowego adresata do pliku." << endl;
    system("pause");
=======
    adresat = podajDaneNowegoAdresata(idZalogowanegoUzytkownika);

    adresaci.push_back(adresat);

    plikZAdresatami.dopiszAdresataDoPliku(adresat);
>>>>>>> refs/remotes/origin/main
}


<<<<<<< HEAD
void AdresatManager::wyswietlWszystkichAdresatow()
=======
int AdresatManager::pobierzIdOstatniegoAdresata () {
    return AdresatManager::IdOstatniegoAdresata;
}

void AdresatManager::wyswietlWszystkichAdresatow(vector <Adresat> adresaci)
>>>>>>> refs/remotes/origin/main
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

<<<<<<< HEAD
=======
vector <Adresat> AdresatManager::wczytajAdresatowZPliku(int IdZalogowanegoUzytkownika){
PlikiZAdresatami plikZAdresatami("Adresaci.txt");
return plikZAdresatami.wczytajAdresatowZPliku(IdZalogowanegoUzytkownika);
}
>>>>>>> refs/remotes/origin/main

//void AdresatManager::utworzPlikZDanymiAdresatow(){
//plikZAdresatami.utworzPlikZDanymiAdresatow();
//}

//void AdresatManager::utworzPlikZDanymiAdresatow(){
//plikZAdresatami.utworzPlikZDanymiAdresatow();
//}

