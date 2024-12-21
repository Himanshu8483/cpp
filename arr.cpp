//     // int size = sizeof(arr) / sizeof(arr[0]);

// #include <iostream>
// using namespace std;
// int main() { 
// //  variable size 
//     // int arr[]={1,2,3,4,5,};
//     // cout<<arr[2];

//     // // fixed size
//     // int arr[5]= {10,20,30,40,50};
//     // cout<<arr[4]<<endl; 
//     // cout<<arr[6];           // garbage value return when incorrect index

//     // for(int i=0; i<5; ++i){
//     //     cout<<arr[i] << " ";
//     // }
//     // int arr[]= {1,2,3,4,5};
//     // // update
//     // arr[0]=arr[3]+arr[4];
//     // arr[1]=12;
//     // // int brr[5];
//     // int brr[]={};
//     // cout<<"enter  values for array = ";
//     // input value take
//     // for(int i= 0;i<5;++i)
//     // {
//     //     cin>>brr[i];
//     // }
//     // displqy or extract
//     // for (int i=0;i<5;++i){
//     //     cout<<brr[i]<<" ";
//     // }

//     // cout<<endl;
//     // for (int i=0;i<5;++i){
//     // // skip 
//     //     if(arr[i]!=3)
//     //     cout<<arr[i]<<" ";      // 9 12 4 5 
//     // }
//     // hiding and give new array (value 3 hide)
//     // int arr[]= {1,2,3,4,6};
//     // int j=0;
//     // for(int i=0;i<5;++i){
//     //     if(arr[i]!=3)
//     //     {
//     //         arr[j]=arr[i];
//     //         // cout<<"value of j = "<< j<<" ";     // 0 1 2 3
//     //         // cout<<"value of i = " << i<<" ";       // 0 1 3 4
//     //         j++;
//     //     }
//     // }
//     // cout<< arr[3]<<endl;    // 6
//     // cout<< arr[4]<<endl;    // 6
//     // for(int i=0; i<j; ++i){
//     //     cout<<arr[i]<<" ";      // 1 2 4 6
//     // }
//     // for(int i=0; i<=j; ++i){
//     //     cout<<arr[i]<<" ";      // 1 2 4 6 6
//     // }
//     // cout<<endl;
// // // comparision 
// //     int arr1[]={1,1,1,1,5};
// //     for(int i=0;i<5;++i) {
// //         for(int j=i+1;j<5;++j) {
// //             if(arr1[j]==arr1[i])
// //             {
// //                 cout<<arr1[i]<<" ";     // 1 1 1 1 1 1
// //             }
// //         }
// //     }
// // sum 
//     // int sum=0;
//     // int arr1[]={1,1,1,4,5};
//     // for(int i=0;i<5;++i){
//     //     sum=sum+arr1[i];
//     // }
//     // cout<<"Total sum of array = "<<sum;     // Total sum of array = 12

// // // maximum
//     int arr1[]={17,63,63,22,30};
//     int max=arr1[3];
//     for(int i=0;i<5;++i) {
//         if(max<arr1[i])
//                 max=arr1[i];
//         }
//         cout<<"Maximum Value = "<< max<<endl;     // 63
// // // // minimum
// //     for(int i=0;i<5;++i) {
// //         if(max>arr1[i])
// //                 max=arr1[i];
// //         }
// //         cout<<"Minimum Value = "<<max<<" ";     // 17
// // // // duplicate remove
// //     for(int i=0;i<5;++i) {
// //         if(arr1[i]==arr1[i+1])
// //                 cout<< arr1[i] << " ";  // 17 63 22 30
// //         }


// // // duplicate and unique value print
//     int arr1[]={82,82,63,82,62};
//     for(int i=0;i<5;++i) {
//         bool dup = false;       // let start with zero duplicate
//         for(int j=i+1;j<5;++j) {
//         if(arr1[i]==arr1[j] && arr1[i]!=-1){
//             arr1[j]=-1;         // take any value that's not in array
//             dup = true;
//             }

//         }
//         // if(dup){             // duplicate print
//         if(!dup && arr1[i]!=-1){        // Unique value (print not duplicate)
//         cout<<arr1[i] << " ";
//     }

// }
// }

// // frequency count
//     int arr1[]={82,82,63,82,62};
//     for(int i=0;i<5;++i) {
//         int count=1;
//         for(int j=i+1;j<5;++j) {
//         if(arr1[i]==arr1[j]){
//             ++count;
//             arr1[j]=-1;    
//             }
//         }
//         if(arr1[i]!=-1){        // print not duplicate
//         cout<<"the frequency of "<<arr1[i] <<" is "<< count<< endl;
//     }

// }
// }

// // sorting in ascending order 
#include <iostream>
using namespace std;

int main() {
    int arr[] = {82, 12, 45, 63, 91};
    for (int i = 0; i < 5; ++i) {
        for (int j = i+1; j < 4; ++j) {
            if (arr[j] < arr[i]) {
                int temp = arr[i];  // swap
                arr[i] = arr[j];    
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 5; ++i) {
        cout << arr[i] << " ";
    }
}

