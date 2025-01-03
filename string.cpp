// string length 
#include <iostream>
using namespace std;
int main() { 
    string str = "welcome ";
    cout << str.length();  // Output: 7 
}

// Pallindrome check without using function 
#include <iostream>
using namespace std;
int main() {
    string str = "madam";  // The string to check
    for (int i = 0; i < 5 / 2; ++i) {  // Loop runs for half of the string
        if (str[i] != str[5 - i - 1]) {  // Compare characters from start and end
            cout << "Not a palindrome";  
            return 0;  // Exit the program
        }
    }
    cout << "Palindrome";
    return 0;  // End of program
}

// Function to reverse a string
#include <iostream>
using namespace std;
void rev(string str) {
    int length = str.length();  // Find the length of the string
    // Loop to swap characters from start to end
    for (int i = 0; i < length / 2; ++i) {
        char temp = str[i];  // Store the current character in a temporary variable
        str[i] = str[length - i - 1];  // Swap the current character with the corresponding character from the end
        str[length - i - 1] = temp;  // Complete the swap
    }
    // Print the reversed string
    for (int i = 0; i < length; ++i) {
        cout << str[i];
    }
}

int main() {
    string str = "welcome";  // Define a sample string to reverse
    rev(str);  // Call the reverse function
    return 0;
}

// Pallindrome check with function dynamically
#include <iostream>
using namespace std;
int pallindrome(string str) {
    int start = 0;  // Start at the first character of the string
    int end = str.length() - 1;  // End at the last character (index = str.length() - 1)
    // Loop until start index is less than end index
    while (start < end) {
        if (str[start] != str[end]) {  // If characters at start and end do not match
            cout << "Not a palindrome";  // Print that it's not a palindrome
            return 0;  // Return 0 to stop further checking
        }
        start++;  // Move the start index towards the middle
        end--;  // Move the end index towards the middle
    }
    cout << "Palindrome";  // If loop completes without finding a mismatch, it's a palindrome
    return 0;  // Return 0 as a success indicator
}
int main() {
    string str = "welclew";  // Example string to check
    pallindrome(str);  // Call the palindrome function to check if the string is a palindrome
    return 0;  // End of main function
}

// Pallindrome check with function dynamically by for loop
#include <iostream>
using namespace std;
// Function to check if a string is a palindrome via for loop
int palindrome(string str) {
    int start = 0;  // Start index
    int end = str.length() - 1;  // End index
    // For loop to compare characters from start to end
    for (; start < end;) {  // No initialization inside the loop
        if (str[start] != str[end]) {  // If characters don't match
            cout << "Not a palindrome";  // Print not a palindrome
            return 0;  // Exit the function
        }
            start++;
            end--;
    }
    cout << "Palindrome";  // If all characters match, print palindrome
    return 0;  // Return 0 to indicate success
}

int main() {
    string str = "welclew";  // Example string to check
    palindrome(str);  // Call the palindrome function
    return 0;  // End of main function
}