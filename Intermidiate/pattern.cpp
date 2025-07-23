// Pattern Print 
// Inverted Right-Aligned Pyramid 
// *****
//  ****
//   ***
//    **
//     *
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c>=r) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Left-Aligned Pyramid 
// *    
// **
// ***
// ****
// *****
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Right-Aligned Pyramid 
//     *
//    **
//   ***
//  ****
// *****
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c>=6-r) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

//  Left-Aligned Inverted Pyramid 
// *****
// ****
// ***
// **
// *
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=6-r) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// pyramid
//     *    
//    ***
//   *****
//  *******
// *********
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=9; ++c){
            if (c>=6-r && c<=4+r) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// inverted pyramid
// *********
//  *******
//   *****
//    ***
//     *
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=9; ++c){
            if (c>=r && c<=10-r) {
            cout<<"*";
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Diamond Shape
// value of a = 1      *    
// value of a = 2     ***
// value of a = 3    *****
// value of a = 4   *******
// value of a = 5  *********
// value of a = 4   *******
// value of a = 3    *****
// value of a = 2     ***
// value of a = 1      *
#include <iostream>
using namespace std;
int main() {
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

// Left-Aligned Pyramid  (numbers)
// 1    
// 12
// 123
// 1234
// 12345
#include <iostream>
using namespace std;
int main() {
    int a=0;
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r ) {
            cout<<c;
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// 1    
// 22
// 333
// 4444
// 55555
#include <iostream>
using namespace std;
int main() {
    int a=0;
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r ) {
            cout<<r;
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// 1    
// 23
// 456
// 78910
#include <iostream>
using namespace std;
int main() {
    int n=1;
    for(int r=1; r<5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r ) {
            cout<<n;
            ++n;
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// Left-Aligned Pyramid  (character)
// A    
// AB
// ABC
// ABCD
// ABCDE
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r ) {
            cout<<char(c+64);
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// A    
// BB
// CCC
// DDDD
// EEEEE
#include <iostream>
using namespace std;
int main() {
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r ) {
            cout<<char(r+64);
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// A    
// BC
// DEF
// GHIJ
// KLMNO
#include <iostream>
using namespace std;
int main() {
    char a='A';
    for(int r=1; r<=5; ++r) {
        for(int c=1; c<=5; ++c){
            if (c<=r ) {
            cout<<a++;
            }
            else{
            cout<<" ";
            }
        }
        cout<<endl;
    }
}

// palindromic number pyramid or symmetric number pyramid
//     1    
//    121
//   13331
//  1444441
// 155555551
#include <iostream>
using namespace std;
int main() {
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

