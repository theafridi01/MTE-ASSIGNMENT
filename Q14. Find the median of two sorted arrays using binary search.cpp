#include <iostream>
using namespace std;

// find the median of two sorted arrays
double findMedianSortedArrays(int nums1[], int nums2[], int n1, int n2) {

    int totalSize = n1 + n2;

    int merged[totalSize];
    int i = 0, j = 0, k = 0;

    // Merge the two sorted arrays into merged[]
    while (i < n1 && j < n2) {
        if (nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

   
    while (i < n1) {
        merged[k++] = nums1[i++];
    }

   
    while (j < n2) {
        merged[k++] = nums2[j++];
    }

    // Find the median
    if (totalSize % 2 == 0) {

        // Even number of elements: median is the average of two middle elements
        return (merged[totalSize / 2 - 1] + merged[totalSize / 2]) / 2.0;
    } 
    else {
        
        // Odd number of elements: median is the middle element
        return merged[totalSize / 2];
    }
}

int main() {
   
    int nums1[] = {1, 3};
    int nums2[] = {2};

    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);

    double median = findMedianSortedArrays(nums1, nums2, n1, n2);

    cout << "Median: " << median << endl;

    return 0;
}




- **Time and Space Complexity:**
    Time Complexity ->  O(n1 + n2)
    Space Complexity -> O(n1 + n2)