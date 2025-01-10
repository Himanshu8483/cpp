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

// Before update:
// Value: 10, Address: 0x600003e540
// Value: 10, Address: 0x600003e540

// After update:
// Value: 20, Address: 0x600003e540
// Value: 20, Address: 0x600003e540
// Explanation:

// obj1 and obj2 share the same memory for the pointer, so any change in obj1 affects obj2.


// In a deep copy, each object has its own memory block. Changes to one object do not affect the other.
#include <iostream>
using namespace std;

class DeepCopy {
    int *p;

public:
    // Constructor
    DeepCopy(int value) {
        p = new int;
        *p = value;
    }

    // Deep Copy Constructor
    DeepCopy(const DeepCopy &obj) {
        p = new int;          // Allocate new memory
        *p = *(obj.p);         // Copy the value
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
    DeepCopy obj1(10);        // Create obj1 with value 10
    DeepCopy obj2(obj1);      // Create a deep copy of obj1

    cout << "Before update:" << endl;
    obj1.display();           // Value: 10
    obj2.display();           // Value: 10

    obj1.updateValue(20);     // Update obj1's value

    cout << "After update:" << endl;
    obj1.display();           // Value: 20
    obj2.display();           // Value: 10 (no change in obj2)

    return 0;
}
// Before update:
// Value: 10, Address: 0x600003e540
// Value: 10, Address: 0x600003e580

// After update:
// Value: 20, Address: 0x600003e540
// Value: 10, Address: 0x600003e580

//  Key Takeaways:
// Shallow Copy

// Copies the pointer.
// Both objects share the same memory.
// Changes to one object affect the other.
// Deep Copy

// Allocates new memory.
// Both objects have independent data.
// Changes to one object do not affect the other.
// Here’s why using delete in a shallow copy leads to problems.
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
        p = obj.p;  // Pointer is copied (both objects share the same memory)
    }

    // Destructor to release memory
    ~ShallowCopy() {
        delete p;
        cout << "Memory released!" << endl;
    }

    // Method to display value
    void display() {
        cout << "Value: " << *p << ", Address: " << p << endl;
    }
};

int main() {
    ShallowCopy obj1(10);    // Create obj1
    ShallowCopy obj2(obj1);  // Create a shallow copy of obj1

    obj1.display();
    obj2.display();

    return 0;
}
// Problem with Shallow Copy and delete:
// When obj1 is destroyed, the memory is freed. But when obj2 tries to access the same memory, it causes a double delete error or undefined behavior.


// Let’s fix this by using a deep copy to ensure each object has its own memory.
#include <iostream>
using namespace std;

class DeepCopy {
    int *p;

public:
    // Constructor
    DeepCopy(int value) {
        p = new int;
        *p = value;
    }

    // Deep Copy Constructor
    DeepCopy(const DeepCopy &obj) {
        p = new int;      // Allocate new memory
        *p = *(obj.p);    // Copy value from obj
    }

    // Destructor to release memory
    ~DeepCopy() {
        delete p;
        cout << "Memory released!" << endl;
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
    DeepCopy obj1(10);      // Create obj1
    DeepCopy obj2(obj1);    // Create a deep copy of obj1

    obj1.updateValue(20);   // Update obj1

    cout << "obj1: ";
    obj1.display();

    cout << "obj2: ";
    obj2.display();

    return 0;
}
// obj1: Value: 20, Address: 0x600003e540
// obj2: Value: 10, Address: 0x600003e580
// Memory released!
// Memory released!

#include <iostream>
using namespace std;

class shallowcopy {
    int a, *p;  // 'a' is an integer, 'p' is a pointer to an integer

public:
    // Constructor to initialize 'a' and dynamically allocate memory for 'p'
    shallowcopy(int x, int y) {
        a = x;
        p = new int;
        *p = y;
    }

    // Copy constructor performing shallow copy
    shallowcopy(shallowcopy &obj) {
        a = obj.a;  // Copy value of 'a'
        p = obj.p;  // Copy pointer (both objects will share the same memory)
    }

    // Method to update values
    void update() {
        a = a + 1;    // Increment 'a'
        *p = *p + 1;  // Increment value pointed by 'p'
    }

    // Method to display values
    void show() {
        cout << "Memory address: " << p << endl;
        cout << "Value: " << *p << endl;
    }
};

int main() {
    shallowcopy obj1(5, 6);    // Create obj1
    shallowcopy obj2(obj1);    // Create a shallow copy of obj1

    obj1.update();             // Update obj1
    obj1.show();               // Show obj1's values

    obj2.show();               // Show obj2's values (will reflect changes from obj1)

    return 0;
}

#include <iostream>
using namespace std;

class deepcopy {
    int a, *p;  // 'a' is a normal integer, and 'p' is a pointer to an integer

public:
    // Constructor to initialize 'a' and dynamically allocate memory for 'p'
    deepcopy(int x, int y) {
        a = x;            // Assign 'x' to 'a'
        p = new int;      // Allocate memory for 'p'
        *p = y;           // Store 'y' at the memory location pointed by 'p'
    }

