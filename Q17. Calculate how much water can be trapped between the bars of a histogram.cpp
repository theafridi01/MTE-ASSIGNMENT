#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> leftMax(n), rightMax(n);

    // Compute leftMax prefix array
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++) 
        leftMax[i] = max(leftMax[i - 1], height[i]);

    // Compute rightMax prefix array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) 
        rightMax[i] = max(rightMax[i + 1], height[i]);

    // Calculate trapped water
    int totalWater = 0;
    for (int i = 0; i < n; i++) 
        totalWater += min(leftMax[i], rightMax[i]) - height[i];

    return totalWater;
}

int main() {
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Trapped Rain Water: " << trap(height) << endl;
    return 0;
}



- ** Time and Space Complexity:**
     Time Complexity ->  O(n) 
     Space Complexity -> O(1) 

     