#include <iostream>
using namespace std;

bool canBeSplit(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Step 1: Calculate total sum
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Step 2: Traverse and check for split point
    for (int i = 0; i < n; i++) {
        totalSum -= arr[i];  // This becomes right sum

        if (leftSum == totalSum) {
            return true; // Found a valid split point
        }

        leftSum += arr[i];  // Add to left sum for next iteration
    }

    return false; // No split point found
}

int main() {
    int arr[] = {1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canBeSplit(arr, n)) {
        cout << "Array can be split into two parts with equal sum." << endl;
    } else {
        cout << "Array cannot be split into two parts with equal sum." << endl;
    }

    return 0;
}
