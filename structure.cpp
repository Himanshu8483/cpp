// Structure (struct)
    // A structure is a user-defined data type that group different variables together under one name.
#include <iostream>
using namespace std;
struct classes {
    int roll = 101; // Default roll number
    string name = "Himanshu"; // Default name
    void show() {       // for function
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
} name; // Create an instance of the structure
int main() {
    cout << "Default Roll: " << name.roll << endl; //  Access structure members directly by instance
    classes myName;       // Creating a new instance
    cout << "Default Roll from new instance: " << myName.roll << endl;

    classes newName;      // Creating another instance and modify
    newName.roll = 202;
    cout << "Modified Roll: " << newName.roll << endl;

    classes aNew;   // Creating instance and modify name
    aNew.name = "John"; 
    cout << "Modified Name: " << aNew.name << endl;

    name.show();       // Call the show function
    return 0;
}

// Pointers in C++
    // A pointer is a variable that stores the memory address of another variable.
    // The '*' operator is used to access the value stored at the memory address.
    // The '&' operator is used to get the address of a variable.
#include <iostream>
using namespace std;
int main() {
    int a = 10; // Declare an integer variable
    int *p = &a; // Declare a pointer and store the address of 'a'
    cout << "Address of a: " << p << endl;  // Display address stored in the pointer
    cout << "Value of a: " << *p << endl;   //  Display the value of 'a' using the pointer
}

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
    // Displaying the student details by directly accessing the attributes
        cout << "Without Function Roll: " << s1.roll << ", Name: " << s1.name << endl;
    s1.display(); // Displaying the student details by function

    // Creating another object
    Student s2(102, "Jatin");
    s2.display();

    // Creating another object
    Student s3(103, "Vijay");
    s3.display();
}

// Key Differences Between Structures and Classes:
    // By default, members of a structure are public, while members of a class are private.
    // Structures are typically used to group simple data, whereas classes are used to model more complex entities with behaviors.
    // Classes support features like inheritance, encapsulation, and polymorphism, making them more powerful for object-oriented programming.
