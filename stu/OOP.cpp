#include <iostream>
using namespace std;

// 00:00 Introduction
// Object-Oriented Programming (OOP) makes it easier to write, understand, and maintain code by using concepts like classes, objects, inheritance, polymorphism, encapsulation, and abstraction. These concepts make code more modular, reusable, and easier to manage.

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 01:26 OOP Principles
// OOP has four main principles: Encapsulation, Abstraction, Inheritance, and Polymorphism.

// 03:38 Class & Object
// A class is a blueprint for creating objects (instances of that class). 
// An object is an instance of a class that holds actual values for its members and functions.

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
    student1.name = "John";  // Assigning values
    student1.age = 20;       // Assigning values
    student1.display();      // Calling the display method to show data

    return 0;
}

// 17:05 Access Specifier
// Access specifiers control access to the class members (variables and methods).
// 1. Public: Accessible from anywhere (within the class, outside the class, and in derived classes).
// 2. Private: Accessible only within the class (cannot be accessed from outside the class directly).
// 3. Protected: Accessible within the class and derived (child) classes, but not outside.

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 23:48 Encapsulation
// Encapsulation is the process of bundling data (variables) and methods (functions) that operate on the data into a single unit or class.
// It hides the internal details and protects the data from outside interference and misuse.

class EncapsulationExample {
private:
    int value;  // Private variable (Cannot be accessed directly outside the class)

public:
    void setValue(int v) {  // Setter (public method to set the value)
        value = v;
    }

