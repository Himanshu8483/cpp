// Pointer (*): A variable that stores the memory address of another variable.
// Arrow Operator (->): Used to access members of an object through a pointer.
// This Pointer (this): Refers to the current object of the class inside a member function.
// Address-of Operator (&): Used to obtain the memory address of a variable.
// Dot Operator (.): Used to access members of an object directly (without a pointer).

// Introduction:
// Object-Oriented Programming (OOP) makes it easier to write, understand, and maintain code by using concepts like classes, objects, inheritance, polymorphism, encapsulation, and abstraction. These concepts make code more modular, reusable, and easier to manage.

// OOP Principles
// OOP has four main principles: Encapsulation, Abstraction, Inheritance, and Polymorphism.

// Class & Object
// A class is a blueprint for creating objects (instances of that class). 
// An object is a real-world entity that is created from a class. It contains data and methods to perform operations.
#include <iostream>
using namespace std;

class Student {
public:
    string name;  // Property (Variable)
    int age;      // Property (Variable)

    void display() {  // Method (Function)
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student student1;  // Object creation
    student1.name = "Himanshu";  // Assigning values
    student1.age = 20;       // Assigning values
    student1.display();      // Calling the display method to show data
    return 0;
}

// Access Specifier
// Access specifiers control access to the class members (variables and methods).
// 1. Public: Accessible from anywhere (within the class, outside the class, and in derived classes).
// 2. Private: Accessible only within the class (cannot be accessed from outside the class directly).
// 3. Protected: Accessible within the class and derived (child) classes, but not outside.
#include <iostream>
using namespace std;
class Example {
public:
    int publicVar; // Public: Accessible from anywhere

private:
    int privateVar; // Private: Accessible only within the class

protected:
    int protectedVar; // Protected: Accessible in the class and derived classes
// Example
public:
    // Public method to set private and protected variables
    void setValues(int pub, int priv, int prot) {
        publicVar = pub;
        privateVar = priv;
        protectedVar = prot;
    }

    // Public method to display all variables
    void displayValues() {
        cout << "Public: " << publicVar << ", Private: " << privateVar 
             << ", Protected: " << protectedVar << endl;
    }
};

// Derived class
class Derived : public Example {
public:
    void showProtectedValue() {
        // Accessing protected member from the base class
        cout << "Accessing protectedVar in Derived class: " << protectedVar << endl;
    }
};

int main() {
    Example obj;
    obj.publicVar = 10; // Accessible directly
    // obj.privateVar = 20; // Error: Cannot access private member
    // obj.protectedVar = 30; // Error: Cannot access protected member

    obj.setValues(10, 20, 30); // Using a public method to set all values
    obj.displayValues();       // Using a public method to display values

    Derived derivedObj;
    derivedObj.setValues(40, 50, 60); // Using inherited public method
    derivedObj.displayValues();
    derivedObj.showProtectedValue();  // Accessing protected variable via derived class

    return 0;
}
// Output :
// Public: 10, Private: 20, Protected: 30
// Public: 40, Private: 50, Protected: 60
// Accessing protectedVar in Derived class: 60
