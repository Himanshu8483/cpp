// Inheritance 
// // Inheritance Example in C++
#include <iostream>
using namespace std;

// Base Class: Person
class Person {
public:
    string name = "Himanshu";
    int age = 22;
};

// Single Inheritance: Student inherits from Person
class Student : public Person {
public:
    void show() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

// Separate Class: Teacher
class Teacher {
public:
    string subject = "Mathematics";
    void teach() {
        cout << "Teaching: " << subject << endl;
    }
};

// Multiple Inheritance: Artist inherits from both Teacher and Person
class Artist : public Teacher, public Person {
public:
    int roll = 1001;
    void showDetails() {
        cout << "Artist Roll Number: " << roll << endl;
        cout << "Artist Name: " << name << endl;
        cout << "Artist Age: " << age << endl;
        teach();  // Calling method from Teacher class
    }
};

// Multilevel Inheritance: Graduate inherits from Student
class Graduate : public Student {
public:
    void showGraduateDetails() {
        cout << "Graduate Details: " << endl;
        show();  // Calling show() from Student class
    }
};

// Hierarchical Inheritance: Undergraduate and Postgraduate inherit from Person
class Undergraduate : public Person {
public:
    void showUndergraduateDetails() {
        cout << "Undergraduate Name: " << name << endl;
        cout << "Undergraduate Age: " << age << endl;
    }
};

class Postgraduate : public Person {
public:
    void showPostgraduateDetails() {
        cout << "Postgraduate Name: " << name << endl;
        cout << "Postgraduate Age: " << age << endl;
    }
};

// Hybrid Inheritance: Combining different inheritance types
class HybridStudent : public Undergraduate, public Teacher {
public:
    void showHybridDetails() {
        cout << "Hybrid Student Details: " << endl;
        cout << "Name: " << name << endl;  // Access from Undergraduate
        cout << "Subject: " << subject << endl;  // Access from Teacher
    }
};

// Constructor Inheritance Example
class BaseTeacher {
public:
    BaseTeacher() {
        cout << "BaseTeacher Constructor Called" << endl;
    }
};

class BaseArtist {
public:
    BaseArtist() {
        cout << "BaseArtist Constructor Called" << endl;
    }
};

class BasePerson : public BaseArtist, public BaseTeacher {
public:
    BasePerson() {
        cout << "BasePerson Constructor Called" << endl;
    }
};

int main() {
    // Single Inheritance Example
    cout << "--- Single Inheritance ---" << endl;
    Student obj1;
    obj1.show();

    // Multiple Inheritance Example
    cout << "\n--- Multiple Inheritance ---" << endl;
    Artist obj2;
    obj2.showDetails();

    // Multilevel Inheritance Example
    cout << "\n--- Multilevel Inheritance ---" << endl;
    Graduate obj3;
    obj3.showGraduateDetails();

    // Hierarchical Inheritance Example
    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Undergraduate obj4;
    obj4.showUndergraduateDetails();

    Postgraduate obj5;
    obj5.showPostgraduateDetails();

    // Hybrid Inheritance Example
    cout << "\n--- Hybrid Inheritance ---" << endl;
    HybridStudent obj6;
    obj6.showHybridDetails();

    // Constructor Inheritance Example
    cout << "\n--- Constructor Inheritance ---" << endl;
    BasePerson obj7;

    return 0;
}


#include <iostream>
using namespace std;

// Base class (Parent)
class Vehicle {
protected:
    int speed;  // Protected member, accessible by derived classes

public:
    Vehicle() { speed = 0; }  // Constructor to initialize speed
    void setSpeed(int s) { speed = s; }  // Public method to set speed
    void displaySpeed() { cout << "Speed: " << speed << " km/h" << endl; }  // Public method to display speed
};

// Single Inheritance: Car inherits from Vehicle
class Car : public Vehicle {
public:
    void accelerate() {
        speed += 10;  // Accessing protected member from base class
        cout << "Car accelerated!" << endl;
    }
};

// Multilevel Inheritance: SportsCar inherits from Car
class SportsCar : public Car {
public:
    void turboBoost() {
        speed += 50;  // Accessing protected member from grandparent class
        cout << "Turbo Boost activated!" << endl;
    }
};

// Multiple Inheritance: Bike inherits from both Vehicle and Engine
class Engine {
public:
    void startEngine() { cout << "Engine started!" << endl; }
};

class Bike : public Vehicle, public Engine {
public:
    void ride() {
        speed += 20;  // Accessing protected member from Vehicle class
        cout << "Bike is riding!" << endl;
    }
};

// Hierarchical Inheritance: Truck and Bus inherit from Vehicle
class Truck : public Vehicle {
public:
    void loadCargo() { cout << "Truck loaded with cargo!" << endl; }
};

class Bus : public Vehicle {
public:
    void boardPassengers() { cout << "Passengers boarded the bus!" << endl; }
};

// Hybrid Inheritance Example
class ElectricVehicle {
public:
    void chargeBattery() { cout << "Battery charging..." << endl; }
};

class ElectricCar : public Vehicle, public ElectricVehicle {
public:
    void drive() {
        speed += 30;  // Accessing protected member from Vehicle class
        cout << "Electric car is driving!" << endl;
    }
};

int main() {
    // Single Inheritance Example
    Car car;
    car.setSpeed(50);  // Setting speed for car
    car.accelerate();  // Accelerate car
    car.displaySpeed();  // Display car speed

    // Multilevel Inheritance Example
    SportsCar sportsCar;
    sportsCar.setSpeed(60);  // Setting speed for sports car
    sportsCar.turboBoost();  // Activate turbo boost
    sportsCar.displaySpeed();  // Display sports car speed

    // Multiple Inheritance Example
    Bike bike;
    bike.setSpeed(20);  // Setting speed for bike
    bike.startEngine();  // Start engine
    bike.ride();  // Ride the bike
    bike.displaySpeed();  // Display bike speed

    // Hierarchical Inheritance Example
    Truck truck;
    truck.setSpeed(40);  // Setting speed for truck
    truck.loadCargo();  // Load cargo on truck
    truck.displaySpeed();  // Display truck speed

    Bus bus;
    bus.setSpeed(30);  // Setting speed for bus
    bus.boardPassengers();  // Board passengers on bus
    bus.displaySpeed();  // Display bus speed

    // Hybrid Inheritance Example
    ElectricCar electricCar;
    electricCar.setSpeed(70);  // Setting speed for electric car
    electricCar.chargeBattery();  // Charge battery
    electricCar.drive();  // Drive the electric car
    electricCar.displaySpeed();  // Display electric car speed

    return 0;
}


// Inheritance Example in C++ with Deep and Shallow Copy
#include <iostream>
#include <cstring>
using namespace std;

// Base Class: Person
class Person {
public:
    string name;
    int age;

