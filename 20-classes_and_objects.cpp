// C++ is an object oriented language
// hence we can have classes and methods

/*
    For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.

    Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".

    A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.
*/

// Creating a class
// to create a class we make the class keyword
#include <iostream>
#include <string>
using namespace std;

class MyClass {
    public:  //access specifier (public = anyone can access, private = restricted access)
        int myNum;  // attribute
        string myString; // attribute
};

// Creating a object

void myMethod() {
    cout << "i was called";
}

class Myclass {
    public:
        int myNum;  // attribute
        string myString; // attribute
        void myMethod(); // methods can also be called inside.
};

void main() {
    Myclass myObj; // object, we can create mutiple objects like this.

    //accessing and setting attribute values
    myObj.myNum = 15;
    myObj.myString = "Some Text"; 
    myObj.myMethod(); // calls the method
    // Print attribute values
    cout << myObj.myNum; 
    cout << myObj.myString;
}

//class constructors
#include <iostream>
#include <string>
using namespace std;

class Myclass {
    public:
        Myclass(string x, string y, int z) { // constructor, they can also have parameters like functions
            name = x;
            usn = y;
            age = y;
        }
};

void main() {
    Myclass myObj("abc", "1AM19CS111", 19); // object, but this time it will execute the constructor that is Myclass().
    cout << myObj.name;
    cout << myObj.usn;
    cout << myObj.age; // accessing attributes.
}

//Inheritance of classes
#include <iostream>
#include <string>
using namespace std;

// main class
class Vehicle {
    public:
        string brand = "Ford";
};

//derived class
class Car: public Vehicle {
    public:
        string model = "Mustang";
};

int main() {
    Car myCar;
    cout << myCar.brand + " " + myCar.model; // my car inherits from both class car and superclass vehicle.
}

//Polymorphism
#include <iostream>
#include <string>
using namespace std;

// now lets consider a pig, it is an animal, consider animal to be a superclass and all of its children class may differ , this is called polymorphism

class Animal {
    public:
        void animal() {
            cout << "i'm an animal";
        }
};

class pig: public Animal {
    public:
        void pig() {
            cout << "i'm a pig i'm also an animal";
        }
};

class dog: public Animal {
    public:
        void dog() {
            cout << "i'm a dog i'm also an animal";
        }
};
