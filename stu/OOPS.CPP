// OOP Concepts in C++ with Simple Code Examples

#include <iostream>
using namespace std;

// **1. Pointers and Addresses**
// - Demonstrates pointers and memory addresses in C++.
void pointerExample() {
    int a = 10;
    int* ptr = &a;  // Pointer to variable a

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Pointer ptr points to address: " << ptr << endl;
    cout << "Value at address pointed by ptr: " << *ptr << endl;
}

// **2. 'this' Pointer**
// - Refers to the current object of the class.
class ThisExample {
private:
    int value;

public:
    ThisExample(int value) {
        this->value = value;  // 'this' differentiates between member and parameter
    }

    void display() {
        cout << "Value: " << this->value << endl;
    }
};

// **3. Constructor and Destructor**
// - Constructor initializes an object, Destructor cleans up after an object is no longer in use.
class Example {
private:
    int* ptr;

public:
    // Constructor
    Example(int value) {
        ptr = new int(value);
        cout << "Constructor called. Value: " << *ptr << endl;
    }

    // Destructor
    ~Example() {
        delete ptr;
        cout << "Destructor called." << endl;
    }
};

// **4. Copy Constructor**
// - Creates a new object as a copy of an existing object.
class CopyExample {
private:
    int value;

public:
    CopyExample(int v) : value(v) {}

    // Copy constructor
    CopyExample(const CopyExample& obj) {
        value = obj.value;
        cout << "Copy constructor called. Value: " << value << endl;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

// **5. Shallow Copy vs Deep Copy**
class CopyDemo {
private:
    int* data;

public:
    // Constructor
    CopyDemo(int value) {
        data = new int(value);
    }

    // Shallow Copy Constructor
    CopyDemo(const CopyDemo& obj) {
        data = obj.data;  // Copy address only
        cout << "Shallow copy constructor called." << endl;
    }

    // Deep Copy Constructor
    CopyDemo(const CopyDemo& obj, bool deep) {
        data = new int(*obj.data);  // Copy value at address
        cout << "Deep copy constructor called." << endl;
    }

    void display() {
        cout << "Data: " << *data << endl;
    }

    ~CopyDemo() {
        delete data;
    }
};

// **6. Encapsulation**
// - Encapsulation is achieved by keeping data members private and providing public methods for controlled access.
class BankAccount {
private:
    double balance;  // Private data member

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance) {
        balance = initialBalance > 0 ? initialBalance : 0;
    }

    // Public method to deposit money
    void deposit(double amount) {
        if (amount > 0) balance += amount;
    }

    // Public method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) balance -= amount;
    }

    // Public method to check balance
    double getBalance() {
        return balance;
    }
};

// **7. Inheritance**
// - Enables a child class to inherit properties and methods from a parent class.

// Single Inheritance: Car inherits from Vehicle
class Vehicle {
public:
    void start() {
        cout << "Vehicle started." << endl;
    }
};

class Car : public Vehicle {
public:
    void honk() {
        cout << "Car honking." << endl;
    }
};

// Multilevel Inheritance: SportsCar -> Car -> Vehicle
class SportsCar : public Car {
public:
    void boost() {
        cout << "SportsCar boosting!" << endl;
    }
};

// Hierarchical Inheritance: Car and Bike inherit from Vehicle
class Bike : public Vehicle {
public:
    void ride() {
        cout << "Bike riding." << endl;
    }
};

// Multiple Inheritance: HybridCar inherits from ElectricVehicle and GasVehicle
class ElectricVehicle {
public:
    void chargeBattery() {
        cout << "Charging battery." << endl;
    }
};

class GasVehicle {
public:
    void refuel() {
        cout << "Refueling gas." << endl;
    }
};

class HybridCar : public ElectricVehicle, public GasVehicle {
public:
    void drive() {
        cout << "Driving hybrid car." << endl;
    }
};

// **8. Polymorphism**
// - Allows functions to behave differently based on the object that calls them.

// Compile-Time Polymorphism: Function Overloading
class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

// Run-Time Polymorphism: Function Overriding
class Base {
public:
    virtual void display() {
        cout << "Base class display." << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display." << endl;
    }
};

// **9. Operator Overloading**
// - Overloading operators to work with user-defined types.
class Complex {
private:
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    // Overload + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

// **10. Abstraction**
// - Abstraction hides implementation details and shows only essential features.
// Example: Payment system with different payment methods.
class PaymentMethod {
public:
    virtual void makePayment(double amount) = 0;  // Pure virtual function
};

class CreditCard : public PaymentMethod {
public:
    void makePayment(double amount) override {
        cout << "Paid $" << amount << " using Credit Card." << endl;
    }
};

class PayPal : public PaymentMethod {
public:
    void makePayment(double amount) override {
        cout << "Paid $" << amount << " using PayPal." << endl;
    }
};

// **11. Static Members**
// - Static variables and functions are shared across all objects of the class.
class StaticExample {
public:
    static int count;  // Static variable

    StaticExample() {
        count++;
    }

    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

int StaticExample::count = 0;  // Initialize static variable

// Main Function to Demonstrate All Concepts
int main() {
    // 1. Pointers and Addresses
    pointerExample();

    // 2. 'this' Pointer
    ThisExample thisEx(42);
    thisEx.display();

    // 3. Constructor and Destructor
    Example example(100);

    // 4. Copy Constructor
    CopyExample obj1(10);
    CopyExample obj2 = obj1;
    obj2.display();

    // 5. Shallow Copy vs Deep Copy
    CopyDemo shallow(100);
    CopyDemo shallowCopy = shallow;  // Shallow Copy
    shallowCopy.display();

    CopyDemo deep(200);
    CopyDemo deepCopy(deep, true);  // Deep Copy
    deepCopy.display();

    // 6. Encapsulation
    BankAccount account(1000);
    account.deposit(500);
    account.withdraw(300);
    cout << "Balance: $" << account.getBalance() << endl;

    // 7. Inheritance
    Car car;
    car.start();
    car.honk();

    SportsCar sportsCar;
    sportsCar.start();
    sportsCar.boost();

    Bike bike;
    bike.start();
    bike.ride();

    HybridCar hybrid;
    hybrid.chargeBattery();
    hybrid.refuel();
    hybrid.drive();

    // 8. Polymorphism
    Calculator calc;
    cout << "Sum (int): " << calc.add(3, 5) << endl;
    cout << "Sum (double): " << calc.add(3.5, 5.5) << endl;

    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;
    basePtr->display();

    // 9. Operator Overloading
    Complex c1(3, 4), c2(1, 2);
    Complex c3 = c1 + c2;
    c3.display();

    // 10. Abstraction
    CreditCard cc;
    PayPal pp;
    PaymentMethod* method = &cc;
    method->makePayment(200);
    method = &pp;
    method->makePayment(150);

    // 11. Static Members
    StaticExample objA;
    StaticExample objB;
    StaticExample::displayCount();

    return 0;
}
