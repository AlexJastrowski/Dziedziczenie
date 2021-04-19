#include "Firma.h"

Firma::Firma(const std::string & nazwa, double stawka)
{
	this->nazwa = nazwa;
	this->stawka_godzinowa = stawka;
}

void Firma::zatrudnij(const Pracownik & p)
{
	pracownicy.push_back(p);
}

void Firma::zwolnij(const Pracownik & p)
{
	for (size_t i = 0; i < pracownicy.size(); i++)
	{
		if (pracownicy[i].get_pesel() == p.get_pesel())
		{
			pracownicy.erase(pracownicy.begin()+i);
		}
	}
}

double Firma::podaj_koszty_pracy() const
{
	double koszta = 0;
	for (size_t i = 0; i < pracownicy.size(); i++)
	{
		koszta += pracownicy[i].get_liczbe_godzin() * stawka_godzinowa;
	}

	return koszta;
}

void Firma::wyswietl_liste_plac() const
{
	for (size_t i = 0; i < pracownicy.size(); i++)
	{
		std::cout << pracownicy[i].get_imie() << " " << pracownicy[i].get_nazwisko() << " koszta: " << pracownicy[i].get_liczbe_godzin() * stawka_godzinowa;
		std::cout << std::endl;
	}
}


