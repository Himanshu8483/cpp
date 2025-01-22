### **Data Structures and Algorithms (DSA) Notes in C++**

---

### **1. Definition of DSA**
**Data Structures and Algorithms** (DSA) help in organizing and processing data efficiently to solve problems.  
- **Data Structures**: Ways to organize and store data (e.g., arrays, stacks, trees).  
- **Algorithms**: Steps to solve a problem efficiently (e.g., sorting, searching).

---

### **2. Data Types in C++**
Data types define the kind of data a variable can hold.

#### **2.1. Primitive Data Types**
Built-in types provided by the language.  
Examples: `int`, `float`, `char`, `bool`, etc.  
```cpp
int a = 10; // Integer
char b = 'A'; // Character
float c = 3.14; // Float
```

#### **2.2. Non-Primitive Data Types**
Created using primitive data types.  
Examples: Arrays, Classes, Pointers, Strings, etc.  
```cpp
int arr[] = {1, 2, 3}; // Array
string name = "Hello"; // String
```

#### **2.3. Fixed and User-Defined Data Types**
- **Fixed Data Types**: Defined by the language (`int`, `float`).  
- **User-Defined Data Types**: Defined by programmers (structures, classes, enumerations).  
```cpp
struct Student {
    int id;
    string name;
};
```

---

### **3. Types of Data Structures**
#### **3.1. Linear Data Structures**
Elements are arranged in a sequence.  
Examples: Arrays, Linked Lists, Stacks, Queues.  
```cpp
int arr[] = {1, 2, 3}; // Array is linear
```

#### **3.2. Non-Linear Data Structures**
Elements are arranged hierarchically.  
Examples: Trees, Graphs.  
```cpp
// Example of Tree
struct Node {
    int data;
    Node* left;
    Node* right;
};
```

#### **3.3. Homogeneous vs. Heterogeneous**
- **Homogeneous**: Same data type (e.g., array).  
- **Heterogeneous**: Different data types (e.g., structure).

---

### **4. Sorting Techniques**
Sorting arranges data in a specific order (ascending or descending).

#### **4.1. Bubble Sort**
Repeatedly compare and swap adjacent elements.  
Time Complexity: \(O(n^2)\)  
Space Complexity: \(O(1)\)  
```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
```

#### **4.2. Insertion Sort**
Builds the sorted list one element at a time.  
Time Complexity: \(O(n^2)\)  
Space Complexity: \(O(1)\)  
```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
```

#### **4.3. Selection Sort**
Find the smallest element and place it in the correct position.  
Time Complexity: \(O(n^2)\)  
Space Complexity: \(O(1)\)  
```cpp
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
```

#### **4.4. Quick Sort**
Divide and conquer by partitioning the array.  
Time Complexity:  
- Best: \(O(n \log n)\)  
- Worst: \(O(n^2)\)  
Space Complexity: \(O(\log n)\)  
```cpp
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

#### **4.5. Merge Sort**
Divide and conquer by splitting and merging arrays.  
Time Complexity: \(O(n \log n)\)  
Space Complexity: \(O(n)\)  
```cpp
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
```

---

### **5. Time Complexity**
Measures the time an algorithm takes based on input size \(n\).  
- **Best Case**: Minimum time.  
- **Worst Case**: Maximum time.  
- **Average Case**: Average time over all inputs.

---

### **6. Space Complexity**
Measures how much memory the algorithm uses.  
- Example: Recursive algorithms use extra stack space.

---

### **7. Asymptotic Notations**
- **Big-O (\(O\))**: Upper bound (worst case).  
- **Theta (\(Θ\))**: Tight bound (average case).  
- **Omega (\(Ω\))**: Lower bound (best case).

---

### **8. Other Concepts**
- **Stable Sorting**: Preserves the relative order of equal elements.  
- **In-Place Sorting**: Uses constant extra space.

---

### **9. INT_MIN and Driver Code**
`INT_MIN` is the smallest integer value in C++.  
Example Use:  
```cpp
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int maxVal = INT_MIN; // Initialize to smallest possible value
    int arr[] = {1, -5, 3, 6};
    for (int i = 0; i < 4; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Maximum Value: " << maxVal << endl;
    return 0;
}
```

**Output**:  
`Maximum Value: 6`

---

This should give you clear and simple notes to get started with DSA in C++!