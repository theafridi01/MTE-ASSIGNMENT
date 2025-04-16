#include <iostream>
#include <algorithm>  
using namespace std;

// find the next lexicographical permutation
void nextPermutation(int arr[], int n) {
    
    int i = n - 2;
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        
        swap(arr[i], arr[j]);
    }
 
    reverse(arr + i + 1, arr + n);
}

int main() {
    int arr[] = {1, 2, 3}; 
    int n = sizeof(arr) / sizeof(arr[0]);  

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    nextPermutation(arr, n);

    cout << "Next permutation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



- **Time and Space Complexity:**
    Time Complexity ->  O(n)
    Space Complexity -> O(1)