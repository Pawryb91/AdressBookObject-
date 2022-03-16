#include "Adresat.h"

    void Adresat::ustawIdAdresata(int noweIdAdresata){
        idAdresata = noweIdAdresata;
    }

    void Adresat::ustawIdUzytkownikaAdresat(int noweIdUzytkownikaAdresat){
        idUzytkownikaAdresat = noweIdUzytkownikaAdresat;
    }
    void Adresat::ustawImieAdresata(string noweImieAdresata){
        imieAdresata = noweImieAdresata;
    }
    void Adresat::ustawNazwiskoAdresata(string noweNazwiskoAdresata){
        nazwiskoAdresata = noweNazwiskoAdresata;
    }
    void Adresat::ustawNrTelefonuAdresata(string noweNrTelefonuAdresata){
        nrTelefonuAdresata = noweNrTelefonuAdresata;
    }
    void Adresat::ustawAdresEmailAdresata(string noweAdresEmailAdresata){
        adresEmailAdresata = noweAdresEmailAdresata;
    }
    void Adresat::ustawAdresDomowyAdresata(string noweAdresDomowyAdresata){
        adresDomowyAdresata = noweAdresDomowyAdresata;
    }

    int Adresat::pobierzIdAdresata(){
        return idAdresata;
    }
    int Adresat::pobierzIdUzytkownikaAdresat(){
       return idUzytkownikaAdresat;
    }
    string Adresat::pobierzImieAdresata(){
        return imieAdresata;
    }
    string Adresat::pobierzNazwiskoAdresata(){
        return nazwiskoAdresata;
    }
    string Adresat::pobierzNrTelefonuAdresata(){
        return nrTelefonuAdresata;
    }
    string Adresat::pobierzAdresEmailAdresata(){
        return adresEmailAdresata;
    }
    string Adresat::pobierzAdresDomowyAdresata(){
        return adresDomowyAdresata;
    }
