#include "Osoba.h"

Osoba::Osoba(const std::string& im, const std::string& na, const std::string& pe)
{
	imie = im;
	nazwisko = na;
	pesel = pe;
}

std::string Osoba::get_imie() const
{
	return this->imie;
}

std::string Osoba::get_nazwisko() const
{
	return this->nazwisko;
}

std::string Osoba::get_pesel() const
{
	return this->pesel;
}