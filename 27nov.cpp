// coffee or tea 
// #include <iostream>
// #include <iostream>
// using namespace std;

// int main() {
//     char o;
//     cout << "enter options a = tea b = coffee = ";
//     cin>>o;
//     switch(o)
//     {
//         case 'a':cout << "a=choclate, b= butterscorch";
//         cin>>o;
//         switch (o)
//         {
//             case 'a':cout << "choclate tea = ";
//                 break;
//             case 'b':cout << "butterscorch tea";
//                 break;
//             default:{
//                 cout<< "invalid";
//                 break;
//         }
//         }
//         break;
//         case 'b':cout << "a=especito, b= mocha";
//         cin>>o;
//         switch (o)
//         {
//             case 'a':cout << "especito tea";
//                 break;
//             case 'b':cout << "mocha tea";
//                 break;
//             default:{
//             cout<< "invalid";
//                 break;
//         }
//         }
//         break;
//         default:{
//         cout<< "invalid";
//             break;
//         }
//     }
// }

// goto jumping 
// #include <iostream>
// using namespace std;

// int main() {
//         cout << "Himanshu" << endl;
//         goto remove;
//         cout << "Jatin" << endl;   // skip
//         remove:
//         cout << "Yash" << endl;
//         cout << "Mohit" << endl;
        
//     }
// goto reverse jumping
// #include <iostream>
// using namespace std;

// int main() {
//     int number=1;
//     a:
    
//     if (number<=10) {
//         cout << "Himanshu" << endl;
//         ++number;
//         goto a;
//     }
// }

// 2 table print 
#include <iostream>
using namespace std;

int main() {
    int number=1;
    a:
    
    if (number<=10) {
        cout << 2*number << endl;
        ++number;
        goto a;
    }
}