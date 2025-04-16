#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findTwoSum(const vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {-1, -1}; // Pair not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 6, 8, 11};
    int target = 10;

    pair<int, int> result = findTwoSum(arr, target);

    if (result.first != -1)
        cout << "Pair found: " << result.first << " + " << result.second << " = " << target << endl;
    else
        cout << "No pair found that adds up to " << target << endl;

    return 0;
}
