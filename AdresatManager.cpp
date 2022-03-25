#include "AdresatManager.h"
#include "MetodyPomocnicze.h"
#include "UzytkownikManager.h"
#include "Uzytkownik.h"

Adresat AdresatManager::podajDaneNowegoAdresata() {
    Adresat adresat;

    string imie, nazwisko,numerTelefonu,email,adres;
    adresat.ustawIdAdresata((plikZAdresatami.pobierzIdOstatniegoAdresata() + 1)); //(idOstatniegoAdresata + 1);
    adresat.ustawIdUzytkownikaAdresat(ID_ZALOGOWANEGO_UZYTKOWNIKA);

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
    adres = MetodyPomocnicze::wczytajLinie();

    adresat.ustawImieAdresata(imie);
    adresat.ustawNazwiskoAdresata(nazwisko);
    adresat.ustawNrTelefonuAdresata(numerTelefonu);
    adresat.ustawAdresEmailAdresata(email);
    adresat.ustawAdresDomowyAdresata(adres);

    return adresat;
}

void AdresatManager::dodajNowegoAdresata() {

    Adresat adresat;
    system("cls");

    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;

    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    if(plikZAdresatami.dopiszAdresataDoPliku(adresat))
        cout << "Nowy adresat zostal dodany" << endl;
    else
        cout << "Blad. Nie udalo sie dodac nowego adresata do pliku." << endl;
    system("pause");
}

void AdresatManager::wyswietlWszystkichAdresatow()
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

