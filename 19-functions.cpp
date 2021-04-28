//function is a block of code that runs only when called (function calls)

//Creating a function
void myFunction() {
    // code here
}

// calling a function
#include <iostream>
using namespace std;

void myFunction() {  // this is called function declaration
    cout << "I was just executed"; // this is called function definition
}

void main() {
    myFunction(); // this is a function call
}
// output will be "I was just executed"

// funtions with parameters and arguments

void name(parameter 1, parameter 2, parameter 3)
{
    // code here
}

//Example
#include <iostream>
#include <string
using namespace std;

void name(string fname) { // you have to pass in a string containing a name as a requirement
    cout << fname;
}

//we can also hardcode the parameters i.e having a default parameter
void hardname(string name = "abc")
{
    cout << hardname;
} 

//we can also have functions with return values for example:
void sum(int x, int y) {
    return x+y;
}

// we can also call parameters by reference using the & operator
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void main() {
    name("a"); // prints a
    name("b"); // prints b
    name("c"); // prints c
    hardname(); // we pass no parameters here so it returns default value that is abc.
    sum(5,10); // returns 5+10 = 15
    int result = sum(5,10); // the returned value can also be stored like this
    int x = 10;
    int y = 12;
    swapNums(x, y); // this will set x = 12, y = 10
}
