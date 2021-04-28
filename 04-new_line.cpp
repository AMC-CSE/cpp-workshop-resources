//To insert a new line, you can use the \n character:

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}

// Two \n characters after each other will create a blank line:

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n\n";
  cout << "I am learning C++";
  return 0;
}

//Another way to insert a new line, is with the endl manipulator:

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}

//Both \n and endl are used to break lines. However, \n is used more often and is the preferred way.