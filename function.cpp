// #include <iostream>
// using namespace std;
// namespace first {
//     void sum() {
//         int a= 10;
//         int b=20;
//         cout<<a+b;
//     }
// }
// namespace second {
//     void sum() {
//         int c=20;
//         int d =20;
//         cout << c+ d;
//     }
// }

// overloading 
// #include <iostream>
// using namespace std;
// void sum(int a, char b)
// {
//     cout<<a<<endl;
// }
// void sum(char a, int b)
// {
//     cout<<b<<endl<<a;
// }
// int main (){
//     sum(10, 'a');
//     sum('b', 3);
// }

// Recursion 

// #include <iostream>
// using namespace std;
// int sum(int n)
//     {
//         if(n<=1)
//     {
//         return n;        // base condition for break in recursion
//     }
//     return n +sum(n-1);      // sum of numbers
//   // return n * sum(n-1);    // factorial of number 
// }
// int main (){
//     cout<< sum(10);
// }

// // fibonaci series 
// #include <iostream>
// using namespace std;
// int fibo(int n){
//     int ft=0;
//     int st=1;
//     int next=0;
//     for(int i=0; i<n; ++i) {
//         if(i==0){
//             cout<<ft<<" ";
//             continue;
//         }
//         if(i==1){
//             cout<<st<< " ";
//             continue;
//         }
//     next=ft+st;
//     ft=st;
//     st=next;
//     cout<<next<<" ";
//     }
//     return 0;
// }
// int main (){
//     fibo(10);
// }

// // fibonaci series write with another type 
// #include <iostream>
// using namespace std;
// int fibo(int n);        // declare
// int main (){
//     fibo(10);
// }

// int fibo(int n){
//     int ft=0;
//     int st=1;
//     int next=0;
//     for(int i=0; i<n; ++i) {
//         if(i==0){
//             cout<<ft<<" ";
//             continue;
//         }
//         if(i==1){
//             cout<<st<< " ";
//             continue;
//         }
//     next=ft+st;
//     ft=st;
//     st=next;
//     cout<<next<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// // Recursive Fibonacci function
// int fibo(int n) {
//     if (n == 0) return 0; // Base case for n=0
//     if (n == 1) return 1; // Base case for n=1
//     return fibo(n - 1) + fibo(n - 2);
// }

// int main() {
//     int n = 10; // Example input
//     cout << "at position " << n << " is " << fibo(n) << endl;      // at position 10 is 55
//     return 0;
// }

#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci numbers
int fibo(int n) {
    if (n == 0) return 0; // Base case for n=0
    if (n == 1) return 1; // Base case for n=1
    return fibo(n - 1) + fibo(n - 2);
}

// Function to print all Fibonacci numbers up to position n
void printFibonacci(int n) {
    for (int i = 0; i <= n; i++) {
        cout << fibo(i) << " ";
    }
    cout << endl;
}

int main() {
    int n = 10; // Example input
    printFibonacci(n);      // 0 1 1 2 3 5 8 13 21 34 55 
    return 0;
}
