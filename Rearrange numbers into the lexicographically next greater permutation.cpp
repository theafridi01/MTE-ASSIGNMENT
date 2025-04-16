#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n - 2;

    // Step 1: Find first decreasing element from the right
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Step 2: Find the number just greater than nums[i]
        int j = n - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        // Step 3: Swap nums[i] and nums[j]
        swap(nums[i], nums[j]);
    }

    // Step 4: Reverse the subarray from i+1 to end
    reverse(nums.begin() + i + 1, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3};

    cout << "Original permutation: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    nextPermutation(nums);

    cout << "Next permutation: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
