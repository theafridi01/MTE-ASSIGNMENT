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

// Function to get sum in range [L, R]
int getRangeSum(const vector<int>& prefixSum, int L, int R) {
    if (L == 0) return prefixSum[R];
    return prefixSum[R] - prefixSum[L - 1];
}

int main() {
    vector<int> arr = {3, 5, 2, 8, 6};
    vector<int> prefixSum = buildPrefixSum(arr);

    int L = 1, R = 3;
    cout << "Sum from index " << L << " to " << R << " is: "
         << getRangeSum(prefixSum, L, R) << endl;

    L = 0, R = 4;
    cout << "Sum from index " << L << " to " << R << " is: "
         << getRangeSum(prefixSum, L, R) << endl;

    return 0;
}




_ **Time & Space Complexity**:
    Time Complexity ->  O(n) & 	O(1) (Query sum [L, R])
    Space Complexity -> O(n)

