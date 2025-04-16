#include <iostream>
#include <climits>
using namespace std;

int maxSumSubarray(int arr[], int n, int k) {
    if (n < k) {
        cout << "Invalid input: k is greater than array size." << endl;
        return -1;
    }

    // Calculate sum of first window
    int windowSum = 0;
    for (int i = 0; i < k; ++i) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; ++i) {
        windowSum = windowSum - arr[i - k] + arr[i];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int result = maxSumSubarray(arr, n, k);
    cout << "Maximum sum of subarray of size " << k << " is: " << result << endl;

    return 0;
}



-**Time & Space Complexity:**
   Time Complexity ->  O(n), O(n*k) where k is __bool_constant 
   Space Complexity -> O(1)
