// #include <iostream>
// using namespace std;

// int main() {
//     int num=4;
//     switch (num)
//     {
//     case 1 :
//         int length, breadth ;
//         length = 12;
//         breadth = 13;
//         cout<<"area of rectangle = " << length * breadth ;
//         break;
//     case 2 : 
//         int side ;
//         side = 3;
//         cout << "area of square = " << side * side ;
//             break;
//     case 3 :
//         int height;
//         length = 3;
//         height = 4;
//         cout << "area of triangle = " << (1 * length * height )/2  ;
//         break;
//     case 4 :
//     int radius;
//     radius = 3;
//     cout << "area of circle = " << (22 * radius * radius )/ 7 ;

//         break;
    
//     default: cout << "invalid";
//         break;
//     }
// }
#include <iostream>
#include <iostream>
using namespace std;

int main() {
    int time;
    cout << "enter your time";
    cin>>time;
    switch(time/12) {
        case 0: cout<< "am";
        break;
        case 1: cout << "pm";
        break;
        default: cout << "wrong Input";
        break;
    }
}

