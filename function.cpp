// overloading 
#include <iostream>
using namespace std;
void sum(int a, char b)
{
    cout<<a<<endl;
}
void sum(char a, int b)
{
    cout<<b<<endl<<a;
}
int main (){
    sum(10, 'a');
    sum('b', 3);
}

// Recursion 
#include <iostream>
using namespace std;
int sum(int n)
    {
        if(n<=1)
    {
        return n;        // base condition for break in recursion
    }
    return n +sum(n-1);      // sum of numbers
  // return n * sum(n-1);    // factorial of number 
}
int main (){
    cout<< sum(10);
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
