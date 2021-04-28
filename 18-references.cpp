#include <iostream>
#include <string>
using namespace std;

void main() {
    //references can refer to existing elements to access their data
    string food = "pizza";
    string meal = &food; // reference to the food variable
    cout << food << "\n"; //prints pizza
    cout << meal << "\n"; // prints the same thing.
}

//Memory addresses

#include <iostream>
#include <string>
using namespace std;

void main() {
    string food  = "pizza";
    cout << &food; // returns hexadecimal memory address example: 0x6dfed4.
}

//Pointers

//pointers store memory address of another variable inside a assigned variable

//Example

#include <iostream>
#include <string>
using namespace std;

void main() {
    string food = "pizza";
    string *ptr = &food; //assigning the address of food variable to ptr
    cout << *ptr; //outputs pizza.
    // we can also modify data using pointers
    *ptr = "hamburger";
    cout << *ptr // this will now output hamburger.
}