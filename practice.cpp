// #include <iostream>
// using namespace std;
// int main() { 
    
    // int arr[]={4,12,15,12,4};
    // int sum =0;
    // for(int i=0; i<5;i++){
    //     sum+=arr[i];
    // }
    // cout<<sum;

    // for(int i=0;i<5/2;++i){
    //     if(arr[i]!=arr[5-i-1]){
    //         cout<<"not pallindrome";
    //         return 0;
    //     }
    // }
    // cout<<"pallindrome";

    // int arr[]={11,22,11,23,11};
    // for (int i=0; i<5; ++i) {
    // int count=1;
    //     for(int j=i+1; j<5; ++j){
    //         if(arr[j]==arr[i]){
    //             count++;
    //             arr[j]=-1;
    //         }
    //     }
    //     if(arr[i]!=-1){
    //         cout<<arr[i]<< " is "<<count; 
    //     }
    // }

    // int arr[]={11,22,1,23,12};
    // for(int i=0; i<5/2;++i){
    //     int temp=arr[i];
    //     arr[i]=arr[5-i-1];
    //     arr[5-i-1]=temp;
    // }
    // for(int i=0; i<5;++i){
    //     cout<<arr[i]<<" ";
    // }

//         int arr[]={11,22,11,23,11};
//     for (int i=0; i<5; ++i) {
//     bool dup = false;
//         for(int j=i+1; j<5; ++j){
//             if(arr[j]==arr[i]){
//                 arr[j]=-1;
//                 dup=true;
//             }
//         }
//         if(arr[i]!=-1 && !dup){
//             cout<<arr[i]<<" "; 
//         }
//     }
// }

// // function to print number into digit 
// #include <iostream> 
// using namespace std;
// int digit(int num) { 
//     int dig = 0;
//     int rb = 0;  // Variable to store the reversed number
//     for (; num != 0; num /= 10) {
//         rb = rb * 10 + (num % 10);  // Reverse the number
//     }
//     for (; rb!=0; rb=rb/10) {   
//         dig=rb%10;          // Extract the last digit
//         switch(dig){
//             case 1 : 
//             cout<< "one " ;
//             break;
//             case 2 : 
//             cout<< "two " ;
//             break;
//             case 3 : 
//             cout<< "three " ;
//             break;
//             case 4 : 
//             cout<< "four " ;
//             break;
//             default: cout << "wrong Input";
//             break;
//         }
//     }
//      return 0;
// }
// int main(){
//     int num = 1234;  // Initial number
//     digit(num);
// }

// // gp series 
// #include <iostream>
// using namespace std;
// int gp(int n) {
// int a=1;
// int r=3;
// for(int i=0;i<n;++i) {
//     cout<<a<<"  ";
//         a*=r; 
//     }
//     return 0;
// }
// int main(){
//     int n=5;
//     gp(n);
// }

// sum 
// #include <iostream>
// using namespace std;
// int main(){
//     int sum =0;
//     int arr[]={1,3,2,5,4};
//     for(int i=0;i<5;++i){
//         sum+=arr[i];
//     }
//     cout<<sum;
// }

// reverse 
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,2,5,4};
//     for(int i=0; i<5/2;++i){
//         int swap=arr[5-i-1];
//         arr[5-i-1]=arr[i];
//         arr[i]=swap;
//     }
//     for(int i=0; i<5;++i){
//     cout<<arr[i];
//     }
// }

// anagram
// #include <iostream>
// using namespace std;
// int main(){
//     string str1= "anagram";
//     string str2= "aaanmrg";
//         bool found;
//     int length=str1.length();
//     if(str1.length()!=str2.length()){
//         cout<<"not anagram";
//         return 0;
//     }
//     for(int i=0;i<length;++i){
//         found=false;
//         for(int j=0;j<length;++j){
//             if(str1[i]==str2[j]){
//             str2[j]=-1;
//             found=true;
//             break;
//             }
//         }
//         if(!found){
//             cout<<"not anagram";
//                 return 0;
//         }
//     }
//         cout<<"anagram";
// }

// valid parenthesis 
#include <iostream>
using namespace std;
int main(){
    string str="[{()}]";
    int par= 0;
    int cur=0;
    int squ=0;
    for(int i=0;i<str.length();++i){
        if(str[i]=='{'){
            cur++;
        }
        else if(str[i]=='('){
            par++;
        }
        else if(str[i]=='['){
            squ++;
        }
        else if(str[i]=='}'){
            cur--;
        }
        else if(str[i]==')'){
            par--;
        }
        else if(str[i]==']'){
            squ--;
        }
        else if(par<0 || squ<0 || par<0){
            cout<< "not valid";
            return 0;
        }

    }
    if(cur==0 && par==0 && squ==0){
        cout<< "valid";
    }
    else{
        cout<<"Not valid";
    }
                                                                                       
}