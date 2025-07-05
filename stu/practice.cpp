
#include <iostream>
using namespace std;

class ConcreteExample {
public:
    void display()  {  // Concrete implementation of the abstract method
        cout << "Concrete implementation." << endl;
    }
};
int main() {
    ConcreteExample obj;  // Create an object of the derived class
    obj.display();        // Calls the overridden display() function
    return 0;
}