    // Copy constructor to perform a deep copy
    deepcopy(deepcopy &obj) {
        a = obj.a;        // Copy the value of 'a'
        p = new int;      // Allocate new memory for 'p'
        *p = *(obj.p);    // Copy the value from the original object's pointer to the new memory
    }

    // Method to update values
    void update() {
        a = a + 1;        // Increment 'a' by 1
        *p = *p + 1;      // Increment the value pointed by 'p' by 1
    }

    // Method to display values
    void show() {
        cout << p << endl;   // Print the memory address stored in 'p'
        cout << *p << endl;  // Print the value stored at that memory address
    }
};

int main() {
    deepcopy obj1(5, 6);     // Create an object with values (a=5, *p=6)
    deepcopy obj2(obj1);     // Create a deep copy of obj1

    obj1.update();           // Update obj1 (a=6, *p=7)
    obj1.show();             // Display obj1's values (address of p and *p=7)

    obj2.show();             // Display obj2's values (address of p and *p=6)
    return 0;
}



// ✅ Understanding Copy Constructors and Destructors in C++
// This file contains examples of:
// 1. Default Copy Constructor
// 2. Shallow Copy Constructor
// 3. Deep Copy Constructor
// 4. Copy Constructor with Destructor
// 5. Real-World Example

#include <iostream>
using namespace std;

// -------------------------------
// ✅ 1. Default Copy Constructor
// -------------------------------
// If you do not define your own copy constructor, the compiler provides a default copy constructor.
// It performs a member-wise (shallow) copy of the object.
class DefaultCopy {
    int a;
public:
    DefaultCopy(int x) {
        a = x;
    }
    void show() {
        cout << "Value: " << a << endl;
    }
};

// -------------------------------
// ✅ 2. Shallow Copy Constructor
// -------------------------------
// A shallow copy constructor copies the memory address instead of creating new memory.
// This can cause problems if one object modifies the shared memory or if memory is deleted.
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
        p = obj.p;  // Copies the pointer (shared memory)
    }

    // Destructor
    ~ShallowCopy() {
        delete p;
        cout << "Memory released in ShallowCopy!" << endl;
    }

    // Method to display value
    void show() {
        cout << "Value: " << *p << ", Address: " << p << endl;
    }
};

// -------------------------------
// ✅ 3. Deep Copy Constructor
// -------------------------------
// A deep copy constructor creates a new memory block and copies the value.
// It ensures that each object has its own independent memory.
class DeepCopy {
    int *p;
public:
    // Constructor
    DeepCopy(int value) {
        p = new int;
        *p = value;
    }

    // Deep Copy Constructor
    DeepCopy(const DeepCopy &obj) {
        p = new int;      // Allocate new memory
        *p = *(obj.p);    // Copy the value
    }

    // Destructor
    ~DeepCopy() {
        delete p;
        cout << "Memory released in DeepCopy!" << endl;
    }

    // Method to display value
    void show() {
        cout << "Value: " << *p << ", Address: " << p << endl;
    }
};

// -------------------------------
// ✅ 4. Copy Constructor with Destructor
// -------------------------------
// Demonstrating how copy constructors work with destructors to manage dynamic memory.
class CopyWithDestructor {
    int *p;
public:
    // Constructor
    CopyWithDestructor(int value) {
        p = new int;
        *p = value;
    }

    // Copy Constructor
    CopyWithDestructor(const CopyWithDestructor &obj) {
        p = new int;
        *p = *(obj.p);
    }

    // Destructor
    ~CopyWithDestructor() {
        delete p;
        cout << "Memory released in CopyWithDestructor!" << endl;
    }

    // Method to display value
    void show() {
        cout << "Value: " << *p << ", Address: " << p << endl;
    }
};

// -------------------------------
// ✅ 5. Real-World Example
// -------------------------------
// Imagine making a copy of a file. 
// Shallow Copy: Both files share the same data (if you change one, it changes the other).
// Deep Copy: Each file has its own data (changing one doesn’t affect the other).

int main() {
    // Default Copy Constructor Example
    DefaultCopy obj1(10);
    DefaultCopy obj2 = obj1;  // Default copy constructor
    obj1.show();
    obj2.show();

    // Shallow Copy Example
    ShallowCopy shallow1(20);
    ShallowCopy shallow2 = shallow1;  // Shallow copy constructor
    shallow1.show();
    shallow2.show();

    // Deep Copy Example
    DeepCopy deep1(30);
    DeepCopy deep2 = deep1;  // Deep copy constructor
    deep1.show();
    deep2.show();

    // Copy Constructor with Destructor Example
    CopyWithDestructor copy1(40);
    CopyWithDestructor copy2 = copy1;  // Copy constructor
    copy1.show();
    copy2.show();

    return 0;
}
