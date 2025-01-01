// int size = sizeof(arr) / sizeof(arr[0]);

// variable size
#include <iostream>
using namespace std;
int main() { 
    int arr1[]={1,2,3,4,5,};
    cout<<arr1[2];        // 3
}

// fixed size 
#include <iostream>
using namespace std;
int main() { 
    int arr2[5]= {10,20,30,40,50};
    cout<<arr2[4]<<endl;     // 50
    cout<<arr2[6];           // garbage value return when incorrect index written 
    for(int i=0; i<5; ++i){
        cout<<arr2[i] << " ";    // 10 20 30 40 50
    }
}

#include <iostream>
using namespace std;
int main() { 
    int arr3[5];
    cout<<"enter values for array = ";     
    for(int i= 0;i<5;++i) {
        cin>>arr3[i];            // input value take
    }
    // display or extract
    for (int i=0;i<5;++i) {
        cout<<arr3[i]<<" ";       // printed input value as result
    }
}

#include <iostream>
using namespace std;
int main() { 
// update  
    int arr4[]={1,2,3,4,5,};
    arr4[0]=arr4[3]+arr4[4];
    arr4[1]=12;
    for (int i=0;i<5;++i){
// skip value
        if(arr4[i]!=3)
        cout<<arr4[i]<<" ";      // 9 12 4 5 
    }
}

#include <iostream>
using namespace std;
int main() { 
// hiding and give new array (value 3 hide)
    int arr5[]= {1,2,3,4,6};
    int j=0;
    for(int i=0;i<5;++i) {
        if(arr5[i]!=3) {
            arr5[j]=arr5[i];
            // cout<<"value of j = "<<j<<" ";     // 0 1 2 3
            // cout<<"value of i = " <<i<<" ";    // 0 1 3 4
            j++;
        }
    }
    cout<< arr5[3]<<endl;    // 6
    cout<< arr5[4]<<endl;    // 6
    for(int i=0; i<j; ++i) {
        cout<<arr5[i]<<" ";      // 1 2 4 6
    }
    cout<<endl;
    for(int i=0; i<=j; ++i){
        cout<<arr5[i]<<" ";      // 1 2 4 6 6
    }
}

#include <iostream>
using namespace std;
int main() { 
// comparision 
    int arr[]={1,1,1,1,5};
    for(int i=0;i<5;++i) {
        for(int j=i+1;j<5; ++j) {
            if(arr[j]==arr[i])
            {
                cout<<arr[i]<<" ";     // 1 1 1 1 1 1
            }
        }
    }

// sum
    int sum=0;
    int arr[]={1,1,1,4,5};
    for(int i=0;i<5;++i){
        sum=sum+arr[i];
    }
    cout<<"Total sum of array = "<<sum;     // Total sum of array = 12

// maximum
    int arr[]={17,63,63,22,17};
    int max=arr[3];
    for(int i=0;i<5;++i) {
        if(max<arr[i])
                max=arr[i];
        }
        cout<<"Maximum Value = "<< max<<endl;     // 63

// minimum
    int min=arr[0];
    for(int i=0;i<5;++i) {
        if(min>arr[i])
                min=arr[i];
        }
        cout<<"Minimum Value = "<<min<<" "<<endl;     // 17

// duplicate value find only near it (not proper result)
    for(int i=0;i<5;++i) {
        if(arr[i]==arr[i+1])
                cout<< arr[i] << " ";  // 17 63 22 30
    }

    int arr[]={82,82,63,82,62, 62, 22,};
// duplicate and unique value print (proper work)
    for(int i=0;i<7;++i) {
        bool dup = false;       // let start with zero duplicate
        for(int j=i+1;j<7;++j) {
            if(arr[i]==arr[j]){
                arr[j]=-1;         // take any value that's not in array
                dup = true; 
            }
        }
// if(dup  && arr[i]!=-1){             // 82 62     duplicate print
        if(!dup && arr[i]!=-1){        // 63 22      Unique value (print not duplicate)
            cout<<arr[i] << " ";
        }
    }

// frequency count
    for(int i=0;i<7;++i) {
        int count=1;
        for(int j=i+1;j<7;++j) {
            if(arr[i]==arr[j]){
                ++count;
                arr[j]=-1;    
            }
        }
        if(arr[i]!=-1){       
        cout<<"the frequency of "<<arr[i] <<" is "<< count<< endl;
        }
    }

// sorting in ascending order 
    int arr[] = {82, 12, 45, 63, 91};
    for(int i = 0; i < 5; ++i) {
        for (int j = i+1; j < 5; ++j) {
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

// max 3
    int arr[]={17,63,63,22,17};
    int max=arr[3];
    for(int i=0;i<5;++i) {
        if(max<arr[i])
                max=arr[i];
        }
        cout<<"Maximum Value = "<< max<<endl;     // 63
    }

// Find the maximum 3 value
#include <iostream>
using namespace std;
int main() {
    int arr[] = {103, 78, 63, 22, 78};
    int max1 = 0;
    int max2 = 0;
    int max3 = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (arr[j] > max1) {
                max1 = arr[j];
            }
            else if (arr[j] > max2 && arr[j] < max1) {
                max2 = arr[j];
            }
            else if (arr[j] > max3 && arr[j] < max2) {
                max3 = arr[j];
            }
        }
    }
    cout << "Maximum Value = " << max1 << endl;
    cout << "Second Maximum Value = " << max2 << endl;
    cout << "Third Maximum Value = " << max3 << endl;
}

