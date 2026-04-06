#include <iostream>
using namespace std;

int main() {
    string s = "madam";

    int start = 0;
    int end = s.length() - 1;

    bool isPalindrome = true;

    while(start < end) {

        // compare both ends
        if(s[start] != s[end]) {
            isPalindrome = false;
            break;
        }

        start++;
        end--;
    }

    if(isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}
