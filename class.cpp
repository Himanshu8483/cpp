// Class in C++:
#include <iostream>
using namespace std;

// Example 1: Empty class
class student {
public:
    // No variables or functions inside the class
};

int main() {
    student a;  // Create an object of the student class
    cout << sizeof(a);  // Output the size of the object (1 byte)
}

/* Explanation for Example 1:
- An empty class still takes some space in memory.
- Even though there are no variables in the class, the object still has a size of 1 byte.
*/

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


// Example 2: Class with variables and function
class student {
public:     // (public so we can access it directly)
    int roll;     
    string name;  

    // Function to show student details
    void show() {
        cout << roll << endl << name << endl;  // Show roll number and name
    }

    // Another Function to show student details
    void show(int a, string b) {
        roll = a;
        name = b;
        cout << roll << endl << name << endl;  // Show roll number and name
    }
};

int main() {
    student obj;   // Create an object of the student class

    obj.name = "Himanshu";  // Set name directly
    obj.roll = 100;          // Set roll number directly

    // obj.show() displays the details of the student
    obj.show();

    student obj1, obj2;
    obj.show(101, "Jatin");  // Display student details
    obj1.show(102, "Vijay");  // Display student details

    obj2.show(103, "Yash");  // Display student details
}

/* Explanation for Example 2:
- Class "student" has two public variables: roll and name.
- The "show" function prints the roll number and name.
- In the main function, we create an object "obj".
- We set the name and roll number of "obj" directly using dot notation (also called member access operator).
- Finally, we call the "show" function to print the details.

Key Concepts:
- Public variables can be accessed directly using the object.
- The "show" function is a member function that prints the student's details.
*/


/*  Example 3 with Constructor (special function that runs when object is created) */
#include <iostream>
using namespace std;

class student {
    int num;   // First number
    int num2;  // Second number

public:
    // Constructor (no parameters)
    student() {
        cout << "Constructor Activated" << endl;
    }

    // Constructor with parameters
    student(int a, int b) {
        cout << a + b << endl;  // Show sum of a and b
        num = a;  // Set first number
        num2 = b; // Set second number
        cout << num << endl << num2 << endl;  // Show numbers
    }
};

int main() {
    student();       // Calls default constructor
    // student obj;       // Calls without parameterized constructor
    student obj(10, 20);  // Calls parameterized constructor with 10, 20
}

/* Explanation for Example 3:
- A constructor is a special type of function that is automatically called when an object is created.
- It has the same name as the class and no return type (not even void).
- The constructor is used to initialize the object's variables when the object is created.  */

// Constructor Overloading:
#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;

    // Constructor that only takes title
    Book(string t) {
        title = t;
        author = "Unknown";  // Default author if only title is given
    }

    // Constructor that takes both title and author
    Book(string t, string a) {
        title = t;
        author = a;
    }

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book book1("C++ Programming");  // Only title is provided
    book1.display();

    Book book2("Learn Java", "John Doe");  // Both title and author are provided
    book2.display();

    return 0;
}
/* Output : 
Title: C++ Programming
Author: Unknown
Title: Learn Java
Author: John Doe */

// In this example:
// book1 uses the constructor that only accepts the title, and the author is assigned a default value of "Unknown".
// book2 uses the constructor that accepts both title and author.
// Note: Constructor overloading is highly usable in situations where you need flexibility in how objects are created. It allows for cleaner, more readable code and can be used to handle various initialization scenarios without repeating code.



// Easy Notes:
// - Class: Group of variables and functions to create objects.
// - Object: A real-world example of a class (like obj1, obj2).
// - Constructor: Special function that runs automatically when you create an object.
// - Public: Allows functions to be used outside the class.
// - Private: Data hidden inside the class, only accessible through functions.
// - Function: A block of code to perform a task (like show()).

// ==================================
// OOP (Object-Oriented Programming) Concepts:
// ==================================
// Object-Oriented Programming (OOP) is a programming paradigm that organizes code around objects and classes. It simulates real-world entities and helps manage complex software systems by breaking them into smaller, manageable components.

// Main OOP Concepts:
// 1. **Class**: A blueprint for creating objects. It defines the properties (variables) and behaviors (functions) that an object will have.
// 2. **Object**: An instance of a class. It is a real-world entity that has properties and behaviors.
// 3. **Encapsulation**: Wrapping data (variables) and methods (functions) into a single unit (class). It restricts direct access to some components and protects the internal state of the object.
// 4. **Abstraction**: Hiding complex implementation details and showing only the essential features of an object. It makes the code simpler and easier to use.
// 5. **Inheritance**: The process by which one class (child) inherits properties and behaviors from another class (parent). It promotes code reusability.
// 6. **Polymorphism**: The ability of a function, object, or method to behave differently based on the context. It allows one interface to be used for different types of objects.

// ==================================
// What is a Programming Paradigm?
// ==================================
// A programming paradigm is a style or way of writing code. It provides a set of rules and concepts that guide how programs are structured and how data is managed.

// Types of Programming Paradigms:
// 1. **Procedural Programming**:
//    - Focuses on functions and procedures.
//    - Code is written as a sequence of instructions to perform tasks.
//    - Example languages: C, Pascal.

// 2. **Object-Oriented Programming (OOP)**:
//    - Focuses on objects and classes.
//    - Code is organized around real-world entities and their interactions.
//    - Example languages: C++, Java, Python.

// 3. **Functional Programming**:
//    - Focuses on functions as the primary way of computation.
//    - Avoids changing states and mutable data.
//    - Example languages: Haskell, Lisp.

// 4. **Logic Programming**:
//    - Focuses on defining rules and facts.
//    - Uses logical statements to infer conclusions.
//    - Example languages: Prolog.

// ==================================
// Types of Constructors in C++:
// ==================================
// 1. **Default Constructor**: A constructor with no parameters. It is called automatically when an object is created without arguments.
//    Example: student() { ... }

// 2. **Parameterized Constructor**: A constructor that takes parameters to initialize the object with specific values.
//    Example: student(int r, string n) { ... }

// 3. **Copy Constructor**: A constructor that creates a new object as a copy of an existing object.
//    Example: student(const student &obj) { ... }

// ==================================
// Key Points about Constructors:
// ==================================
// - **No Return Type**: Constructors do not have a return type, not even void.
// - **Automatic Call**: They are called automatically when an object is created.
// - **Initialization**: Constructors are used to initialize the object's variables when it is created.



