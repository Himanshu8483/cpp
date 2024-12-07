// prime no
// #include <iostream>
// using namespace std;
// int main() {
//     int num = 13;
//     if(num<2) {
//         cout << "Not a prime no";
//         return 0;
//     }
//     for(int i=2; i*i<=num; i++) 
//     {
//         if(num%i==0) {
//             cout<< "Not a prime no";
//             return 0;
//         }
//     }
//     cout<< "Prime Number" ;
//     return 0;

// }
// amstrong no. 
#include <iostream>
using namespace std;

int main() { 
    int num = 1;
    int ans = num;
    int rb = 0;
    int sum = 0;
    for (; num!=0; num/=10)
    {
        rb = (num%10);
        sum += rb* rb * rb;


    }
        cout << sum << endl;

    if ( sum == ans) {
        cout<< "yes";
    }
    else {
        cout<< "no";
    }


}