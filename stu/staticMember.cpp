#include <iostream>
using namespace std;

// Static member and static member function example
class Bank {
    public:
        // Static member variable (shared among all objects of the class)
        static int amount; 

        // Static member function (can access only static members)
        static void showamount(int x) {
            // Modify the static variable `amount`
            amount = amount - x;
            // Print the updated value of `amount`
            cout << "amount = " << amount << endl;
        }
};

// Define the static variable outside the class using the scope resolution operator (::)
int Bank::amount = 10; // Initialize the static variable

int main() {
    // Create the first object of class Bank
    Bank obj1;
    // Call the static member function using the object and pass 6 to decrease the amount
    obj1.showamount(6);

    cout << endl; // Add a line break for better readability

    // Create the second object of class Bank
    Bank obj2;
    // Call the static member function using the second object and pass 2 to decrease the amount
    obj2.showamount(2);

    return 0;
}
