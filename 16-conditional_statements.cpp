/*
 C++ supports the usual mathematical conditional operators.
  - <
  - <=
  - >
  - >=
  - ==
  - !=

  C++ has the same conditional statements as C
  - if
  - else
  - else if
  - switch
*/

// If statement Syntax

#include <iostream>
using namespace std;

void main() {
    if(condition) {
        // code to be executed if condition is true
    }
}

// else statement syntax

#include <iostream>
using namespace std;

void main() {
    if(condition) {
        // code to be executed if condition is true
    } else {
        // code to execute if condition is false
    }
}

// nested if statement

#include <iostream>
using namespace std;

void main() {
 if(condition 1) {
  if(condition2) {
   //execute something here.
  }
 }
}

// else-if statement syntax

#include <iostream>
using namespace std;

void main() {
    if(condition) {
        // code to be executed if condition 1 is true
    } else if(condition) {
        // code to execute if condition 2 is true
    } else {
        // code to execute if both conditions are false.
    }
}

//Ternary Operator

// the ternary operator is a short way of writing an conditional if-else statement

#include <iostream>
using namespace std;

void main() {
    int time = 20;
    string result = (time<20) ? "good day" : "good evening.";
    cout << result;
}

//Switch statements

#include <iostream>
using namespace std;

void main() {
    int day = 4;
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break; // breaks after execution
        default:
            cout << "There's only 7 days in a week" //this executes in case of invalid inputs
    }
}

//Loops

//Loops can execute a block of code until a condition is satisfied.

// While loop

//Syntax

while (condition) {
    //code to be run.
}

//Example

#include <iostream>
using namespace std;

void main() {
    int i = 0;
    while(i<5) {
        cout << i << "\n";
        i++;
    }
}

//do while loop

#include <iostream>
using namespace std;

void main() {
    int i = 0;
    do {
        cout << i << "\n";
        i++;
    } while(i < 5)
}

// only difference here is the do-while loop checks the condition each time it executes.

//for loop

#include <iostream>
using namespace std;

void main() {
    for(int i = 0; i < 5; i++) {
        cout << i << "\n";
    }
}

// first int i is set to 0.
// a condition is applied i < 5, when i = 5 or i > 5 the condition will return false and stop execution.
// i is incremented i++.

//break and continue statements

#include <iostream>
using namespace std;

void main() {
    int i = 0;
    while (i < 10) {
        cout << i << "\n";
        i++;
        if (i == 4) {
            break;          // stops execution if i = 4
        } else if(i == 8) {
            continue;  // continues if i = 8
        }
    }
}

