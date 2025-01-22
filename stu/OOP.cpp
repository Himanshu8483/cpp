#include <iostream>
using namespace std;

// 00:00 Introduction
// Object-Oriented Programming (OOP) makes it easier to write, understand, and maintain code by using concepts like classes, objects, inheritance, polymorphism, encapsulation, and abstraction. These concepts make code more modular, reusable, and easier to manage.

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 01:26 OOP Principles
// OOP has four main principles: Encapsulation, Abstraction, Inheritance, and Polymorphism.

// 03:38 Class & Object
// A class is a blueprint for creating objects (instances of that class). 
// An object is a real-world entity that is created from a class. It contains data and methods to perform operations.

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

// 17:05 Access Specifier
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

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 23:48 Encapsulation
// Encapsulation is the process of bundling data (variables) and methods (functions) that operate on the data into a single unit or class. Restricting direct access to the data to ensure better control and security.
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
// Getter: A method used to retrieve the value of a private variable.
// Setter: A method used to set or update the value of a private variable.
int main() {
    EncapsulationExample obj; // Creating an object of the class
    // Using the setter to set a value
    obj.setValue(42);
    // Using the getter to retrieve the value
    cout << "The value is: " << obj.getValue() << endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 29:10 Constructor
// A constructor is a special function in a class that is automatically called when an object is created. It has the same name as the class and no return type.

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
int main() {
    ConstructorExample obj("Himanshu");      // Creating an object and passing a value to the constructor
    obj.showName();     // Calling the method to display the name

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 41:08 this Pointer
// The 'this' pointer is a pointer that refers to the current object. It is used inside a class to access members of the object.
class ThisPointerExample {
private:
    int value;  // Private member variable

public:
    // Constructor with a parameter
    ThisPointerExample(int value) {
        // Ambiguity: 'value' refers to both the class member and the constructor parameter.
        // Without 'this', the constructor would assign the parameter to itself.
        this->value = value;  // 'this->value' refers to the class member, 'value' refers to the parameter
    }

    // Method to display the value
    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    
    ThisPointerExample obj(10);     // Create an object and pass a value to the constructor
    obj.display();  // Output: Value: 10 
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 46:33 Copy Constructor
// A copy constructor is used to create a new object as a copy of an existing object.

class CopyConstructorExample {
public:
    int x;

    // Normal constructor to initialize the object
    CopyConstructorExample(int val) {
        x = val;
        cout << "Normal Constructor Called" << endl;
    }

    // Copy constructor to create a new object as a copy of another object
    CopyConstructorExample(const CopyConstructorExample &obj) {
    // Efficiency: &obj means that we are passing a reference to an existing object of type CopyConstructorExample. A reference is like an alias or shortcut to the original object. Instead of making a full copy of the object, we just refer to it directly using obj.
    // Safety: The const ensures that the original object (obj) cannot be accidentally modified inside the constructor.
        x = obj.x;  // Copy the value from the original object
        cout << "Copy Constructor Called" << endl;
    }

    // Method to display the value of x
    void display() {
        cout << "X: " << x << endl;
    }
};

int main() {
    // Create an object 'obj1' using the normal constructor
    CopyConstructorExample obj1(10);
    // Create another object 'obj2' as a copy of 'obj1'
    CopyConstructorExample obj2 = obj1;  // Copy constructor is called here
    // Display the values of both objects
    obj1.display();  // Output: X: 10
    obj2.display();  // Output: X: 10
    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 51:56 Shallow vs Deep Copy
// A shallow copy duplicates the object by copying only the reference (pointer) to the data, not the actual data itself. Both the original object and the copied object share the same memory for the data. Any modification to the data through one object will affect the other object because they refer to the same memory.

// A deep copy duplicates the object by creating a new memory allocation for the data and then copying the actual data into this new memory. The original object and the copied object have separate memory for their data. Changes made to the data in one object will not affect the other object.
// Shallow Copy :
class ShallowCopyExample {
private:
    int *data;  // Pointer to dynamically allocate memory for an integer

public:
    // Constructor: Dynamically allocates memory and initializes the value
    ShallowCopyExample(int value) {
        data = new int(value);  // Allocate memory for the integer and store the value
        cout << "Constructor called: Allocated memory and set value to " << *data << endl;
    }

    // Shallow Copy Constructor: Copies the pointer, not the data
    ShallowCopyExample(const ShallowCopyExample &obj) {
        data = obj.data;  // Copy the address of the original object's memory
        cout << "Shallow Copy Constructor called: Pointer copied, value = " << *data << endl;
    }

    // Destructor: Frees dynamically allocated memory
    ~ShallowCopyExample() {
        cout << "Destructor called: Freed memory for value " << *data << endl;
        delete data;  // Free the allocated memory
    }

    // Display function: Prints the value stored in the dynamically allocated memory
    void display() const {
        cout << "Data: " << *data << endl;
    }

    // Setter: Allows modifying the value
    void setData(int value) {
        *data = value;
    }
};

int main() {
    // Create an object with a value
    ShallowCopyExample obj1(10);  // Constructor is called
    obj1.display();              // Output: Data: 10

    // Create a new object as a shallow copy of obj1
    ShallowCopyExample obj2 = obj1;  // Shallow copy constructor is called
    obj2.display();                 // Output: Data: 10

    // Modify the value using obj2
    obj2.setData(20);  // Modifies the shared memory
    cout << "\nAfter modifying obj2's value:" << endl;
    obj1.display();  // Output: Data: 20 (both objects point to the same memory)
    obj2.display();  // Output: Data: 20

    // The destructor will be called automatically for both objects
    return 0;
}
// Output:
// Constructor called: Allocated memory and set value to 10
// Data: 10
// Shallow Copy Constructor called: Pointer copied, value = 10
// Data: 10

// After modifying obj2's value:
// Data: 20
// Data: 20
// Destructor called: Freed memory for value 20
// Destructor called: Freed memory for value 20

// Deep Copy :
class DeepCopyExample {
private:
    int *data;  // Pointer to dynamically allocate memory for an integer

public:
    // Constructor: Dynamically allocates memory and initializes the value
    DeepCopyExample(int value) {
        data = new int(value);  // Allocate memory for the integer and store the value
        cout << "Constructor called: Allocated memory and set value to " << *data << endl;
    }

    // Deep Copy Constructor: Allocates new memory and copies the value
    DeepCopyExample(const DeepCopyExample &obj) {
        data = new int(*obj.data);  // Allocate new memory and copy the value from the original object
        cout << "Deep Copy Constructor called: Created a deep copy with value " << *data << endl;
    }

    // Destructor: Frees dynamically allocated memory
    ~DeepCopyExample() {
        cout << "Destructor called: Freed memory for value " << *data << endl;
        delete data;  // Free the allocated memory
    }

    // Display function: Prints the value stored in the dynamically allocated memory
    void display() const {
        cout << "Data: " << *data << endl;
    }

    // Setter: Allows modifying the value
    void setData(int value) {
        *data = value;
    }
};

int main() {
    // Create an object with a value
    DeepCopyExample obj1(10);  // Constructor is called
    obj1.display();            // Output: Data: 10

    // Create a new object as a deep copy of obj1
    DeepCopyExample obj2 = obj1;  // Deep copy constructor is called
    obj2.display();               // Output: Data: 10

    // Modify the value using obj2
    obj2.setData(20);  // Modifies only obj2's memory
    cout << "\nAfter modifying obj2's value:" << endl;
    obj1.display();  // Output: Data: 10 (obj1 remains unchanged)
    obj2.display();  // Output: Data: 20

    // The destructor will be called automatically for both objects
    return 0;
}

// Output :
// Constructor called: Allocated memory and set value to 10
// Data: 10
// Deep Copy Constructor called: Created a deep copy with value 10
// Data: 10

// After modifying obj2's value:
// Data: 10
// Data: 20
// Destructor called: Freed memory for value 10
// Destructor called: Freed memory for value 20



///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:09:07 Destructor
    // Destructor: Automatically called when the object is destroyed.
    // Purpose:
    // - Clean up resources, such as releasing memory, closing files, etc.
    // - Ensure proper cleanup to prevent memory leaks or resource locking.
class DestructorExample {
    
public:

    ~DestructorExample() {
        cout << "Destructor called." << endl;  // Example: Printing a message to show when it is called.
    }
};

int main() {
    cout << "Creating an object." << endl;
    {
        DestructorExample obj;  // Object created; constructor (if defined) would be called here.
        cout << "Object is in scope." << endl;
    }  // Destructor automatically called here when 'obj' goes out of scope.

    cout << "Object is now destroyed." << endl;
    return 0;
}
// Output:
// Creating an object.
// Object is in scope.
// Destructor called.
// Object is now destroyed.


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
// Types :
#include <iostream>
using namespace std;

// Base class: Vehicle
class Vehicle {
public:
    void move() {
        cout << "This vehicle moves on the road." << endl;
    }
};

// Base class: FuelPowered
class FuelPowered {
public:
    void refuel() {
        cout << "This vehicle uses fuel for power." << endl;
    }
};

// Single Inheritance: Derived class Car inherits from Vehicle
class Car : public Vehicle {
public:
    void drive() {
        cout << "The car can be driven." << endl;
    }
};

// Multi-level Inheritance: Car -> ElectricCar (ElectricCar inherits from Car)
class ElectricCar : public Car {
public:
    void chargeBattery() {
        cout << "The electric car charges its battery." << endl;
    }
};

// Hierarchical Inheritance: Multiple classes (Car, Bike) inherit from the same base class (Vehicle)
class Bike : public Vehicle {
public:
    void pedal() {
        cout << "The bike can be pedaled." << endl;
    }
};

// Multiple Inheritance: A class inherits from more than one base class
class HybridCar : public Car, public FuelPowered {
public:
    void useHybridMode() {
        cout << "The hybrid car can use both fuel and battery power." << endl;
    }
};

// Hybrid Inheritance: Combination of multiple inheritance and other types
class AdvancedHybridCar : public ElectricCar, public FuelPowered {
public:
    void showAdvancedFeatures() {
        cout << "The advanced hybrid car has both electric and fuel-powered modes." << endl;
    }
};

int main() {
    // Single Inheritance example
    Car car;
    car.move();  // From Vehicle
    car.drive(); // Specific to Car

    // Multi-level Inheritance example
    ElectricCar eCar;
    eCar.move();          // From Vehicle
    eCar.drive();         // From Car
    eCar.chargeBattery(); // Specific to ElectricCar

    // Hierarchical Inheritance example
    Bike bike;
    bike.move();  // From Vehicle
    bike.pedal(); // Specific to Bike

    // Multiple Inheritance example
    HybridCar hybridCar;
    hybridCar.move();       // From Car -> Vehicle
    hybridCar.drive();      // From Car
    hybridCar.refuel();     // From FuelPowered
    hybridCar.useHybridMode(); // Specific to HybridCar

    // Hybrid Inheritance example
    AdvancedHybridCar advancedCar;
    advancedCar.move();                // From ElectricCar -> Car -> Vehicle
    advancedCar.chargeBattery();       // From ElectricCar
    advancedCar.refuel();              // From FuelPowered
    advancedCar.showAdvancedFeatures(); // Specific to AdvancedHybridCar

    return 0;
}

// Output: 
// This vehicle moves on the road.
// The car can be driven.
// This vehicle moves on the road.
// The car can be driven.
// The electric car charges its battery.
// This vehicle moves on the road.
// The bike can be pedaled.
// This vehicle moves on the road.
// The car can be driven.
// This vehicle uses fuel for power.
// The hybrid car can use both fuel and battery power.
// This vehicle moves on the road.
// The electric car charges its battery.
// This vehicle uses fuel for power.
// The advanced hybrid car has both electric and fuel-powered modes.

// Explanation of the Code:
// Single Inheritance (Car inherits from Vehicle):

// A Car is a type of Vehicle. The Car class adds specific functionality like driving (drive()), while inheriting the basic move() method from Vehicle.
// Multi-level Inheritance (ElectricCar inherits from Car):

// An ElectricCar extends the functionality of a Car by adding the ability to charge its battery (chargeBattery()), while still having access to the Car and Vehicle methods.
// Hierarchical Inheritance (Car and Bike inherit from Vehicle):

// Both Car and Bike are types of Vehicle, but each has unique behavior (drive() for Car and pedal() for Bike).
// Multiple Inheritance (HybridCar inherits from Car and FuelPowered):

// A HybridCar combines properties of a Car and a FuelPowered vehicle. It can drive (drive()), move (move()), and refuel (refuel()), while also having a unique feature: using hybrid mode.
// Hybrid Inheritance (AdvancedHybridCar inherits from ElectricCar and FuelPowered):

// The AdvancedHybridCar is a combination of multiple and multi-level inheritance. It combines the electric features (chargeBattery()) from ElectricCar and the fuel-related features (refuel()) from FuelPowered.
// Key Differences:
// Single Inheritance: Simple and straightforward, focusing on a single relationship.
// Multi-level Inheritance: Adds extended functionality through a chain of inheritance.
// Hierarchical Inheritance: Allows multiple derived classes to inherit from a common base class.
// Multiple Inheritance: Combines features from multiple base classes but can lead to complexity.
// Hybrid Inheritance: A mix of multiple types of inheritance, demonstrating the most complex relationships.
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

// Base class: Animal
class Animal {
public:
    virtual void makeSound() {  // Virtual function (can be overridden)
        cout << "Some generic animal sound!" << endl;
    }
};

// Derived class: Dog
class Dog : public Animal {
public:
    void makeSound() override {  // Override the base class function
        cout << "Woof! Woof!" << endl;
    }
};

// Derived class: Cat
class Cat : public Animal {
public:
    void makeSound() override {  // Override the base class function
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal *animal;  // Pointer to base class

    Dog dog;    // Create a Dog object
    Cat cat;    // Create a Cat object

    animal = &dog;       // Point to the Dog object
    animal->makeSound(); // Output: Woof! Woof! (Dog's version)

    animal = &cat;       // Point to the Cat object
    animal->makeSound(); // Output: Meow! Meow! (Cat's version)

    return 0;
}
	// Pointer (*): Stores the address of an object (e.g., Animal *animal = &dog;).
	// Dereference (->): Used to access members of the object via its pointer.
	// Polymorphism:
	// Compile-Time: Function overloading (same name, different parameters).
	// Runtime: Virtual functions, where the function called depends on the actual object type at runtime.


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
int main() {
    ConcreteExample obj;  // Create an object of the derived class
    obj.display();        // Calls the overridden display() function
    return 0;
}
// Note: The abstract class acts as a blueprint, defining that any derived class must implement the display() function.
// The derived class (ConcreteExample) fulfills this requirement by providing its own version of display().
///////////////////////////////////////////////////////////////////////////////////////////////////////

// 1:55:15 Static Keyword
// A static variable is shared by all instances of a class. It retains its value even if no object of the class is created.
// A static function can be called without an object, and it can only access static members of the class.

#include <iostream>
using namespace std;

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

// Initialize the static variable outside the class
int StaticExample::count = 0;       // It is essential for providing memory and initializing the static variable outside the class definition.

int main() {
    StaticExample obj1;  // First object created
    StaticExample obj2;  // Second object created
    StaticExample obj3;  // Third object created

    // Display the count using the class name
    StaticExample::displayCount();

    return 0;
}
// Output: Count: 3

#include <iostream>
using namespace std;

// Class to represent a bank with a static amount shared by all objects of the class
class Bank {
    public:
        // Static member variable (shared by all objects of the class)
        static int amount;

        // Static member function that modifies the static variable `amount` by subtraction
        static void showamount(int x) {
            amount -= x; // Decrease the static variable `amount` by `x`
            cout << "amount = " << amount << endl; // Print the updated value of `amount`
        }

        // Static member function to reset the amount back to 10 for each object if needed
        static void resetAmount() {
            amount = 10; // Reset the amount to 10
        }
};

// Define and initialize the static variable `amount` outside the class using the scope resolution operator (::)
// This sets the initial amount to 10
int Bank::amount = 10; 

int main() {
    // Create the first object of class Bank
    Bank obj1;
    // Call the static function using obj1 and pass 2 to decrease the amount by 2
    obj1.showamount(2);

    cout << endl; // Adding a line break for better readability

    // Reset the amount back to 10 before creating the second object
    Bank::resetAmount();

    // Create the second object of class Bank
    Bank obj2;
    // Call the static function using obj2 and pass 4 to decrease the amount by 4
    obj2.showamount(4); 

    // Call the static function directly using the class name and pass 3 to decrease the amount by 3
    Bank::showamount(3);

    return 0;
}
// Output :
// amount = 8
// amount = 6
// amount = 3

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
