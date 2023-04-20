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
using namespace std::chrono;

int gen_rand(int min, int max) {
	
	return rand() % (max - min + 1) + min;
}

int main() {
	srand(time(nullptr));
	vector<int> v;
	double average = 0;
	double sum = 0;
	v.reserve(10000); //there are better cleaner ways to do this but this is easy

	auto begin = high_resolution_clock::now();
	for (int i = 0; i < 10000; ++i) {
		v.push_back(gen_rand(1,5));
	}
	for (int i = 0; i < v.size(); ++i) {
		sum += v[i];
	}
	average = sum / v.size();
	auto end = high_resolution_clock::now();


	cout << "Average of " << v.size() << " random numbers is: " << average << endl;
	cout << "Time: " << duration_cast<nanoseconds>(end - begin).count() << " ns" << endl;








	return 0;

}