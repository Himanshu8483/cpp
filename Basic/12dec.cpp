// number in letter 
#include <iostream>
using namespace std;

int main() { 
    int num = 1234;
    int rb = 0;
    int dig = 0;
    for (; num!=0; num/=10)
    {
        rb = rb*10 + (num%10);
    }
    // cout<< rb << endl;
    for (; rb!=0; rb=rb/10) {
        dig=rb%10;
    switch(dig){
        case 1 : 
        cout<< "one " ;
        break;
        case 2 : 
        cout<< "two " ;
        break;
        case 3 : 
        cout<< "three " ;
        break;
        case 4 : 
        cout<< "four " ;
        break;
        default: cout << "wrong Input";
        break;
    }
    }
}