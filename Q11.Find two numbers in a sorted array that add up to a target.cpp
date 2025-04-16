#include <iostream>
using namespace std;

// find two numbers that add up to the target sum
void findTwoSum(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << "The two numbers are: " << arr[left] << " and " << arr[right] << endl;
            return;
        } 
        else if (sum < target) {
            left++;  
        } 
        else {
            right--;  
        }
    }

    cout << "No pair found that adds up to the target." << endl;
}

int main() {
    int arr[] = {1, 2, 4, 6, 10, 15};  
    int n = sizeof(arr) / sizeof(arr[0]);  
    int target = 16;  

    findTwoSum(arr, n, target);

    return 0;
}



- **Time and Space Complexity:**
    Time Complexity ->  O(n)
    Space Complexity -> O(1)

