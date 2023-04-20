#include "HTTP.h"


HTTP::HTTP(string url) : HTTP(url, 80)
{
}

HTTP::HTTP(string url, int port)
{
	srand(time(nullptr));
	this->port = port;
}

int HTTP::gen_rand(int min, int max) {
	return rand() % (max - min + 1) + min;
}
string HTTP::compose_string()
{
	stringstream ss;
	for (int i = 0; i < 10; ++i) {
		ss << (char)gen_rand(97, 122);
	};
	return ss.str();
}
string HTTP::get()
{
	return compose_string();
}

string HTTP::post()
{
	return get();
}

