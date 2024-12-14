// Pattern Print 
#include <iostream>
using namespace std;
int main() {
    // for(int r=1; r<=5; ++r) {
    //     for(int c=1; c<=5; ++c){
    //         if (c>=r) {
    //         cout<<"*";
    //         }
    //         else{
    //         cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int r=1; r<=5; ++r) {
    //     for(int c=1; c<=5; ++c){
    //         if (c<=r) {
    //         cout<<"*";
    //         }
    //         else{
    //         cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int r=1; r<=5; ++r) {
    //     for(int c=1; c<=5; ++c){
    //         if (c>=6-r) {
    //         cout<<"*";
    //         }
    //         else{
    //         cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int r=1; r<=5; ++r) {
    //     for(int c=1; c<=5; ++c){
    //         if (c<=6-r) {
    //         cout<<"*";
    //         }
    //         else{
    //         cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int r=1; r<=5; ++r) {
    //     for(int c=1; c<=9; ++c){
    //         if (c>=6-r && c<=4+r) {
    //         cout<<"*";
    //         }
    //         else{
    //         cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int r=1; r<=5; ++r) {
    //     for(int c=1; c<=9; ++c){
    //         if (c>=r && c<=10-r) {
    //         cout<<"*";
    //         }
    //         else{
    //         cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    int a=0;
    for(int r=1; r<=9; ++r) {
        (r<=5) ? a++ : a--;
        cout <<"value of a = "<< a<<"\t";
        for(int c=1; c<=9; ++c){
            if (c>=6-a && c<=4+a) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}
