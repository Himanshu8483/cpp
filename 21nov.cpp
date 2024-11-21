// tax calculate
// #include <iostream>
// using namespace std;
// int main () {
//     int salary, tax,actualTotal;

//     cout << " Enter Your Salary = " ;
//     cin >> salary;
//     if ( salary>=100000 && salary<500000) {
//         tax=(10*salary)/100;
//         actualTotal=salary-tax;
//        cout << actualTotal<<endl<<tax; 
//     }

//     else if ( salary>=500000 && salary<1000000) {
//         tax=(20*salary)/100;
//         actualTotal=salary-tax;
//        cout << actualTotal<<endl<<tax; 
//     }
//     else if ( salary>=1000000 && salary<1500000) {
//         tax=(30*salary)/100;
//         actualTotal=salary-tax;
//        cout << actualTotal<<endl<<tax; 
//     }
//     else {
//         cout << "wrong input" ;
//     }
// } 

//  1 for 2variable swiping and 2 for 3variable swiping
// #include <iostream>
// using namespace std;
// int main () {
//     int num, temp;
//     int a = 10;
//     int b = 12;

//     cout << " Enter 1 for 2variable swiping and 2 for 3variable swiping = " ;
//     cin >> num;
//     if (num==1) {
//     a = a + b;
//     b = a- b;
//     a = a - b;
//     cout << a << endl << b;
//     }
//     else if (num==2) {
//     temp = a;
//     a = b;
//     b = temp;
//     cout << a << endl << b;
//     }
//     else {
//         cout<< "wrong input";
//     }
// }


// number reverse
// #include <iostream>
// using namespace std;
// int main () {
//     int num = 123;

//     cout << num%10;
//     num/=10;    // num = num / 10

//     cout << num%10;
//     num/=10;

//     cout << num%10;
// }


