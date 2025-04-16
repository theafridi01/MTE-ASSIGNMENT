#include <iostream>
#include <vector>
using namespace std;

// Function to build prefix sum array
vector<int> buildPrefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];

    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum;
}

// Function to get sum from L to R using prefix sum
int rangeSum(const vector<int>& prefixSum, int L, int R) {
    if (L == 0) return prefixSum[R];
    return prefixSum[R] - prefixSum[L - 1];
}

int main() {
    // Example input array
    vector<int> arr = {2, 4, 1, 7, 9, 3};

    // Build the prefix sum array
    vector<int> prefixSum = buildPrefixSum(arr);

    int L, R;
    cout << "Enter range (L and R): ";
    cin >> L >> R;

    if (L < 0 || R >= arr.size() || L > R) {
        cout << "Invalid range!" << endl;
    } else {
        int sum = rangeSum(prefixSum, L, R);
        cout << "Sum from index " << L << " to " << R << " is: " << sum << endl;
    }

    return 0;
}
