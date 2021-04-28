//The + operator can be used between strings to add them together to make a new string. This is called concatenation:

#include <iostream>
#include <string>
using namespace std;

void main() {
    string firstName = "John "; // declaring a string called firstname
    string lastName = "Doe"; // declaring a string called lastname
    string fullName = firstName + lastName; // concatenating firstname and lastname using + operator and storing in fullname
    cout << fullName; // printing fullname
}


//Appending a string

#include <iostream>
#include <string>
using namespace std;

void main() {
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName); // using the append() method to append last name to firstname.
    cout << fullName;
}

// to ger length of a string use the method length()

#include <iostream>
#include <string>
using namespace std;

void main() {
    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length();
}

// or you can use the size() method.

#include <iostream>
#include <string>
using namespace std;

void main() {
    string txt = "anaondnwoiandaoinwn";
    cout << "The length of the txt string is:" << txt.size();
}

//Accessing strings

// you can access the string by referring to it's index number eg: [0].

#include <iostream>
#include <string>
using namespace std;

void main() {
    string myString = "Hello";
    cout << myString[0]; //this will output the character 'H'.
}

//changing a character in the string

#include <iostream>
#include <string>
using namespace std;

void main() {
    string myString = "Hello";
    myString[0] = 'J';
    cout << myString; // outputs Jello instead of Hello.
}


// user inputting strings

#include <iostream>
#include <string>
using namespace std;

void main() {
    string firstName;
    cout << "Type your first firstname: ";
    cin >> firstName;
    cout << "your first name is: " << firstName;
}

// here cin will consider a whitespace " " as a breaking character hence we use getline(), with cin as the first parameter.
#include <iostream>
#include <string>
using namespace std;

void main() {
    string firstName;
    cout << "Type your first firstname: ";
    getline(cin, firstName);
    cout << "your first name is: " << firstName;
}

//Note: if you ommit using namespace std the code will look like this:

#include <iostream>
#include <string>

void main() {
    std::string greeting = "Hello";
    std::cout << greeting;
    return 0;
}

