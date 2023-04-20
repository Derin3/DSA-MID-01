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
#include<chrono>

using namespace std;

list<int> readnumbersintovector(ifstream& file1) {
	int temp = 0;
	vector<int> v;
	while (file1 >> temp) {
		v.push_back(temp);
	}
	list<int> l(v.begin(), v.end());
	return l;

}

void multiplylist(list<int>& l, int n) {
	for_each(l.begin(), l.end(), [](int& a) {a = a * 3; });
}
void printlist(list<int>& l) {
	for_each(l.begin(), l.end(), [](int& a) {
		cout << "list contains: " << a << endl;
		});
}
int main() {

	ifstream file1("numbers.txt");
	if (!file1) {
		cout << "404" << endl;
		return -1;
	}
	
	
	

	list<int> l = readnumbersintovector(file1);
	multiplylist(l, 3);
	printlist(l);

	file1.close();


	cout << "Success!" << endl << endl;
	return 0;
}