//     // int size = sizeof(arr) / sizeof(arr[0]);

// #include <iostream>
// using namespace std;
// int main() { 
// // variable size ===============
    // int arr[]={1,2,3,4,5,};
    // cout<<arr[2];        // 3

// // fixed size ===============
    // int arr[5]= {10,20,30,40,50};
    // cout<<arr[4]<<endl;     // 50
    // cout<<arr[6];           // garbage value return when incorrect index written 
    // 
    // for(int i=0; i<5; ++i){
    //     cout<<arr[i] << " ";     // print array values
    // }
// // update    ==============
    // arr[0]=arr[3]+arr[4];
    // arr[1]=12;

    // by input 
    // // int brr[5];
    // int brr[]={};
    // cout<<"enter values for array = ";     
    // for(int i= 0;i<5;++i) {
    //     cin>>brr[i];            // input value take
    // }
    // // displqy or extract
    // for (int i=0;i<5;++i) {
    //     cout<<brr[i]<<" ";       // printed input value as result
    // }

    // for (int i=0;i<5;++i){
//   // skip value
    //     if(arr[i]!=3)
    //     cout<<arr[i]<<" ";      // 9 12 4 5 
    // }
//    // hiding and give new array (value 3 hide)
    // int arr[]= {1,2,3,4,6};
    // int j=0;
    // for(int i=0;i<5;++i) {
    //     if(arr[i]!=3) {
    //         arr[j]=arr[i];
    //         // cout<<"value of j = "<<j<<" ";     // 0 1 2 3
    //         // cout<<"value of i = " <<i<<" ";    // 0 1 3 4
    //         j++;
    //     }
    // }
    // cout<< arr[3]<<endl;    // 6
    // cout<< arr[4]<<endl;    // 6
    // for(int i=0; i<j; ++i) {
    //     cout<<arr[i]<<" ";      // 1 2 4 6
    // }
    // for(int i=0; i<=j; ++i){
    //     cout<<arr[i]<<" ";      // 1 2 4 6 6
    // }
//     cout<<endl;
// // comparision 
    // int arr[]={1,1,1,1,5};
    // for(int i=0;i<5;++i) {
    //     for(int j=i+1;j<5; ++j) {
    //         if(arr[j]==arr[i])
    //         {
    //             cout<<arr[i]<<" ";     // 1 1 1 1 1 1
    //         }
    //     }
    // }
// // sum
    // int sum=0;
    // int arr[]={1,1,1,4,5};
    // for(int i=0;i<5;++i){
    //     sum=sum+arr[i];
    // }
    // cout<<"Total sum of array = "<<sum;     // Total sum of array = 12

// // maximum
//     int arr[]={17,63,63,22,17};
//     int max=arr[3];
//     for(int i=0;i<5;++i) {
//         if(max<arr[i])
//                 max=arr[i];
//         }
//         cout<<"Maximum Value = "<< max<<endl;     // 63
// // minimum
//     int min=arr[0];
//     for(int i=0;i<5;++i) {
//         if(min>arr[i])
//                 min=arr[i];
//         }
//         cout<<"Minimum Value = "<<min<<" "<<endl;     // 17
// // duplicate value find only near it (not proper result)
//     for(int i=0;i<5;++i) {
//         if(arr[i]==arr[i+1])
//                 cout<< arr[i] << " ";  // 17 63 22 30
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
    // int arr[]={82,82,63,82,62, 62, 22,};
    // // duplicate and unique value print (proper work)
    // for(int i=0;i<7;++i) {
    //     bool dup = false;       // let start with zero duplicate
    //     for(int j=i+1;j<7;++j) {
    //         if(arr[i]==arr[j]){
    //             arr[j]=-1;         // take any value that's not in array
    //             dup = true;
                
    //         }
    //     }
    //     // if(dup  && arr[i]!=-1){             // 82 62     duplicate print
    //     if(!dup && arr[i]!=-1){        // 63 22      Unique value (print not duplicate)
    //         cout<<arr[i] << " ";
    //     }
    // }
