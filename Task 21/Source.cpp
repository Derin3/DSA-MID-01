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

void transferqueue(queue<int>& q, ofstream& file2) {
	while (!q.empty()) {
		file2 << q.front() << " ";
		q.pop();
	}
}

void readnumbersintoqueueandtransfer(int number, ifstream& file1, ofstream& file2) {
	queue<int> q;
	int temp = 0;
	while (file1 >> temp) {
		q.push(temp);
		if (q.size() == number) {
			transferqueue(q, file2);
		}
	}
	transferqueue(q, file2);
	file2 << endl;

}



int main() {

	ifstream file1("numbers.txt");
	if (!file1) {
		cout << "404" << endl;
		return -1;
	}
	ofstream file2("output.txt");
	if (!file1) {
		cout << "505" << endl;
		return -1;
	}

	readnumbersintoqueueandtransfer(5, file1, file2); // :)


	file1.close();


	cout << endl << endl << endl << "Success!" << endl << endl << endl << endl  << endl;
	return 0;
}