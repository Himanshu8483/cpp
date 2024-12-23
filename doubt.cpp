

#include <iostream>
using namespace std;
int main() {
   // hiding and give new array (value 3 hide)
    int arr[]= {1,2,3,4,6};
    int j=0;
    for(int i=0;i<5;++i) {
        if(arr[i]!=3) {
            arr[j]=arr[i];
            // cout<<"value of j = "<<j<<" ";     // 0 1 2 3
            // cout<<"value of i = " <<i<<" ";    // 0 1 3 4
            j++;
        }
    }
    cout<< arr[3]<<endl;    // 6
    cout<< arr[4]<<endl;    // 6
    for(int i=0; i<j; ++i) {
        cout<<arr[i]<<" ";      // 1 2 4 6
    }
    for(int i=0; i<=j; ++i){
        cout<<arr[i]<<" ";      // 1 2 4 6 6
    }
    cout<<endl;
}

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[]={82,22,62,82,62, 62, 2,};
//     // duplicate and unique value print (proper work)
//     for(int i=0;i<7;++i) {
//         bool dup = false;       // let start with zero duplicate
//         for(int j=i+1;j<7;++j) {
//             if(arr[i]==arr[j]){
//                 arr[j]=-1;         // take any value that's not in array
//                 dup = true;
//             cout<<arr[i] << " ";
                
//             }
        // }
        // if(dup ){             // 82 62     duplicate print
        // if(!dup && arr[i]!=-1){        // 63 22      Unique value (print not duplicate)
            // cout<<arr[i] << " ";
        // }
    // }
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