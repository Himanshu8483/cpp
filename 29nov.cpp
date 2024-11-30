// //  do while loop 
// // #include <iostream>
// // using namespace std;

// // int main() { 
// //     int number=1;

// //     do{
// //         cout<< number << endl;
// //         ++number;
// //     }
// //     while(number<=10);
// // }

// // while loop for 2 table 
// #include <iostream>
// using namespace std;

// int main() { 
//     int number=1;

//     do{
//         cout<< 2* number << endl;
//         ++number;
//     }
//     while(number<=10);
// }
// // while loop for 2 table 
// #include <iostream>
// using namespace std;

// int main() { 
//     int number=1;

//     while(number<=10){
//         cout<< 2* number << endl;
//         ++number;
//     }
    
// }

// // for loop for 2 table print 
// #include <iostream>
// using namespace std;

// int main() { 
//     int i=1;

//     for (i=1; i<=10; ++i)
//     {

//         cout<< 2* i << endl;
//     }
    
// }
// // for loop for 2 table print reverse

// #include <iostream>
// using namespace std;

// int main() { 
//     int i=10;

//     for (i=10; i>=1; --i)
//     {

//         cout<< 2* i << endl;

//         cout<< 3* i<< endl;
//     }

// // for loop for 2 to 10 table print
#include <iostream>
using namespace std;

int main() { 

    for (int i=2; i<=10; ++i)
    {
        for (int j = 1; j <=10; ++j){
            cout<<i*j;
        }
        
        cout<< "\t"; // for some space
    }
}