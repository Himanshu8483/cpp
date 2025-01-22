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
