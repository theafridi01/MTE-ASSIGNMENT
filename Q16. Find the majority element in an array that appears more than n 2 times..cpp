#include <iostream>
using namespace std;

// find the majority element
int findMajorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    // candidate for majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } 
        else if (arr[i] == candidate) {
            count++;
        } 
        else {
            count--;
        }
    }

    // Verify the candidate
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    if (count > n / 2) {
        return candidate;
    }
    return -1;  // No majority element
}

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findMajorityElement(arr, n);
    if (result != -1) {
        cout << "The majority element is: " << result << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0;
}




- **Time and Space Complexity:**
    Time Complexity ->  O(n)
    Space Complexity -> O(1)