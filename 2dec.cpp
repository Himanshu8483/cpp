//  reverse print 
// #include <iostream>
// using namespace std;

// int main() { 
//     int num = 123;
//     int rb = 0;
//     while (num != 0) {
//         rb = rb*10 + (num%10);
//         num = num / 10;
//     }
//     cout <<rb;
// }

//  reverse print  with for loop
// #include <iostream>
// using namespace std;

// int main() { 
    // int num = 123;
    // int rb = 0;
    // for (; num!=0; num/=10)
    // {
    //     rb = rb*10 + (num%10);
    // }     or     
//     int num = 123;
//     int rb = 0;
//     for (; num!=0;)
//     {
//         rb = rb*10 + (num%10);
//         num/=10;
//     }          
//     cout<< rb << endl;
// }

// pelindrom means opposite = num 
// #include <iostream>
// using namespace std;

// int main() {  
//     int num = 121;
//     int num1 = num;
//     int rb = 0;
//     for (; num!=0;){
//         rb = rb*10 + (num%10);
//         num/=10; 
// }  
//     if(num1==rb)   {
//         cout << "pelindrome";
//     }  
//     else {
//         cout << "not";
//     }
//     // cout<< rb << endl;
// }

// n term series 
#include <iostream>
using namespace std;

int main() { 
    int num = 111;
    int rb = 0;
    while (num != 0) {
        rb = rb*10 + (num%10);
        num = num / 10;
    }
    cout <<num;
}