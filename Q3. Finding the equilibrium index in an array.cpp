#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; ++i) {
        totalSum += arr[i];
    }

    int leftSum = 0;
    for (int i = 0; i < n; ++i) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            return i; // equilibrium index found
        }
        leftSum += arr[i];
    }

    return -1; // No equilibrium index found
}

int main() {
    int arr[] = { -7, 1, 5, 2, -4, 3, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = findEquilibriumIndex(arr, n);

    if (index != -1)
        cout << "Equilibrium index is: " << index << endl;
    else
        cout << "No equilibrium index found." << endl;

    return 0;
}


- **Time and Space Complexity**:
Time Complexity ->  O(n)
Space Complexity -> O(1)