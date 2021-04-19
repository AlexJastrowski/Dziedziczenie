#pragma once
#include "Osoba.h"
class Pracownik : public Osoba
{
	int liczba_godzin;
public:
	Pracownik(const std::string & im, const std::string & na, const std::string & pe, int liczba_godzin);
	Pracownik(const Osoba & o, int liczba_godzin);
	int get_liczbe_godzin() const;
};

