#include<iostream>
#include<vector>
using namespace std;

//Vectors are a kind of dynamically allocated arrays. size increases as the no. of elements increase.


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

//capacity
// size() - returns current size of the array
// max_size() - maximum size allocated to the dynamic array.
// capacity() - returns the current capacity of the array.
// resize() - resizes the array.
// empty() - returns wether the array is empty or not (true/false).
// shrink_to_fit() - removes extra empty blocks.
// reserve() - reserves certain space to be allocated to the dynamic array.

auto capacity() {
	vector<int> g2;

	for(int i = 0; i <=5; i++) {
		g2.push_back(i);
	}

	cout << g2.size() << endl;
	cout << g2.max_size() << endl;
	cout << g2.capacity() << endl;

	g2.resize(4);

	for(auto i = g2.begin(); i != g2.end(); ++i) {
		cout << *i << endl;
	}

	cout << g2.empty() << endl;


	// resizing the array to add 3 extra empty elements
	g2.resize(7);

	// shrinking the array to fit to the amount of elements present.
	g2.shrink_to_fit();

	//reserving 5 blocks for holding elements
	g2.reserve(5);

}

// Element Access

// reference_element[n] - references to the element at position n
// at(n) - references to the value at position n
// front() - returns first element;
// back() - returns last element;
// data() - retunrs value at referenced position.

auto access() {
	vector<int> g3;

	for(int i = 0 ; i<=10; i++) {
		g3.push_back(i);
	}

	cout << "example of reference element:" << g3[2];

	cout << "element at index position 4: " << g3.at(4);

	cout << "element at front: " << g3.front();

	cout << "element at rear: " << g3.back();

	for(auto i = g3.begin(); i != g3.end(); ++i) {
		cout << g3.data(i) << endl;
		// outputs all elements in the dynamic array.
	}
}

// Modifiers

// assign() - assigns value at specified index position and value.
// push_back() - push an element into the array.
// pop_back() - remove an element from the array.
// insert() - inserts at specified location.
// erase() - removes element from certain position.
// swap() - copy contents of one vector to the other.
// clear() - remove all elements.
// emplace() - new block added to the front of the array.
// emplace_back() - new block added to the rear of the array.

auto modifiers() {
	vector<int> g4;

	// assigns 5 blocks with value 10
	g4.assign(5, 10);

	for(int i=0; i<=5; i++) {
		g4.push_back(i);
		// pushes 1-5 into the array.
	}

	// removes end element
	g4.pop_back();

	// inserting value 12 at position 4.
	g4.insert(4, 12);

	//removing element from position 4
	g4.erase(4);

	g4.clear();
	// returns empty array

	vector<int> g5;

	//swapping contents of g4 to g5

	g4.swap(g5);

	g4.emplace(g4.begin(), 12);
	// pushes 12 to first index position.

	g4.emplace_back(g4.end(), 12);
	// pushes 12 to last index position.
}

int main() {
	sorting();
	capacity();
	access();
	modifiers();
}