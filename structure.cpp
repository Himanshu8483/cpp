#include <iostream>
using namespace std;
struct classes{
    int roll=101;
    string name= "Himanshu";
}a;

int main(){
    
    cout<<a.roll<<endl;

    classes p;
    cout<<p.roll<<endl;

    classes r;
    r.roll=202;
    cout<<r.roll;
}