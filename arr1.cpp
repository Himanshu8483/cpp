#include <iostream>
using namespace std;
int main() {
    // // remove any value from array 
    // int arr[]={1,2,1,3,2};
    // int remove=1;
    // int j=0;
    
    // for(int i=0; i<5;++i)
    // {
    //     if(arr[i]!=remove){
    //         arr[j]=arr[i];
    //         ++j;
    //     }
    // }
    // for(int i=0; i<j;++i){
    //     cout<<arr[i]<<" ";
    // }

// // print zeros at last 
//     int arr[]= {1,0,3,2,0};
//     int j= 0;
//     for (int i=0;i<5; ++i)
//     {
//         if (arr[i]!=0){
//             arr[j]=arr[i];
//             ++j;
//         }
//     }
//     for (int i=j;i<5; ++i){
//         arr[i]=0;
//     }
//     for (int j=0;j<5;++j){
//         cout<<arr[j]<<" ";
//     }

// // reverse 
//     int arr[]={1,2,3,4,5};
//     for (int i=0;i<5/2;++i){
//         int temp;
//         temp=arr[i];
//         arr[i]=arr[5-i-1];
//         arr[5-i-1]=temp;
//     }
//     for(int i=0; i<5; ++i)
//     {
//         cout<<arr[i]<< " ";
//     }

// // pallindrome check 
//     int arr[]={1,2,3,2,1};
//     for (int i =0; i<5/2; ++i){
//         if(arr[i]!=arr[5-i-1])
//         {
//             cout<<"not pallindrome";
//             return 0;
//         }
//     }
//     cout<<"pallindrome";

// remove all occurence 
    int arr[]={1,2,1,3,2};
    for(int i=0; i<5;++i) {
        for(int j=i+1; j<5; ++j) {
            if(arr[i]==arr[j]){
                arr[j]=-1;
            }
        }
    }
    for(int i=0; i<5; ++i){
        if(arr[i]!=-1){
            cout<<arr[i] << " ";
        }
    }
}