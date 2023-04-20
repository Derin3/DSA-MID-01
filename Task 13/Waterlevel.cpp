#include "Waterlevel.h"
#include <sstream>

Waterlevel::Waterlevel(int year, double level)
{
	set_year(year);
	set_level(level);
}

void Waterlevel::set_year(int year)
{
	this->year = year;
}

void Waterlevel::set_level(double level)
{
	this->level = level;
}

int Waterlevel::get_year()
{
	return year;
}

double Waterlevel::get_level()
{
	return level;
}

std::string Waterlevel::to_string()
{
	std::stringstream ss;
	ss << "year: " << year << " level: " << level << std::endl;
	return ss.str();
}