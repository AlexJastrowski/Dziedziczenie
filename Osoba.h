#pragma once
#include <iostream>
#include <string>;

class Osoba
{
	std::string imie;
	std::string nazwisko;
	std::string pesel;

public:
	Osoba(const std::string & im, const std::string & na, const std::string & pe);
	std::string get_imie() const;
	std::string get_nazwisko() const;
	std::string get_pesel() const;
};

