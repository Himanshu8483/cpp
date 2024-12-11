// lcm without formula
// #include <iostream>
// using namespace std;

// int main() { 
//     int sn=3;
//     int ln=7;
//     int lcm;
//     for(int i=ln;; i=i+ln){
//         if(i%sn==0 && i%ln==0){
//         lcm=i;
//         break;
//         }
// }
//     cout<<lcm;  
// }

// gp series term
#include <iostream>
using namespace std;
int main() {
int n=5;
int a=2;
int r=3;
for(int i=0;i<n;++i)
{
    cout<<a << "    ";    
    a=a*r;
    }
}