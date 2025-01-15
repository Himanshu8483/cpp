
// overloading 
#include <iostream>
using namespace std;

void sum(int a, char b) {
    cout << a << endl;  // When the first parameter is an integer and the second is a character, it just prints the integer value
}

void sum(char a, int b) {
    cout << b << endl << a;  // When the first parameter is a character and the second is an integer, it prints the integer and then the character
}

int main() {
    sum(10, 'a');  // Calls the first function with an integer and a character (prints: 10)
    sum('b', 3);   // Calls the second function with a character and an integer (prints: 3 b)
}


// Recursion 
#include <iostream>
using namespace std;

int sum(int n) {
    if (n <= 1) {  // Base condition: when n is 1 or less, we return n (this stops the recursion)
        return n;
    }
    return n + sum(n - 1);  // Add the current number 'n' to the sum of the numbers from (n-1)
    // If we change it to: return n * sum(n - 1); // This would calculate the factorial of 'n' (n! = n * (n-1) * ... * 1)
}

int main() {
    cout << sum(10);  // Prints the sum of numbers from 1 to 10 (output: 55)
}

// fibonaci series 
#include <iostream>
using namespace std;
int fibo(int n){
    int ft=0;
    int st=1;
    int next=0;
    for(int i=0; i<n; ++i) {
        if(i==0){
            cout<<ft<<" ";
            continue;
        }
        if(i==1){
            cout<<st<< " ";
            continue;
        }
    next=ft+st;
    ft=st;
    st=next;
    cout<<next<<" ";
    }
    return 0;
}
    int main (){
        fibo(10);
    }

// fibonaci series write with another type
#include <iostream>
using namespace std;
int fibo(int n);        // declare
int main (){
    fibo(10);
}

int fibo(int n){
    int ft=0;
    int st=1;
    int next=0;
    for(int i=0; i<n; ++i) {
        if(i==0){
            cout<<ft<<" ";
            continue;
        }
        if(i==1){
            cout<<st<< " ";
            continue;
        }
    next=ft+st;
    ft=st;
    st=next;
    cout<<next<<" ";
    }
    return 0;
}

// Fibonacci function by Recursion
#include <iostream>
using namespace std;
int fibo(int n) {
    if(n<=1) return n;
    return fibo(n - 1) + fibo(n - 2);
}

// int main() {
// cout<<fibo(3);       // term print
// }
int main() {
    int i=0;
    int n=8;
    while(i<=n){
        cout<<fibo(i)<<" ";     // series print
        i++;
    }
}
