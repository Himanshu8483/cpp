#include <iostream>
using namespace std;

// Example of Operator Overloading and Abstraction
class Number {
    int num; // Private member variable (encapsulation: hides internal data from external access)
    public:
        // Constructor with default argument to initialize 'num'
        Number(int n = 0) {
            num = n;
        }

        // Overload the '+' operator to add two Number objects
        void operator +(Number &obj) {
            int ans;
            ans = num + obj.num; // Access the private 'num' of both objects
            cout << ans; // Print the result of addition
        }
};

int main() {
    Number obj1(5); // Create first Number object with value 5
    Number obj2(5); // Create second Number object with value 5

    obj1 + obj2; // Use the overloaded '+' operator to add obj1 and obj2
    return 0;
}

//---------------------------------------------------------
// Example of Virtual Functions and Polymorphism
#include <iostream>
using namespace std;

class A {
    public:
        // Virtual function allows derived classes to override this method
        virtual void show() {
            cout << "Class A\n";
        }
};

class B : virtual public A {
    public:
        void show() override { // Override show() from class A
            cout << "Class B\n";
        }
};

class C : virtual public A {
    public:
        void show() override { // Override show() from class A
            cout << "Class C\n";
        }
};

class D : public B, public C {
    public:
        void show() override { // Override show() from class A
            cout << "Class D\n";
        }
};

int main() {
    A *obj; // Pointer of base class type
    C obj3; // Object of class C
    obj = &obj3; // Base class pointer points to derived class object
    obj->show(); // Calls the overridden method in class C due to polymorphism
    return 0;
}
