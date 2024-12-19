#include <iostream>
using namespace std;
int main() { 
//  variable size 
    // int arr[]={1,2,3,4,5,};
    // cout<<arr[2];

    // // fixed size
    // int arr[5]= {10,20,30,40,50};
    // cout<<arr[4]<<endl; 
    // cout<<arr[6];           // garbage value return when incorrect index

    // for(int i=0; i<5; ++i){
    //     cout<<arr[i] << " ";
    // }
    // int arr[]= {1,2,3,4,5};
    // // update
    // arr[0]=arr[3]+arr[4];
    // arr[1]=12;
    // // int brr[5];
    // int brr[]={};
    // cout<<"enter  values for array = ";
    // input value take
    // for(int i= 0;i<5;++i)
    // {
    //     cin>>brr[i];
    // }
    // displqy or extract
    // for (int i=0;i<5;++i){
    //     cout<<brr[i]<<" ";
    // }

    // cout<<endl;
    // for (int i=0;i<5;++i){
    // // skip 
    //     if(arr[i]!=3)
    //     cout<<arr[i]<<" ";      // 9 12 4 5 
    // }
    // hiding and give new array
    // int arr[]= {1,2,3,4,5};
    // int j=0;
    // for(int i=0;i<5;++i){
    //     if(arr[i]!=3)
    //     {
    //         arr[j]=arr[i];
    //         j++;
    //     }
    // }
    // cout<< arr[3]<<endl;    // 5 
    // cout<< arr[4]<<endl;    // 5
    // for(int i=0; i<j; ++i){
    //     cout<<arr[i]<<" ";      // 1 2 4 5
    // }
    // cout<<endl;
    // hiding and give new array
//     int arr[]= {1,2,3,4,5};
//     int j=0;
//     for(int i=0;i<=5;++i){
//         if(arr[i]!=3)
//         {
//             arr[j]=arr[i];
//             j++;
//         }
//     }
//     cout<< arr[3]<<endl;    // 5 
//     cout<< arr[4]<<endl;    // garbage value (6422280)
//     for(int i=0; i<5; ++i){
//         cout<<arr[i]<<" ";      // 1 2 4 5 
//     }
//     cout<<endl;
// // comparision 
    // int arr1[]={1,1,1,1,5};
    // for(int i=0;i<5;++i) {
    //     for(int j=i+1;j<5;++j) {
    //         if(arr1[j]==arr1[i])
    //         {
    //             cout<<arr1[i]<<" ";     // 1 1 1
    //         }
    //     }
    // }
// max
    int arr1[]={17,63,4,22,30};
    int max=arr1[0];
    for(int i=1;i<5;++i) {
        if(max<arr1[i])
                // max=arr1[i+1];
                max=arr1[i];
        }
        cout<<max<<" ";     // 22
// sum 
    // int sum=0;
    // int arr1[]={1,1,1,4,5};
    // for(int i=0;i<5;++i){
    //     sum=sum-arr1[i];
    // }
    // cout<<"Total sum of array = "<<sum;


}

