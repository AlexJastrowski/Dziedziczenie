#include "Pracownik.h"
#include "Osoba.h"

Pracownik::Pracownik(const Osoba & o, int liczba_godzin) : Osoba(o.get_imie(), o.get_nazwisko(), o.get_pesel())
{
	this->liczba_godzin = liczba_godzin;
}

Pracownik::Pracownik(const std::string & im, const std::string & na, const std::string & pe, int liczba_godzin) : Osoba(im, na, pe)
{
	this->liczba_godzin = liczba_godzin;
}

int Pracownik::get_liczbe_godzin() const
{
	return this->liczba_godzin;
}
