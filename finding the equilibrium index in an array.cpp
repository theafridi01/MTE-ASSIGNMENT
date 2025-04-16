#include <iostream>
using namespace std;

int findEquilibriumIndex(int arr[], int n) {
    int totalSum = 0, leftSum = 0;

    // Step 1: Calculate total sum of the array
    for (int i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    // Step 2: Traverse array and find equilibrium index
    for (int i = 0; i < n; i++) {
        // totalSum - leftSum - arr[i] is right sum
        int rightSum = totalSum - leftSum - arr[i];

        if (leftSum == rightSum) {
            return i; // Found equilibrium index
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
        cout << "Equilibrium Index: " << index << endl;
    else
        cout << "No Equilibrium Index found." << endl;

    return 0;
}
