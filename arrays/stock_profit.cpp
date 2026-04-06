#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int prices[100];

    cout << "Enter prices: ";
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < n; i++) {

        // calculate profit if sold today
        int profit = prices[i] - minPrice;

        if (profit > maxProfit) {
            maxProfit = profit;
        }

        // update minimum buying price
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
    }

    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
