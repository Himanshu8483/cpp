// perfect numbers find (nums factor addition will be = num)
// #include <iostream>
// using namespace std;

// int main() { 
//     int num = 6;
//     int sum = 0;

//     for (int i=1; i<num; ++i)
//     {
//          if(num%i==0){
//             sum=sum+i;
//         } 
//     }     
//     if(sum==num)    {
//         cout<<"perfect";
//     }
//     else {
//         cout<<"no perfect";
//     }
// }

// lcm hcf 
// #include <iostream>
// using namespace std;

// int main() { 
//     int sn=3;
//     int ln=6;
//     int hcf;
//     int lcm;
//     for(int i=1 ; i<=sn; ++i){
//         if(sn%i==0 && ln%i==0)
//         hcf=i;
//     }
//     // cout << hcf;
//     lcm=(sn*ln)/hcf;
//     cout<<lcm;
// }
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
int a=1;
int r=3;
int power=2;
int sum =1;
int gp=0;
for(int i=0;i<n;++i)
{
        for (int i=0; i<power; ++i)
        sum*=power;      
    gp=a*sum;  
    cout<<gp<< " ";
    }
}