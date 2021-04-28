//arrays are a collection of data items of the same type.

#include <iostream>
#include <string>
using namespace std;

void main() {
    //arrays can be declared in multiple ways
    //method 1:
    string cars[4];
    //method 2:
    string cars[4] = {"volvo", "BMW", "Ford"};
    //an array of integers:
    int myNum[3] = {10, 20, 30};
    //accessing the elements of an array:
    cout << cars[0]; //this will return the string volvo.
    //changing an array element:
    cars[0] = "tata";
    cout << cars[0]; // outputs tata instead of volvo.
    //looping in an array:
    for(int i = 0; i < 4; i++) {
        cout << cars[i] << "/n"; // the << "/n" part just adds a new line/ break line after every array element.
    }

    //declaring array size can be ommited
    string bike[] = {"yamaha", "honda"}; // the size is fixed to 2
    // declaration can also done in this way:
    string TV[2];
    TV[0] = "samsung";
    TV[1] = "panasonic";
}


