#pragma once
#include "Pracownik.h"
#include <vector>
#include <string>

class Firma
{
	std::string nazwa;
	double stawka_godzinowa;
	std::vector <Pracownik> pracownicy;
public:
	Firma(const std::string & nazwa, double stawka);
	void zatrudnij(const Pracownik & p);
	void zwolnij(const Pracownik & p);
	double podaj_koszty_pracy() const;
	void wyswietl_liste_plac() const;
};

