//The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users
// simply make the class private to acheive this.

// the only way to modify these classes is to use the get and set methods

//Example

class Employee {
  private:
    // Private attribute
    int salary;

  public:
    // Setter
    void setSalary(int s) {
      salary = s;
    }
    // Getter
    int getSalary() {
      return salary;
    }
};

int main() {
  Employee myObj;
  myObj.setSalary(50000);
  cout << myObj.getSalary();
  return 0;
}

//Why we need encapsulation
/*
- It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
- Increased security of data
*/
