#include <iostream>
using namespace std;

int main() {
    string s = "madam";   // input string

    int start = 0;                    // beginning index
    int end = s.length() - 1;         // last index

    bool isPalindrome = true;         // assume it is palindrome

    while(start < end) {

        // compare characters from both ends
        if(s[start] != s[end]) {
            isPalindrome = false;     // not palindrome
            break;                   // stop checking
        }

        start++;   // move forward
        end--;     // move backward
    }

    // final result
    if(isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
