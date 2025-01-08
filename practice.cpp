

// Classes:
    // A class is a user-defined data type that acts as a blueprint for creating objects. 
    // It can contain attributes (data) and methods (functions) to perform operations on the data.
#include <iostream>
using namespace std;
class Student {
public:
    int roll;
    string name;
    Student(int r, string n) {       // Constructor to initialize attributes
        roll = r;
        name = n;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;     // Method to display student details
    }
};

int main() {
    // Creating an object of the Student class
    Student s1(101, "Himanshu");
        cout << "Without Function Roll: " << s1.roll << ", Name: " << s1.name << endl;
    s1.display(); // Displaying the student details

    // Creating another object
    Student s2(102, "Jatin");
    s2.display();

    // Creating another object
    Student s3(103, "Vijay");
    s3.display();
}