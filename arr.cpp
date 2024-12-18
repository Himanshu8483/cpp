// #include <iostream>
// using namespace std;
// int main() { 
//     // variable size
//     // int arr[]={1,2,3,4,5,};
//     // cout<<arr[2];

//     // // fixed size
//     int arr[5]= {10,20,30,40,50};
//     // cout<<arr[4]; 
//     // cout<<arr[6];           // garbage value return when incorrect index

//     for(int i=0; i<5; ++i){
//         cout<<arr[i] << " ";
//     }
// }

#include <iostream>
using namespace std;
int main() { 
    // insertion 
    int arr[]= {1,2,3,4,5};
    // update
    arr[0]=arr[3]+arr[4];
    arr[1]=12;
    int brr[5];
    // cout<<"enter  values for array";
    // for(int i= 0;i<5;++i)
    // {
    //     cin>>brr[i];
    // }

    // displqy or extract
    for (int i=0;i<5;++i){
        cout<<brr[i]<<endl;
    }
    for (int i=0;i<5;++i){
        // skip 
        if(arr[i]!=3)
        cout<<arr[i]<<endl;
    }

    int j=0;
    for(int i=0;i<=5;++i){
        if(arr[i]!=3)
        {
            arr[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<j-1;++i){
        cout<<arr[i]<<endl;
    }
// // comparision 
//     int arr1[]={1,1,1,4,5};
//     for(int i=0;i<5;++i)
//     {
//     for(int j=i+1;j<5;++j)
//     {
//         if(arr1[i]==arr1[j])
//         {
//             cout<<arr1[i]<<endl;
//         }
//     }
//     }
// sum 
    int sum=0;
    int arr1[]={1,1,1,4,5};
    for(int i=0;i<5;++i){
        sum=sum-arr1[i];
    }
    cout<<"Total sum of array = "<<sum;





}

