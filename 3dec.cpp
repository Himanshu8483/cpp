// ap series term
// }
// #include <iostream>
// using namespace std;
// int main() {
// int n=5;
// int d=2;
// int a=1;
// int term=0;
// for(int i=0;i<n;++i)
// {
//     term=a+i*d; // term = a+(n-1)*d
//     cout<<term << " ";
//     }
// }
// sum of ap series 
// #include <iostream>
// using namespace std;
// int main() {
// int n=5;
// int d=2;
// int a=1;
// int term=0;
// int sum = 0;
// for(int i=0;i<n;++i)
// {
//     term=a+i*d;
//     sum= sum+term;
// }
//     cout<< sum;
// }
//  fibonaci series
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10;  
//     int firstterm=0;
//     int secondterm = 1;
//     int term = 0;
//     cout << firstterm << " ";
//     cout << secondterm << " ";
//     for(int i=2;i<n;++i)
//     {
//         term= firstterm+secondterm;
//         cout << term << " ";
//         firstterm=secondterm;
//         secondterm= term;
//     }
// }

//  minimum notes print
// #include <iostream>
// using namespace std;
// int main() { 
//     int rs = 500;
//     if ( rs>=500) {
//         cout << "500 notes = " << rs/500;
//     }
//     else {
//         cout << "wrong input";
//     }
// }
//  minimum notes print
#include <iostream>
using namespace std;
int main() { 
    int rs = 1786;
    if ( rs>=500) {
        cout << "500 notes = " << rs/500 << endl;
        rs=rs%500;
    }
    if ( rs>=200) {
        cout << "200 notes = " << rs/200 << endl;
        rs=rs%200;
    }
    if ( rs>=100) {
        cout << "100 notes = " << rs/100 << endl;
        rs=rs%100;
    }
    if ( rs>=50) {
        cout << "50 notes = " << rs/50 << endl;
        rs=rs%50;
    }
    if ( rs>=20) {
        cout << "20 notes = " << rs/20 << endl;
        rs=rs%20;
    }
    if ( rs>=10) {
        cout << "10 notes = " << rs/10 << endl;
        rs=rs%10;
    }
    if ( rs>=5) {
        cout << "5 notes = " << rs/5 << endl;
        rs=rs%5;
    }
    if ( rs>=2) {
        cout << "2 notes = " << rs/2 << endl;
        rs=rs%2;
    }
    if ( rs>=1) {
        cout << "1 notes = " << rs/1 << endl;
        rs=rs%1;
    }
    else {
        cout << "wrong input";
    }
}