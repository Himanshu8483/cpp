// Pattern Print 
#include <iostream>
using namespace std;
int main() {
    // Inverted Right-Aligned Pyramid 
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c>=r) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

    // Left-Aligned Inverted Pyramid 
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
    // Right-Aligned Pyramid 
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c>=6-r) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
//  Left-Aligned Inverted Pyramid 
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=6-r) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// pyramid
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=9; ++c){
//             if (c>=6-r && c<=4+r) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
    // inverted pyramid
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=9; ++c){
//             if (c>=r && c<=10-r) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
// Diamond Shape
//     int a=0;
//     for(int r=1; r<=9; ++r) {
//         (r<=5) ? a++ : a--;
//         cout <<"value of a = "<< a<<"\t";
//         for(int c=1; c<=9; ++c){
//             if (c>=6-a && c<=4+a) {
//             cout<<"*";
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
    // Left-Aligned Pyramid  (numbers)
//     int a=0;
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r ) {
//             cout<<c;
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//     int a=0;
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r ) {
//             cout<<r;
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//     int n=1;
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r ) {
//             cout<<n;
//             ++n;
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }
    // Left-Aligned Pyramid  (character)
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r ) {
//             cout<<char(c+64);
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r ) {
//             cout<<char(r+64);
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }


//     char a='A';
//     for(int r=1; r<=5; ++r) {
//         for(int c=1; c<=5; ++c){
//             if (c<=r ) {
//             cout<<a++;
//             }
//             else{
//             cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// Make this Pyramid
//     1    
//    121   
//   13331  
//  1444441 
// 155555551
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=9; ++c){
            if (c>=7-r && c<=3+r) {
                cout<< r;
            }
            else if (c>=6-r && c<=4+r){ 
                cout<< "1";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}
