#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++) {

        // either extend previous subarray or start new
        currentSum = max(arr[i], currentSum + arr[i]);

        // update maximum
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    cout << "Maximum Subarray Sum: " << maxSum << endl;

    return 0;
}
