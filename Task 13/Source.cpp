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

#include"Waterlevel.h"

using namespace std;

template<typename T>
T convert(string& string) {
	stringstream ss(string);
	T var1;
	ss >> var1;
	return var1;
}

void waterparser(ifstream& file1, vector<Waterlevel>& v) {
	string temp;
	int y1store;
	double l1store;
	getline(file1, temp);
	while (getline(file1, temp)) {
		stringstream ss(temp);
		getline(ss, temp, ',');
		getline(ss, temp, ',');
		y1store = convert<int>(temp);
		getline(ss, temp);
		l1store = convert<double>(temp);
		v.emplace_back(y1store, l1store);
	}
}

Waterlevel findhighest(vector<Waterlevel>& v) {
	if (!v.empty()) {
		Waterlevel max = v[0];
		for (int i = 1; i < v.size(); ++i) {
			if (v[i].get_level() > max.get_level()) {
				max = v[i];
			}
		}
		return max;
	}
}

int main() {

	ifstream file1("LakeHuron.csv");
	if (!file1) {
		cout << "404" << endl;
		return -1;
	}

	vector<Waterlevel> v;

	waterparser(file1, v);

	Waterlevel top = findhighest(v);





	/*for (int i = 0; i < v.size(); ++i) {
		cout <<"vector index: "<<i<<" " << v[i].to_string() << endl;
	}

	cout << endl << endl << endl << endl << endl << "Highest level is : " << top.to_string();
	*/
	int i = 0;
	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << "vector index: " << i << " " << it->to_string() << endl;
		++i;
	}

	cout << endl << endl << endl << endl << endl << "Highest level is : " << top.to_string();

	file1.close();
	return 0;
}