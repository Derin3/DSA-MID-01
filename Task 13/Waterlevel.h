#pragma once
#include <string>

class Waterlevel
{
private:
	int year;
	double level;
public:
	Waterlevel(int year, double level);
	void set_year(int year);
	void set_level(double level);
	int get_year();
	double get_level();
	std::string to_string();
};

