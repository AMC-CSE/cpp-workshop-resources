// C++ has fuctions that allow you to perform mathematical tasks on numbers.

// MAX and MIN function

// the max(x,y) function can be used to find the highest value of x and y:
// min(x,y) gives the lowest value.

// to use these functions we first require the math header

//Example

#include <iostream>
#include <cmath>
using namespace std;

void main() {
    cout << max(5,10);
    cout << min(5,10);
}

/*
    some examples of math functions are given below:

    abs(x) - returns absolute value of x
    cos(x) - returns cosine of x
    sin(x) - returns sin of x
    tan(x) - returns tan of x
    cbrt(x) - returns cube root of x
    ceil(x) - rounds up x to nearest integer
    exp(x) - returns exponential of x
    floor(x) - rounds x down to nearest integer
*/

//Booleans

//Booleans simply return True or False

//Example

#include<iostream>
using namespace std;

void main() {
    bool a = true;
    bool b = false;
    cout << a;
    cout << b;
}

// boolean operators

// using logical operators will also return true or false values.

//Example

#include <iostream>
using namespace std;

void main() {
    int x = 10;
    int y = 9;
    cout << (x > y); // this will return the value True. Because 10 is greater than 9.
    cout << (x < y); // this will return false because 10 is not less than 9. 
    cout << (x == 10); // this will return true because previously x was declared as 10.
    cout << (10 == 15); // returns false because 10 is not equal to 15.
}