    // Constructor
    Person(string n = "Himanshu", int a = 22) : name(n), age(a) {}

    // Copy Constructor (Shallow Copy by default)
    Person(const Person &p) {
        name = p.name;
        age = p.age;
        cout << "Shallow Copy Constructor Called" << endl;
    }
};

// Class with Shallow Copy Example
class ShallowCopyExample {
private:
    char *data;

public:
    // Constructor
    ShallowCopyExample(const char *value) {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
        cout << "Constructor Called" << endl;
    }

    // Shallow Copy Constructor
    ShallowCopyExample(const ShallowCopyExample &source) {
        data = source.data;
        cout << "Shallow Copy Constructor Called" << endl;
    }

    // Destructor
    ~ShallowCopyExample() {
        delete[] data;
        cout << "Destructor Called" << endl;
    }

    // Display Function
    void showData() {
        cout << "Data: " << data << endl;
    }
};

// Class with Deep Copy Example
class DeepCopyExample {
private:
    char *data;

public:
    // Constructor
    DeepCopyExample(const char *value) {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
        cout << "Constructor Called" << endl;
    }

    // Deep Copy Constructor
    DeepCopyExample(const DeepCopyExample &source) {
        data = new char[strlen(source.data) + 1];
        strcpy(data, source.data);
        cout << "Deep Copy Constructor Called" << endl;
    }

