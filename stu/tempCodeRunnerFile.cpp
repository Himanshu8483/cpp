#include <iostream>
using namespace std;
class CopyConstructorExample {
private:
    int x;
public:
     void ConstructorExample(int val) {
        x = val;
        cout << "Normal Constructor Called" << endl;
    }

    CopyConstructorExample(int CopyConstructorExample &oj) {
        this->x = oj.x;  // Copy the value from the original object
        cout << "Copy Constructor Called" << endl;
    }

    void display() {
        cout << "X: " << x << endl;
    }
};

int main() {
    CopyConstructorExample obj1;
    obj1.ConstructorExample(5);
    CopyConstructorExample obj2(obj1);  // Copy constructor is called here
    obj1.display();  // Output: X: 10
    obj2.display();  // Output: X: 10
    return 0;
}