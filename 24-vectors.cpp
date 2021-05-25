#include<iostream>
#include<vector>
using namespace std;


// sorting

// begin() - returns first element
// end() - returns last element
// rbegin() - reverse of starting element
// rend() - reverse of end element
// cbegin() - returns constant with first element
// cend() - returns constant with last element
// crbegin() - returns constant with reverse of first element
// crend() - returns constant with reverse of first element

int sorting() {

	vector<int> g1;

	for(int i = 1; i<=5; i++) {
		g1.push_back(i);
	}

	for(auto i = g1.begin(); i != g1.end(); ++i) {
		cout << *i << endl;
	}

	for(auto ir = g1.rbegin(); ir != g1.rend(); ++ir) {
		cout << *ir << endl;
	}

	for(auto ci = g1.cbegin(); ci != g1.cend(); ++ci) {
		cout << *ci << endl;
	}

	for(auto cir = g1.crbegin(); cir != g1.crend(); ++cir) {
		cout  << *cir << endl;
	}
}


