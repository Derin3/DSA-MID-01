#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<cmath>
#include<ctime>
#include<algorithm>
#include<list>
#include<queue>
#include<stack>

#include"HTTP.h"

using namespace std;



int main() {
	
	HTTP test1("https://www.bla.com", 443);
	cout << test1.get() << endl;
	cout << test1.post() << endl;




	return 0;
}