    // Destructor
    ~DeepCopyExample() {
        delete[] data;
        cout << "Destructor Called" << endl;
    }

    // Display Function
    void showData() {
        cout << "Data: " << data << endl;
    }
};

// Single Inheritance: Student inherits from Person
class Student : public Person {
public:
    void show() {
        cout << "Student Name: " << name << endl;
        cout << "Student Age: " << age << endl;
    }
};

// Separate Class: Teacher
class Teacher {
public:
    string subject = "Mathematics";
    void teach() {
        cout << "Teaching: " << subject << endl;
    }
};

// Multiple Inheritance: Artist inherits from both Teacher and Person
class Artist : public Teacher, public Person {
public:
    int roll = 1001;
    void showDetails() {
        cout << "Artist Roll Number: " << roll << endl;
        cout << "Artist Name: " << name << endl;
        cout << "Artist Age: " << age << endl;
        teach();  // Calling method from Teacher class
    }
};

// Multilevel Inheritance: Graduate inherits from Student
class Graduate : public Student {
public:
    void showGraduateDetails() {
        cout << "Graduate Details: " << endl;
        show();  // Calling show() from Student class
    }
};

// Hierarchical Inheritance: Undergraduate and Postgraduate inherit from Person
class Undergraduate : public Person {
public:
    void showUndergraduateDetails() {
        cout << "Undergraduate Name: " << name << endl;
        cout << "Undergraduate Age: " << age << endl;
    }
};

class Postgraduate : public Person {
public:
    void showPostgraduateDetails() {
        cout << "Postgraduate Name: " << name << endl;
        cout << "Postgraduate Age: " << age << endl;
    }
};

// Hybrid Inheritance: Combining different inheritance types
class HybridStudent : public Undergraduate, public Teacher {
public:
    void showHybridDetails() {
        cout << "Hybrid Student Details: " << endl;
        cout << "Name: " << name << endl;  // Access from Undergraduate
        cout << "Subject: " << subject << endl;  // Access from Teacher
    }
};

// Constructor Inheritance Example
class BaseTeacher {
public:
    BaseTeacher() {
        cout << "BaseTeacher Constructor Called" << endl;
    }
};

class BaseArtist {
public:
    BaseArtist() {
        cout << "BaseArtist Constructor Called" << endl;
    }
};

class BasePerson : public BaseArtist, public BaseTeacher {
public:
    BasePerson() {
        cout << "BasePerson Constructor Called" << endl;
    }
};

int main() {
    // Single Inheritance Example
    cout << "--- Single Inheritance ---" << endl;
    Student obj1;
    obj1.name = "Himanshu";
    obj1.age = 22;
    obj1.show();

    // Multiple Inheritance Example
    cout << "\n--- Multiple Inheritance ---" << endl;
    Artist obj2;
    obj2.showDetails();

    // Multilevel Inheritance Example
    cout << "\n--- Multilevel Inheritance ---" << endl;
    Graduate obj3;
    obj3.showGraduateDetails();

    // Hierarchical Inheritance Example
    cout << "\n--- Hierarchical Inheritance ---" << endl;
    Undergraduate obj4;
    obj4.showUndergraduateDetails();

    Postgraduate obj5;
    obj5.showPostgraduateDetails();

    // Hybrid Inheritance Example
    cout << "\n--- Hybrid Inheritance ---" << endl;
    HybridStudent obj6;
    obj6.showHybridDetails();

    // Constructor Inheritance Example
    cout << "\n--- Constructor Inheritance ---" << endl;
    BasePerson obj7;

    // Deep Copy Example
    cout << "\n--- Deep Copy Example ---" << endl;
    DeepCopyExample obj8("Hello World");
    obj8.showData();

    DeepCopyExample obj9 = obj8;  // Calls Deep Copy Constructor
    obj9.showData();

    // Shallow Copy Example
    cout << "\n--- Shallow Copy Example ---" << endl;
    ShallowCopyExample obj10("Sample Data");
    obj10.showData();

    ShallowCopyExample obj11 = obj10;  // Calls Shallow Copy Constructor
    obj11.showData();

    return 0;
}
