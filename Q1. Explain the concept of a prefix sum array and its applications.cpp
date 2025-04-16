- ** Prefix Sum Array – Concept & Applications**

- **Prefix Sum Array**: A prefix sum array is a derived array where each element at index i contains the sum of all elements from the start of the original array up to index i.

- **Example**: Given the array [1, 2, 3, 4, 5]
The prefix sum array would be [1, 3, 6, 10, 15]
arr = [a₀, a₁, a₂, ..., aₙ₋₁]

Then the prefix sum array prefix is:
prefix[0] = arr[0]
prefix[1] = arr[0] + arr[1]
prefix[2] = arr[0] + arr[1] + arr[2]
...
prefix[i] = prefix[i-1] + arr[i]

So, The prefix sum array  [1, 3, 6, 10, 15]

- **Applications**: Prefix sum arrays are used in various algorithms and data structures, such as range sum.
- **Applications of Prefix Sum Arrays** :

 A.Range Sum Queries:
  Given multiple queries asking for sum of elements between two indices.
  Naive approach is O(n) per query, prefix sum reduces it to O(1).

B.Finding Subarrays with Given Sum:
  Used in problems involving subarrays that need to sum to a certain value.

C.2D Prefix Sums (Prefix Sum Matrix):
  Used in image processing or matrix sum queries.
  Allows querying submatrices efficiently.

D.Binary Search on Prefix Sums:
  Useful in finding the smallest prefix with sum ≥ X.

E.Difference Arrays (Inverse of Prefix Sum):
  Helpful in range update problems, where changes need to be applied in ranges efficiently.

-**CODE**

vector<int> computePrefixSum(const vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; ++i) {
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
}

- **Time and Space Complexity of Prefix Sum Array**:
  Time Complexity ->  O(n)
  Space Complexity -> O(n)
