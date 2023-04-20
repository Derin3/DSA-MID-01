#pragma once
#include<string>
#include<sstream>
using namespace std;
class HTTP
{
private:
	string url;
	int port;
	int gen_rand(int min, int max);
	string compose_string();
public:
	HTTP(string url);
	HTTP(string url, int port);
	string get();
	string post();
};

