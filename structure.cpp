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


#include <iostream>
using namespace std;
// Example: An employee structure can have multiple fields like name, salary, etc.
struct employee{
    int salary;     // Stores the salary of the employee
    string name;    // Stores the name of the employee
};

int main(){
    // Create an employee variable 'p'
    employee p;           // 'p' is an object of the structure 'employee'
    p.name = "Himanshu"; // Assign a name to 'p'
    p.salary = 10000;     // Assign a salary to 'p'

    // 'employee *a' means 'a' is a pointer that can store the address of an 'employee' object.
    employee *a;          // Declare a pointer to an employee
    a = &p;               // 'a' now holds the address of 'p'

    // Why use pointers? Pointers allow you to access and modify variables indirectly using their addresses.
    // Example: Using the pointer 'a', we can change the values of 'p' without directly using 'p'.

    // Taking user input through pointer 'a'
    cout << "Enter name & Salary = ";
    cin >> a->name;       // Using '->' to access 'name' through the pointer
    cin >> a->salary;     // Using '->' to access 'salary' through the pointer

    // Printing values using pointer 'a'
    cout << a->name << endl;   // Output the name stored in 'p'
    cout << a->salary << endl; // Output the salary stored in 'p'
}


#include <iostream>
using namespace std;

// Understanding Self-Referencing Pointer: A pointer inside a structure that points to another structure of the same type.
struct employee{
    int salary;              // Stores the salary of the employee
    string name;             // Stores the name of the employee
    employee *link = NULL;   // Self-referencing pointer to link another employee object
};

int main(){
    // Create two employee objects 'p1' and 'p2'
    employee p1, p2;

    // Assign values to 'p1'
    p1.name = "Himanshu";
    p1.salary = 20000;
    p1.link = &p2;          // Link 'p1' to 'p2' using the 'link' pointer

    // Assign values to 'p2'
    p2.name = "Vijay";
    p2.salary = 30000;
    p2.link = &p1;          // Link 'p2' back to 'p1' using the 'link' pointer

    // Accessing linked employee details through 'p2'
    cout << p2.link->name << endl;   // Accessing 'p1' details through 'p2' link pointer
    cout << p2.link->salary << endl; // Output: Himanshu's salary (20000)

    cout << "\n====================\n";

    // Accessing linked employee details through 'p1'
    cout << p1.link->name << endl;   // Accessing 'p2' details through 'p1' link pointer
    cout << p1.link->salary << endl; // Output: Vijay's salary (30000)
}

/*
Summary of Concepts:
1. Structure: A way to group different variables under one name. Example: employee has 'name' and 'salary'.
2. Pointer: A variable that stores the address of another variable. Example: 'a' stores the address of 'p'.
3. Address (&): Used to get the memory location of a variable. Example: 'a = &p' means 'a' holds the address of 'p'.
4. Self-Referencing Pointer: A pointer inside a structure that can link to another object of the same structure type.
5. Why Use Pointers? They allow indirect access to variables and efficient manipulation of data structures like linked lists.
6. How to Get Output? Use '->' to access structure members through pointers.
*/


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
