// Pass by Reference by Pointers:
// #include <iostream>
// using namespace std;
// // void changeA(int a) {   // pass by value
// //     a = 20;
// // }

// // int main () {
// //     int a = 10;
// //     changeA(a);

// //     cout<<"inside main function : "<<a<<endl;       // 10

// void changeA(int* ptr) {   // pass by reference using pointers
//     *ptr = 20;
// }

// int main () {
//     int a = 10;
//     changeA(&a);

//     cout<<"inside main function : "<<a<<endl;       // 20
// }
