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


///////////////////////////////////////////////////////////////////////////////////////////////////////

// Encapsulation:
// Definition: Encapsulation is about bundling data (variables) and methods (functions) that operate on the data into a single unit (class) and restricting direct access to some of the object’s components.
// Purpose: To protect data and enforce controlled access using getters and setters.
// Achieved By:
// Using access specifiers (private, protected, public).
// Example of Encapsulation:
// Imagine the same car. The engine is a private part of the car and cannot be accessed directly. You can only control it via public methods like pressing the start button.
#include <iostream>
using namespace std;

class Car {
private:
    int speed; // Private variable (Cannot be accessed directly outside the class)

public:
    // Setter for speed (controlled access)
    void setSpeed(int s) {      // Setter (public method to set the value)
        if (s >= 0) { // Validating speed
            speed = s;
        }
    }

    // Getter for speed (read-only access)
    int getSpeed() {        // Getter (public method to get the value)
        return speed;
    }
};
// Getter: A method used to retrieve the value of a private variable.
// Setter: A method used to set or update the value of a private variable.
int main() {
    Car myCar;

    myCar.setSpeed(50); // Setting speed through a public method
    cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;

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

// Polymorphism
// Polymorphism in C++ is a concept that allows a single function, operator, or method to behave differently based on the context. It simplifies programming and improves code flexibility. Let's break it down into simple points with examples:
// Types of Polymorphism
// Compile-Time Polymorphism (Static Binding):

// Achieved using function overloading and operator overloading.
// Decided at compile-time.
// Runtime Polymorphism (Dynamic Binding):

// Achieved using virtual functions.
// Decided at runtime.
// Examples of Polymorphism:
#include <iostream>
using namespace std;

// Function Overloading (Compile-time Polymorphism)
// Definition: Multiple functions with the same name but different parameters.

class Calculator {
public:
    int add(int a, int b) {
        return a + b; // Adds two integers
    }

    double add(double a, double b) {
        return a + b; // Adds two doubles
    }
};

// Operator Overloading (Compile-Time Polymorphism)
// Definition: Overloading operators like +, -, etc., for custom types.

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    Number operator+(const Number& n) {
        return Number(value + n.value); // Adds the values of two Number objects
    }

    void display() {
        cout << "Value: " << value << endl; // Displays the value
    }
};

// Runtime Polymorphism (Dynamic Binding)
// Definition: A base class pointer or reference calls a function that is overridden in a derived class.

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape" << endl; // Base class implementation
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl; // Derived class implementation
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl; // Derived class implementation
    }
};

int main() {
    // Function Overloading Example
    Calculator calc;
    cout << "Addition (int): " << calc.add(5, 10) << " // Output: 15" << endl;
    cout << "Addition (double): " << calc.add(5.5, 10.5) << " // Output: 16" << endl;

    // Operator Overloading Example
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    cout << "Number Addition: ";
    n3.display(); // Output: Value: 30

    // Runtime Polymorphism Example
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw(); // Output: Drawing a circle
    shape2->draw(); // Output: Drawing a rectangle

    delete shape1;
    delete shape2;

    return 0;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////
// Abstraction:
// Definition: Abstraction focuses on hiding the complex implementation and showing only the essential details to the user.
// Purpose: To reduce complexity by exposing only what’s necessary for the user.
// Achieved By:
// Abstract classes
// Interfaces
// Virtual functions (in C++)
// Example of Abstraction:
// Imagine a car. As a driver, you just need to know how to start the car, press the accelerator, and apply brakes. You don’t need to know the internal working of the engine.
#include <iostream>
using namespace std;

// Abstract Class
// Abstract class is a class with at least one pure virtual function. It cannot be instantiated, but it can be inherited.
// The derived class must provide implementations for the pure virtual functions.
class Vehicle {
public:
    virtual void startEngine() = 0; // Pure virtual function (no implementation here)
};

class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Engine started!" << endl; // Implementation specific to Car
    }
};

int main() {
    Vehicle* myCar = new Car(); // Create a Car object
    myCar->startEngine();       // Call the abstracted method
    return 0;
}

// Note: The abstract class acts as a blueprint, defining that any derived class must implement the startEngine() function.

