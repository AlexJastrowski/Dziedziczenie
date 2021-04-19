#include <iostream>
#include "Osoba.h"
#include "Pracownik.h"
#include "Firma.h"
using namespace std;

int main()
{
    Osoba pierwsza = Osoba("Adam", "Misiek", "00341728834");
    Osoba druga = Osoba("Marek", "Grechuta", "00273612283");
    Osoba trzecia = Osoba("Julia", "Krawczak", "0027381277346");
    Pracownik piew = Pracownik(pierwsza, 6);
    Pracownik drug = Pracownik(druga, 5);
    Pracownik trzec = Pracownik(trzecia, 18);

    Firma Firma_1 = Firma("Metex", 17);
    Firma_1.zatrudnij(piew);
    Firma_1.zatrudnij(drug);
    Firma_1.zatrudnij(trzec);

    cout << Firma_1.podaj_koszty_pracy();
    cout << endl;
    Firma_1.wyswietl_liste_plac();
    cout << endl;

    Firma_1.zwolnij(piew);
    Firma_1.wyswietl_liste_plac();
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie
