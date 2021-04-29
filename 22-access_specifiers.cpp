// access specifiers deal with permissions regarding classes.
// classes can be accessed based on the access specifiers assigned to them.
// there are three access specifiers:
// 1. public
// 2. private
// 3. protected

//Example
class myClass { 
    public: //this is an access specifier. This class is accessoble by any other class.
        // some code here
};


//Another Example

class myClass {
    public:     //access specifier
        int x; // this is accessible
    private:    // access specifier
        int y;  // this is private/not accessible.
};

int main() {
    myClass myObj;
    myObj.x = 25; // Allowed (Public)
    myObj.y = 50; //Not Allowed(private)
}

