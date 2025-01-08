#include <iostream>
using namespace std;

// Understanding Structure: A structure is a user-defined data type that allows grouping of related variables.
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

    // Understanding Pointer: A pointer is a variable that stores the address of another variable.
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
