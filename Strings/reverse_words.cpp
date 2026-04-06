#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

string reverseWords(string s) {

    stringstream ss(s);
    string word;
    vector<string> words;

    // extract words one by one
    while (ss >> word) {
        words.push_back(word);
    }

    // reverse the vector
    reverse(words.begin(), words.end());

    // build final string
    string result = "";
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) {
            result += " ";
        }
    }

    return result;
}

int main() {

    string s;
    cout << "Enter sentence: ";
    getline(cin, s);

    cout << reverseWords(s) << endl;

    return 0;
}
