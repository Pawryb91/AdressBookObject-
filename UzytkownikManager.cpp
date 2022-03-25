#include "UzytkownikManager.h"
#include "PlikiZAdresatami.h"
#include "AdresatManager.h"

void UzytkownikManager::rejestracjaUzytkownika(){

    Uzytkownik uzytkownik = podajDaneNowegoUzytkownika();

    uzytkownicy.push_back(uzytkownik);
    plikZUzytkownikami.dopiszUzytkownikaDoPliku(uzytkownik);

    cout << endl << "Konto zalozono pomyslnie" << endl << endl;
    system("pause");
}

Uzytkownik UzytkownikManager::podajDaneNowegoUzytkownika()
{
    Uzytkownik uzytkownik;

    uzytkownik.ustawId(pobierzIdNowegoUzytkownika());
    string login;
    do
    {
        cout << "Podaj login: ";
        cin >> login;
        uzytkownik.ustawLogin(login);
    } while (czyIstniejeLogin(uzytkownik.pobierzLogin()) == true);

    string haslo;
    cout << "Podaj haslo: ";
    cin >> haslo;
    uzytkownik.ustawHaslo(haslo);

    return uzytkownik;
}
int UzytkownikManager::pobierzIdNowegoUzytkownika()
{
    if (uzytkownicy.empty() == true)
        return 1;
    else
        return uzytkownicy.back().pobierzId() + 1;
}

bool UzytkownikManager::czyIstniejeLogin(string login)
{
    for(int i = 0; i < uzytkownicy.size(); i++){

       if(uzytkownicy[i].pobierzLogin() == login)
            return true;
    }
    return false;
}


void UzytkownikManager::wypiszWszytskichUzytkownikow(){
    for (int i = 0; i < uzytkownicy.size(); i++){

        cout << uzytkownicy[i].pobierzId() << endl;
        cout << uzytkownicy[i].pobierzLogin() << endl;
        cout << uzytkownicy[i].pobierzHaslo() << endl;
    }
    system("pause");
}

int UzytkownikManager::logowanieUzytkownika()
{
    MetodyPomocnicze metodyPomocnicze;

    string login = "", haslo = "";

    cout << "Podaj login: ";
    login = metodyPomocnicze.wczytajLinie();

    vector <Uzytkownik>::iterator itr = uzytkownicy.begin();
    while (itr != uzytkownicy.end())
    {
        if (itr -> Uzytkownik::pobierzLogin() == login)
        {
            for (int iloscProb = 3; iloscProb > 0; iloscProb--)
            {
                cout << "Podaj haslo. Pozostalo prob: " << iloscProb << ": ";
                haslo = metodyPomocnicze.wczytajLinie();

                if (itr -> Uzytkownik::pobierzHaslo() == haslo)
                {
                    cout << endl << "Zalogowales sie." << endl << endl;
                    system("pause");
                    idZalogowanegoUzytkownika = itr -> Uzytkownik::pobierzId();
                    return idZalogowanegoUzytkownika;
                }
            }
            cout << "Wprowadzono 3 razy bledne haslo." << endl;
            system("pause");
            return 0;
        }
        itr++;
    }
    cout << "Nie ma uzytkownika z takim loginem" << endl << endl;
    system("pause");

    return 0;
}

void UzytkownikManager::zmianaHaslaZalogowanegoUzytkownika(int idZalogowanegoUzytkownika)
{
    MetodyPomocnicze metodyPomocnicze;
    PlikiZUzytkownikami plik("Uzytkownicy.txt");
    string noweHaslo = "";
    cout << "Podaj nowe haslo: ";
    noweHaslo = metodyPomocnicze.wczytajLinie();

    for (vector <Uzytkownik>::iterator itr = uzytkownicy.begin(); itr != uzytkownicy.end(); itr++)
    {
        if (itr -> Uzytkownik::pobierzId() == idZalogowanegoUzytkownika)
        {
            itr -> Uzytkownik::ustawHaslo(noweHaslo);
            cout << "Haslo zostalo zmienione." << endl << endl;
            system("pause");
        }
    }
    plik.zapiszWszystkichUzytkownikowDoPliku(uzytkownicy);
}

void UzytkownikManager::ustawIdZalogowanegoUzytkownika (int Id) {
    idZalogowanegoUzytkownika = Id;
}
bool UzytkownikManager::czyUzytkownikJestZalogowany(){
if(idZalogowanegoUzytkownika > 0)
    return true;
else
    return false;
}

int UzytkownikManager::pobierzIdZalogowanegoUzytkownika (){
return idZalogowanegoUzytkownika;
}

void UzytkownikManager::wylogujUzytkownika(){
idZalogowanegoUzytkownika = 0;
};