// Find the kth largest number for non duplicate value
#include <iostream>
using namespace std;
int main() {
    int arr[] = {103, 79, 63, 22, 78};
    int k=3;
    for(int i = 0; i < 5; ++i) {
        for (int j = i+1; j < 5; ++j) {
            if (arr[j] > arr[i]) {
                int temp = arr[i];  // swap
                arr[i] = arr[j];    
                arr[j] = temp;
            }
        }
    }
        cout<<arr[k-1];
}

#include <iostream>
using namespace std;
int main() {
// reverse of array 
int arr[] = {11,13,13,10,9};
    for (int i =4; i>=0; --i){
        cout<<arr[i]<< " ";
    }

// Ascending Order  by swaping
    int arr[] = {103, 79, 63, 22, 78};
    for(int i = 0; i < 5/2; ++i) {
        for (int j = i+1; j < 5; ++j) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];  // swap
                arr[i] = arr[j];    
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<5;++i) {
        cout<< arr[i]<< " ";
    }
}

// find missing difference of one
#include <iostream>
using namespace std;
int main() {
    int arr[]= {1,2,3,5,7};
    for(int i=0;i<5;++i) {
        if(arr[i+1]-arr[i]>1){
            cout<<arr[i]+1<<" ";       // 4 6
                
            }
        }
}

// missing value find
#include <iostream>
using namespace std;
int main() {
    int arr[]= {11,12,14,16,30};
    int j=0;
    for(int i=0;i<5;++i) {
        if(arr[i+1]-arr[i]>1){
            for(int j=arr[i]+1;j<arr[i+1];++j){
            cout<<j<<" ";       // 13 15 17 18 19 20 21 22 23 24 25 26 27 28 29 
                
            }
        }
    }
}

// value find in array 
#include <iostream>
using namespace std;
int main() {
    int arr[]= {11,12,14,16,30};
    int target=16;      // yes
    // int target=21;      // no
    for(int i=0;i<5;++i) {
        if(arr[i]==target){
            cout<<"yes";
            return 0;
            }
        }
        cout<<"no";
}

#include <iostream>
using namespace std;
int main() {
// remove any value from array 
    int arr[]={1,2,1,3,2};
    int remove=1;
    int j=0;
    
    for(int i=0; i<5;++i)
    {
        if(arr[i]!=remove){
            arr[j]=arr[i];
            ++j;
        }
    }
    for(int i=0; i<j;++i)   {
        cout<<arr[i]<<" ";
    }

// print zeros at last 
    int arr[]= {1,0,3,2,0};
    int j= 0;
    for (int i=0;i<5; ++i)
    {
        if (arr[i]!=0){
            arr[j]=arr[i];
            ++j;
        }
    }
    for (int i=j;i<5; ++i){
        arr[i]=0;
    }
    for (int j=0;j<5;++j){
        cout<<arr[j]<<" ";
    }

// reverse 
    int arr[]={1,2,3,4,5};
    for (int i=0;i<5/2;++i){
        int temp;
        temp=arr[i];
        arr[i]=arr[5-i-1];
        arr[5-i-1]=temp;
    }
    for(int i=0; i<5; ++i)
    {
        cout<<arr[i]<< " ";
    }

// pallindrome check 
    int arr[]={1,2,3,2,1};
    for (int i =0; i<5/2; ++i){
        if(arr[i]!=arr[5-i-1])
        {
            cout<<"not pallindrome";
            return 0;
        }
    }
    cout<<"pallindrome";

// remove all duplicates
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