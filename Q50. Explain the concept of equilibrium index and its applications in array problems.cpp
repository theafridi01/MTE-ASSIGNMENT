- **Equilibrium Index in Arrays:**
-The sum of elements to the left of the index is equal to the sum of elements
 to the right of the index.

 sum(arr[0] + arr[1] + ... + arr[i-1]) == sum(arr[i+1] + arr[i+2] + ... + arr[n-1])

 Algorithm:
 
 1.Compute the total sum of the array.
 2.Initialize leftSum = 0.
 3.Traverse the array:
   -For each index i, compute right sum as totalSum - leftSum - arr[i].
   -If leftSum == rightSum, then i is the equilibrium index.
   -Add arr[i] to leftSum.

For example:

In array {1, 2, 3, 4, 3, 2, 1},
the equilibrium index is 3 because the sum of elements at left indexes (i.e., 1, 2) 
is equal to the sum of elements at right indexes (i.e., 4, 3, 2, 1).

If there are multiple equilibrium indexes, we choos the smallest one. 

If no equilibrium index exists, we return -1.

- **Example 1:**
Input: arr = [1, 2, 3, 4, 3, 2, 1]
Output: 3

- **Example 2:**
Input: arr = [1, 2, 3]
Output: -1

- **Time and Space Complexity:**
    Time Complexity ->  O(n)
    Space Complexity -> O(1)