///////////////////////////////////////////////////////////////////////////////////////////////////////
// Difference Table: Abstraction vs Encapsulation
// ---------------------------------------------
// | Aspect         | Abstraction                         | Encapsulation                         |
// |----------------|-------------------------------------|---------------------------------------|
// | Focus          | Hiding implementation details.      | Hiding internal data.                 |
// | Purpose        | To show only essential features.    | To protect data and maintain control. |
// | How It’s Achieved | Abstract classes, interfaces, virtual methods. | Access specifiers (private, public). |
// | Example        | A car’s controls (start, stop, accelerate). | A car’s engine (hidden, controlled via buttons). |

///////////////////////////////////////////////////////////////////////////////////////////////////////
// In Object-Oriented Programming (OOP), the static keyword is used to define members (variables or methods) that are shared among all instances of a class rather than being specific to each object. Here’s how the static keyword is typically used:

// Static Variables:
// A static variable is shared by all objects of the class. It retains its value even if no objects of the class exist.
// It is initialized only once, at the start of the program.
// It is accessed using the class name (e.g., ClassName::variable), not through an instance.
// Example:

class MyClass {
public:
    static int count; // static variable
    
    MyClass() {
        count++;
    }
};

// Define and initialize the static variable `count` outside the class using the scope resolution operator (::)
int MyClass::count = 0;     // It is essential for providing memory and initializing the static variable outside the class definition. 

int main() {
    MyClass obj1;
    MyClass obj2;
    cout << "Count: " << MyClass::count << endl; // Output will be 2
    return 0;
}

// Static Methods:

// A static method belongs to the class rather than any specific instance. It can be called without creating an object of the class.
// It can only access static variables or other static methods, as it doesn't have access to instance-specific data.
// Example:

class MyClass {
public:
    static void displayMessage() {
        cout << "This is a static method!" << endl;
    }
};

int main() {
    MyClass::displayMessage(); // Can be called without creating an object
    return 0;
}
// Summary:
// Static variables are shared between all objects and are initialized only once.
// Static methods can be called without creating objects and work only with static members.


// Here’s a mixed example demonstrating the use of both static variables and static methods along with instance-specific (non-static) variables and methods.

// Student Grade Management System:
// Suppose we want to keep track of the total number of students in a class and calculate grades for individual students.

// Example:
#include <iostream>
using namespace std;

class Student {
private:
    string name;     // Non-static: unique to each student
    int marks;       // Non-static: unique to each student

public:
    static int totalStudents; // Static: shared by all students

    // Constructor to initialize student details
    Student(string studentName, int studentMarks) {
        name = studentName;
        marks = studentMarks;
        totalStudents++; // Increment total students when a new student is created
    }

    // Static method to display total number of students
    static void displayTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Non-static method to display student details
    void displayStudentDetails() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    // Static method to calculate grade based on marks
    static char calculateGrade(int marks) {
        if (marks >= 90) return 'A';
        if (marks >= 75) return 'B';
        if (marks >= 50) return 'C';
        return 'F';
    }

    // Method to display student's grade
    void displayGrade() {
        cout << "Grade: " << calculateGrade(marks) << endl;
    }
};

// Initialize the static variable outside the class
int Student::totalStudents = 0;

int main() {
    // Create student objects
    Student student1("Alice", 85);
    Student student2("Bob", 92);
    Student student3("Charlie", 47);

    // Display individual student details
    student1.displayStudentDetails();
    student1.displayGrade();

    student2.displayStudentDetails();
    student2.displayGrade();

    student3.displayStudentDetails();
    student3.displayGrade();

    // Use the static method to display total students
    Student::displayTotalStudents();

    // Use the static method directly to calculate grade for a specific marks
    cout << "Grade for 76 marks: " << Student::calculateGrade(76) << endl;

    return 0;
}

// Explanation:

// Static Variable:
// totalStudents keeps track of how many students have been created and is shared among all instances of the Student class.
// It is updated whenever a new student is created.

// Static Methods:
// displayTotalStudents shows the total number of students. It doesn’t depend on any individual student.
// calculateGrade computes the grade based on marks and is reusable without needing to reference any specific student object.

// Non-Static Members:
// Each student has a name and marks, which are unique to that specific student.
// Methods like displayStudentDetails and displayGrade work with instance-specific data.
// Output:
// Name: Alice, Marks: 85
// Grade: B
// Name: Bob, Marks: 92
// Grade: A
// Name: Charlie, Marks: 47
// Grade: F
// Total Students: 3
// Grade for 76 marks: B

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
