//  Real-World Analogy (Copying a House Key)
// Imagine you have a house key and you give a copy of the key to your friend.

// Shallow Copy:
// You and your friend share the same key. If you change the lock, both of you will be affected.
// → Both objects share the same memory (same key).

// Deep Copy:
// Instead of sharing the same key, you make a new key that works independently. If you change your lock, your friend's key will still work with the old lock.
// → Each object has its own independent memory (separate key).

// ✅ Code Example: Shallow Copy
// In a shallow copy, two objects share the same memory address for the pointer. Any change to one object’s pointer value will reflect in the other object
#include <iostream>
using namespace std;

class ShallowCopy {
    int *p;

public:
    // Constructor
    ShallowCopy(int value) {
        p = new int;
        *p = value;
    }

    // Shallow Copy Constructor
    ShallowCopy(const ShallowCopy &obj) {
        p = obj.p;  // Only the pointer is copied, not the value
    }

    // Method to update value
    void updateValue(int value) {
        *p = value;
    }

    // Method to display value
    void display() {
        cout << "Value: " << *p << ", Address: " << p << endl;
    }
};

int main() {
    ShallowCopy obj1(10);     // Create obj1 with value 10
    ShallowCopy obj2(obj1);   // Create a shallow copy of obj1

    cout << "Before update:" << endl;
    obj1.display();           // Value: 10
    obj2.display();           // Value: 10

    obj1.updateValue(20);     // Update obj1's value

    cout << "After update:" << endl;
    obj1.display();           // Value: 20
    obj2.display();           // Value: 20 (also updated because of shared memory)

    return 0;
}