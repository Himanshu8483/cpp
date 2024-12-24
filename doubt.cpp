



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