#include <iostream>
#include <algorithm>
using namespace std;

bool isAnagram(string a, string b) {

    if (a.length() != b.length()) {
        return false;
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}

int main() {
    string a, b;

    cout << "Enter first string: ";
    cin >> a;

    cout << "Enter second string: ";
    cin >> b;

    if (isAnagram(a, b)) {
        cout << "Strings are Anagrams" << endl;
    } else {
        cout << "Not Anagrams" << endl;
    }

    return 0;
}
