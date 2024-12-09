// febonaci Series
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10;  
//     int firstterm=0;
//     int secondterm = 1;
//     int term;
//     for(int i=0;i<n;++i)
//     {
//         if(i==0){
//             cout<<firstterm<< " ";
//             continue;
//         }
//         if(i==1){
//             cout<<secondterm<< " ";
//             continue;
//         }
//         term= firstterm+secondterm;
//         cout << term << " ";
//         firstterm=secondterm;
//         secondterm= term;
//     }
// }
// with while loop 
// #include <iostream>
// using namespace std;
// int main() {
//     int n = 10;  
//     int firstterm=0;
//     int secondterm = 1;
//     int term;
//     int i = 0;

//     while (i<n)
//     {
//         if(i==0){
//             cout<<firstterm<< " ";
//             i++;
//             continue;
//         }
//         if(i==1){
//             cout<<secondterm<< " ";
//             i++;
//             continue;
//         }
//         term= firstterm+secondterm;
//         cout << term << " ";
//         firstterm=secondterm;
//         secondterm= term;
//         i++;

        
//     }
// }
// amstrong no. 
#include <iostream>
using namespace std;

int main() { 
    int num = 153;
    int ans = num;
    int rb = 0;
    int sum = 0;
    while (num!=0)
    {
        rb = (num%10);
        sum += rb* rb * rb;
        num/=10;


    }
        cout << sum << endl;

    if ( sum == ans) {
        cout<< "yes";
    }
    else {
        cout<< "no";
    }
}