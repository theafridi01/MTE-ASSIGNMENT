#include <iostream>
#include <climits>
using namespace std;

int maxSumSubarray(int arr[], int n, int K) {
    if (n < K) {
        cout << "Invalid Input: K cannot be greater than array size." << endl;
        return -1;
    }

    // Step 1: Calculate sum of the first window of size K
    int windowSum = 0;
    for (int i = 0; i < K; i++) {
        windowSum += arr[i];
    }

    // Initialize maxSum with the sum of the first window
    int maxSum = windowSum;

    // Step 2: Slide the window and calculate sum of remaining windows
    for (int i = K; i < n; i++) {
        // Slide the window: remove the element going out and add the new element
        windowSum += arr[i] - arr[i - K];

        // Update maxSum if we find a new max
        maxSum = max(maxSum, windowSum);
    }

    return maxSum;
}

int main() {
    int arr[] = {2, 1, 5, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int K = 3;

    int result = maxSumSubarray(arr, n, K);
    cout << "Maximum sum of subarray of size " << K << " is: " << result << endl;

    return 0;
}
