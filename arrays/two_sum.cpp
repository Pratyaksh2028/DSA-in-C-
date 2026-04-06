#include <iostream>
#include <unordered_set>
using namespace std;

bool twoSumExists(int arr[], int n, int target) {

    unordered_set<int> st;

    for (int i = 0; i < n; i++) {

        int need = target - arr[i];

        // if needed value already exists
        if (st.find(need) != st.end()) {
            return true;
        }

        // store current element
        st.insert(arr[i]);
    }

    return false;
}

int main() {

    int n, target;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter target: ";
    cin >> target;

    if (twoSumExists(arr, n, target)) {
        cout << "Pair exists" << endl;
    } else {
        cout << "No pair found" << endl;
    }

    return 0;
}
