#include <iostream>
using namespace std;

bool canBeSplit(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; ++i)
        totalSum += arr[i];

    int leftSum = 0;
    for (int i = 0; i < n - 1; ++i) { 
        leftSum += arr[i];
        int rightSum = totalSum - leftSum;
        if (leftSum == rightSum) {
            return true; // split point found
        }
    }

    return false; // No split point found
}

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (canBeSplit(arr, n))
        cout << "Array can be split into two parts with equal sum." << endl;
    else
        cout << "Array cannot be split into two equal sum parts." << endl;

    return 0;
}


- **Time and Space Complexity**:
    Time Complexity ->  O(n)
    Space Complexity -> O(1) 

    
