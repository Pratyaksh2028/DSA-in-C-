#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false; // not palindrome
        }
        left++;
        right--;
    }
    return true; // palindrome
}

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    if (isPalindrome(s)) {
        cout << "It is a Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }

    return 0;
}
