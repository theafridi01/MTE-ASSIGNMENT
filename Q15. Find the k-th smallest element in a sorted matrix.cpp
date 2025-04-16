#include <iostream>
#include <algorithm> 
using namespace std;

// find the k-th smallest element in the matrix 
int kthSmallestNaive(int matrix[][3], int n, int k) {
    int size = n * n; 
    int arr[size];
    
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            arr[index++] = matrix[i][j];
        }
    }

    sort(arr, arr + size);

    return arr[k - 1];
}

int main() {

    int matrix[3][3] = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };

    int k = 8; 
    int result = kthSmallestNaive(matrix, 3, k);
    cout << "The " << k << "-th smallest element is: " << result << endl;

    return 0;
}




- **Time and Space Complexity:**
    Time complexity ->  O(n^2 logn) 
    Space complexity -> O(n^2)