    int getValue() {  // Getter (public method to get the value)
        return value;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 29:10 Constructor
// Constructor is a special method used to initialize objects. It has the same name as the class and no return type.

class ConstructorExample {
public:
    string name;

    ConstructorExample(string n) {  // Constructor with parameters
        name = n;  // Initialize name with the provided value
    }

    void showName() {
        cout << "Name: " << name << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 41:08 this Pointer
// The 'this' pointer is a pointer that refers to the current object. It is used inside a class to access members of the object.

class ThisPointerExample {
private:
    int value;

public:
    ThisPointerExample(int value) {
        this->value = value;  // 'this' refers to the current object's 'value' to avoid ambiguity.
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 46:33 Copy Constructor
// A copy constructor is used to create a new object as a copy of an existing object.

class CopyConstructorExample {
public:
    int x;

    CopyConstructorExample(int val) {  // Normal constructor
        x = val;
    }

    CopyConstructorExample(const CopyConstructorExample &obj) {  // Copy constructor
        x = obj.x;  // Copy value from the original object
    }

    void display() {
        cout << "X: " << x << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 51:56 Shallow vs Deep Copy
// Shallow copy copies the pointer, not the data. A deep copy creates a new copy of the data, not just the pointer.

class CopyExample {
private:
    int *data;  // Pointer to an integer

public:
    CopyExample(int value) {
        data = new int(value);  // Dynamically allocated memory
    }

    CopyExample(const CopyExample &obj) {  // Deep copy
        data = new int(*obj.data);  // Create new memory for the data and copy the value
    }

    ~CopyExample() {  // Destructor
        delete data;  // Free dynamically allocated memory
    }

    void display() {
        cout << "Data: " << *data << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:09:07 Destructor
// Destructor is called automatically when an object goes out of scope or is explicitly deleted.
// It is used to clean up resources, like releasing memory or closing files.

class DestructorExample {
public:
    ~DestructorExample() {
        cout << "Destructor called." << endl;  // Cleaning up resources (printing here for illustration)
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:14:35 Inheritance
// Inheritance is the mechanism of deriving a new class from an existing class. The new class (child class) inherits properties and behaviors (methods) of the existing class (parent class).

class Parent {
public:
    void show() {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent {  // Child class inherits from Parent class
public:
    void display() {
        cout << "This is the child class." << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:35:10 Polymorphism
// Polymorphism allows one interface to be used for different data types. It comes in two forms:
// 1. Function Overloading: Same function name, but different parameter types or number of parameters.
// 2. Function Overriding: Inherited function with a new implementation in the derived class.

class PolymorphismExample {
public:
    void show() {
        cout << "No arguments." << endl;
    }

    void show(int x) {
        cout << "Integer argument: " << x << endl;
    }
};

// Function Overriding and Virtual Function
// Virtual function is used to override a base class function in a derived class.

class Base {
public:
    virtual void print() {  // Virtual function, can be overridden
        cout << "Base class print function." << endl;
    }
};

class Derived : public Base {
public:
    void print() override {  // Overriding the base class function
        cout << "Derived class print function." << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:49:58 Abstract Class
// Abstract class is a class with at least one pure virtual function. It cannot be instantiated, but it can be inherited.
// The derived class must provide implementations for the pure virtual functions.

class AbstractExample {
public:
    virtual void display() = 0;  // Pure virtual function, making the class abstract
};

class ConcreteExample : public AbstractExample {
public:
    void display() override {  // Concrete implementation of the abstract method
        cout << "Concrete implementation." << endl;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:55:15 Static Keyword
// A static variable is shared by all instances of a class. It retains its value even if no object of the class is created.
// A static function can be called without an object, and it can only access static members of the class.

class StaticExample {
public:
    static int count;  // Static variable

    StaticExample() {
        count++;  // Increment the static variable every time an object is created
    }

    static void displayCount() {  // Static function
        cout << "Count: " << count << endl;
    }
};

int StaticExample::count = 0;  // Initializing the static variable outside the class

///////////////////////////////////////////////////////////////////////////////////////////////////////

// **Additional Concepts: Pointers, Addresses, and Structures**

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Pointers in C++
// Pointers are variables that store the address of another variable. They allow direct memory access and manipulation.

int main() {
    int x = 10;         // Normal variable
    int *p = &x;        // Pointer variable holding the address of x

    cout << "Value of x: " << x << endl;            // Value of x
    cout << "Address of x: " << &x << endl;         // Address of x
    cout << "Value through pointer p: " << *p << endl; // Value at the address stored in pointer p

    // Example of pointer to a class
    Student *studentPtr = &student1;  // Pointer to a Student object
    studentPtr->display();  // Using pointer to call method

    return 0;
}

// Pointers: Pros and Cons
// Pros: 
// 1. Allows direct memory access, efficient for dynamic memory allocation.
// 2. Supports dynamic data structures (linked lists, trees).
// 3. Enables passing large objects by reference instead of by value.
// Cons: 
// 1. Pointer manipulation can lead to errors like memory leaks or segmentation faults if not handled properly.

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Addresses in C++
// The address of a variable is the memory location where it is stored. You can use the address-of operator (&) to get the address of a variable.

int main() {
    int x = 100;
    int *ptr = &x;  // Address of x is stored in ptr

    cout << "Address of x: " << ptr << endl;  // Printing the address stored in ptr
    cout << "Value at the address: " << *ptr << endl;  // Dereferencing the pointer to get the value of x

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// Structure in C++
// A structure is a user-defined data type that groups together variables of different data types into a single unit.

struct Person {
    string name;   // Name of the person
    int age;       // Age of the person
};

int main() {
    Person person1;  // Declare an instance of structure
    person1.name = "Alice";
    person1.age = 25;

    cout << "Person's Name: " << person1.name << endl;
    cout << "Person's Age: " << person1.age << endl;

    return 0;
}

// Structure: Pros and Cons
// Pros:
// 1. Structures can group different data types together, making it easier to represent related information.
// 2. Used in various data structures like linked lists, stacks, and queues.
// Cons:
// 1. Limited in functionality compared to classes (e.g., no private/protected members, methods).

///////////////////////////////////////////////////////////////////////////////////////////////////////

// OOP Concepts Summary:
// 1. **Encapsulation**: Hiding the internal workings of a class and providing access to data through public methods. 
//    - *Real-world example*: A car's engine is encapsulated within the car, and you only interact with the steering wheel, pedals, etc.
//    - *Pros*: Reduces complexity and protects data.
//    - *Cons*: Can make the code harder to read if overused.

// 2. **Abstraction**: Hiding complex details and showing only the essential features.
//    - *Real-world example*: Using a phone – you don’t need to know how the inner circuits work, just how to use the interface.
//    - *Pros*: Simplifies code, makes systems easier to interact with.
//    - *Cons*: May require additional layers of code.

// 3. **Inheritance**: Deriving new classes from existing ones, inheriting their properties and behaviors.
//    - *Real-world example*: A dog is an animal (inherits properties like legs, eyes).
//    - *Pros*: Promotes code reuse, easy to extend functionality.
//    - *Cons*: Can lead to complex hierarchies and maintenance issues.

// 4. **Polymorphism**: Allows objects of different types to be treated as objects of a common base type, especially through overriding and overloading.
//    - *Real-world example*: Different vehicles (cars, bikes) can be driven, but they all implement a "drive" action in different ways.
//    - *Pros*: Reduces complexity by using a common interface for many different types.
//    - *Cons*: Can be difficult to trace when functions are overridden.
