#include <iostream>
using namespace std;
int main () {
    int a = 10;
    int b = 12;
    int temp;

    temp = b;
    b = a;
    a = temp;
    cout << a << endl << b;
}