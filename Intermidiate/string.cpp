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
        cout << str[i];         // emoclew
    }
}

int main() {
    string str = "welcome";  // Define a sample string to reverse
    rev(str);  // Call the reverse function
    return 0;
}

// anagram check
#include <iostream>
using namespace std;
int main() {
    string str1 = "anagram";  // First string to check
    string str2 = "aaanmrg";  // Second string to check

    bool found;  // Flag to check if a matching character is found
    int length = str1.length();  // Get the length of the first string
    
    if(str1.length() != str2.length()) {  // If the lengths are not equal, they cannot be anagrams
        cout << "not anagram";  // Print "not anagram" and stop
        return 0;  // Exit the program
    }
    
    // Loop through each character in str1
    for(int i = 0; i < length; ++i) {
        found = false;  // Reset the flag for each new character
        
        // Check if the character from str1 exists in str2
        for(int j = 0; j < length; ++j) {
            if(str1[i] == str2[j]) {  // If the characters match
                str2[j] = -1;  // Set that character in str2 to a non-valid character (mark as used)
                found = true;  // Mark that we found a match
                break;  // Exit inner loop since we found the character
            }
        }
        
        // If no match is found for the character in str1, it's not an anagram
        if(!found) {
            cout << "not anagram";  // Print "not anagram" and stop
            return 0;  // Exit the program
        }
    }
    
    // If we looped through all characters and found matches, it's an anagram
    cout << "anagram";  // Print "anagram"
}

// valid parenthesis check
#include <iostream>
using namespace std;

int main() {
    string str = "[{()}]";  // Input string with parentheses
    int par = 0;  // Counter for curly braces `{ }`
    int cur = 0;  // Counter for round braces `( )`
    int squ = 0;  // Counter for square brackets `[ ]`
    
    // Loop through each character in the string
    for(int i = 0; i < str.length(); ++i) {
        // Count the opening brackets and braces
        if(str[i] == '{') {
            par++;  // Increase counter for `{`
        } else if(str[i] == '(') {
            cur++;  // Increase counter for `(`
        } else if(str[i] == '[') {
            squ++;  // Increase counter for `[`
        }
        
        // Count the closing brackets and braces
        else if(str[i] == '}') {
            par--;  // Decrease counter for `}`
        } else if(str[i] == ')') {
            cur--;  // Decrease counter for `)`
        } else if(str[i] == ']') {
            squ--;  // Decrease counter for `]`
        }
        
        // If any counter becomes negative, it means we have unmatched closing brackets
        if(par < 0 || squ < 0 || cur < 0) {
            cout << "not valid";  // Print "not valid" if any counter is negative
            return 0;  // Exit the program
        }
    }
    
    // After the loop, check if all counters are back to zero
    if(par == 0 && cur == 0 && squ == 0) {
        cout << "valid";  // Print "valid" if all parentheses are correctly matched
    } else {
        cout << "Not valid";  // Print "Not valid" if any counter is non-zero
    }
}

