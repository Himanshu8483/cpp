// sum of numbers 
// #include <iostream>
// using namespace std;

// int main() { 
//     int sum =0;
//     for (int i=1; i<=10; ++i)
//     {
//         sum+=i;
//     }          
//     cout<< sum << endl;
// }
// multiply sum or factorial of numbers 
// #include <iostream>
// using namespace std;

// int main() { 
//     int sum =1;
//     for (int i=1; i<=5; ++i)
//     {
//         sum*=i;
//     }          
//     cout<< sum << endl;
// }
// power calculate of numbers 
// #include <iostream>
// using namespace std;

// int main() { 
//     int sum =1;
//     int power = 3;
//     int num =2;
//     for (int i=1; i<=power; ++i)
//     {
//         sum*=num;
//     }          
//     cout<< sum << endl;
// }
// ascii value of numbers 
// #include <iostream>
// using namespace std;

// int main() { 
//     for (int i=0; i<=256; ++i)
//     {
//         cout<< "ascii value of " << i<< "= " << char(i) << endl;
//     }          
// }
// factor of numbers 
// #include <iostream>
// using namespace std;

// int main() { 
//     int factor = 6;
//     for (int i=1; i<=factor; ++i)
//     {
//          if(factor%i==0){
//             cout<< i << endl;
//         } 
//     }         
// }
// prime number
#include <iostream>
using namespace std;

int main() { 
    int counter = 0;
    int num = 7;
    for (int i=1; i<=num; ++i)
    {
         if(num%i==0)
            {
                counter++;
            }
    }
        if(counter==2)
        {
            cout<<"prime";
        }
        else {
            cout<<"not";
        }      
}