// frequency count
//     int arr[]={82,82,63,82,62, 62, 22,};
//     for(int i=0;i<7;++i) {
//         int count=1;
//         for(int j=i+1;j<7;++j) {
//             if(arr[i]==arr[j]){
//                 ++count;
//                 arr[j]=-1;    
//             }
//         }
//         if(arr[i]!=-1){       
//         cout<<"the frequency of "<<arr[i] <<" is "<< count<< endl;
//         }
//     }
// }
// // sorting in ascending order 
//     int arr[] = {82, 12, 45, 63, 91};
//     for(int i = 0; i < 5; ++i) {
//         for (int j = i+1; j < 5; ++j) {
//             if (arr[j] < arr[i]) {
//                 int temp = arr[i];  // swap
//                 arr[i] = arr[j];    
//                 arr[j] = temp;
//             }
//         }
//     }
//     for (int i = 0; i < 5; ++i) {
//         cout << arr[i] << " ";
//     }

// max 3
//     int arr[]={17,63,63,22,17};
//     int max=arr[3];
//     for(int i=0;i<5;++i) {
//         if(max<arr[i])
//                 max=arr[i];
//         }
//         cout<<"Maximum Value = "<< max<<endl;     // 63
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {103, 78, 63, 22, 78};

//     // Find the maximum 3 value
//     int max1 = 0;
//     int max2 = 0;
//     int max3 = 0;
//     for (int i = 0; i < 5; ++i) {
//         for (int j = 0; j < 5; ++j) {
//             if (arr[j] > max1) {
//                 max1 = arr[j];
//             }
//             else if (arr[j] > max2 && arr[j] < max1) {
//                 max2 = arr[j];
//             }
//             else if (arr[j] > max3 && arr[j] < max2) {
//                 max3 = arr[j];
//             }
//         }
//     }
//     cout << "Maximum Value = " << max1 << endl;
//     cout << "Second Maximum Value = " << max2 << endl;
//     cout << "Third Maximum Value = " << max3 << endl;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {103, 79, 63, 22, 78};

//     // Find the kth largest number for non duplicate value
//     int k=3;
//     for(int i = 0; i < 5; ++i) {
//         for (int j = i+1; j < 5; ++j) {
//             if (arr[j] > arr[i]) {
//                 int temp = arr[i];  // swap
//                 arr[i] = arr[j];    
//                 arr[j] = temp;
//             }
//         }
//     }
//         cout<<arr[k-1];

// }
// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {103, 79, 63, 22, 78};
//     // int arr[] = {11,13,13,10,9};
// // reverse of array 
// // for (int i =4; i>=0; --i){
// //     cout<<arr[i]<< " ";
// // }
//     for(int i = 0; i < 5/2; ++i) {
//         for (int j = i+1; j < 5; ++j) {
//             if (arr[i] > arr[j]) {
//                 int temp = arr[i];  // swap
//                 arr[i] = arr[j];    
//                 arr[j] = temp;
//             }
//         }
//     }
//     for(int i=0;i<5;++i) {
//         cout<< arr[i]<< " ";
//     }
// }
// #include <iostream>
// using namespace std;
// int main() {
//    // for only difference 1 value missing
//     int arr[]= {1,2,3,5,7};
//     for(int i=0;i<5;++i) {
//         if(arr[i+1]-arr[i]>1){
//             cout<<arr[i]+1<<" ";       // 4 6
                
//             }
//         }
// }

// #include <iostream>
// using namespace std;
// int main() {
//    // missing value find
//     int arr[]= {11,12,14,16,30};
//     int j=0;
//     for(int i=0;i<5;++i) {
//         if(arr[i+1]-arr[i]>1){
//             for(int j=arr[i]+1;j<arr[i+1];++j){
//             cout<<j<<" ";       // 13 15 17 18 19 20 21 22 23 24 25 26 27 28 29 
                
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//    // value find in array
//     int arr[]= {11,12,14,16,30};
//     int target=16;      // yes
//     // int target=21;      // no
//     for(int i=0;i<5;++i) {
//         if(arr[i]==target){
//             cout<<"yes";
//             return 0;
//             }
//         }
//         cout<<"no";


    // }
