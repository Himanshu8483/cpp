// #include <iostream>
// using namespace std;

// // Define a structure to represent an employee
// struct employee{
//     int salary;     // Variable to store employee's salary
//     string name;    // Variable to store employee's name
// };

// int main(){
//     employee p;           // Declare an employee variable 'p'
//     p.name = "Himanshu"; // Assign name to 'p'
//     p.salary = 10000;     // Assign salary to 'p'

//     employee *a;          // Declare a pointer to an employee
//     a = &p;               // Make 'a' point to 'p'

//     // Taking user input through pointer 'a'
//     cout << "Enter name & Salary = ";
//     cin >> a->name;       // Using pointer 'a' to access 'name'
//     cin >> a->salary;     // Using pointer 'a' to access 'salary'

//     // Printing values using pointer 'a'
//     cout << a->name << endl;
//     cout << a->salary;
// }


#include <iostream>
using namespace std;

// Define a structure to represent an employee with a self-referencing pointer
struct employee{
    int salary;              // Variable to store employee's salary
    string name;             // Variable to store employee's name
    employee *link = NULL;   // Pointer to link another employee structure
};

int main(){
    employee p1, p2;        // Declare two employee variables 'p1' and 'p2'

    // Assign values to 'p1'
    p1.name = "Himanshu";
    p1.salary = 20000;
    p1.link = &p2;          // Link 'p1' to 'p2'

    // Assign values to 'p2'
    p2.name = "Vijay";
    p2.salary = 30000;
    p2.link = &p1;          // Link 'p2' back to 'p1'

    // Accessing linked employee details through 'p2'
    cout << p2.link->name << endl;   // Output: Himanshu
    cout << p2.link->salary << endl; // Output: 20000

    cout << "\n====================\n";

    // Accessing linked employee details through 'p1'
    cout << p1.link->name << endl;   // Output: Vijay
    cout << p1.link->salary << endl; // Output: 30000
}
