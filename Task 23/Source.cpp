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


void checkfile(ifstream& file1) {
	stack<char> s;
	string temp;
	bool testfail = false;
	while (getline(file1, temp)) {
		for (int i = 0; i < temp.length(); ++i) {
			switch (temp[i]) {
			case '(':
				s.push(temp[i]);
				break;
			case '{':
				s.push(temp[i]);
				break;
			case '[':
				s.push(temp[i]);
				break;
			case ')':
				if (!s.empty()) {
					if (s.top() == '(' && !s.empty()) {
						s.pop();
					}
				}
				else {
					testfail = true; //could be better
				}
				break;
			case '}':
				if (!s.empty()) {
					if (s.top() == '{') {
						s.pop();
					}
				}
				else {
					testfail = true;
				}
				break;
			case ']':
				if (!s.empty()) {
					if (s.top() == '[' && !s.empty()) {
						s.pop();
					}
				}
				else {
					testfail = true;
				}
				break;

			}
		}
	}
	if (s.empty() && !testfail) {
		cout << "Balanced brackets!!" << endl;
	}
	else {
		cout << "Not equal!!" << endl;
	}

}


int main() {

	ifstream file1("test1.txt");
	if (!file1) {
		cout << "404" << endl;
		return -1;
	}
	ifstream file2("test2.txt");
	if (!file1) {
		cout << "505" << endl;
		return -1;
	}
	ifstream file3("test3.txt");
	if (!file1) {
		cout << "606" << endl;
		return -1;
	}

	checkfile(file1);
	checkfile(file2);
	checkfile(file3);



	file1.close();
	file2.close();
	file3.close();
	return 0;
}