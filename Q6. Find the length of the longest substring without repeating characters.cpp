#include <iostream>
#include <cstring>
using namespace std;

// check if all characters in the string are unique
bool allUnique(char s[], int start, int end) {
    bool charSet[256] = {false}; 
    
    for (int i = start; i < end; ++i) {
        if (charSet[s[i]] == true) {
            return false; 
        }
        charSet[s[i]] = true;
    }
    return true;
}

// find the length of thelongest substring without repeating characters
int lengthOfLongestSubstring(char s[]) {
    int n = strlen(s); 
    int maxLength = 0;

    // Generate all substrings
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            if (allUnique(s, i, j)) {
                maxLength = max(maxLength, j - i);    // Update max length
            }
        }
    }

    return maxLength;
}

int main() {
    char s[] = "abcabcbb"; 
    cout << "Length of the longest substring without repeating characters: " 
         << lengthOfLongestSubstring(s) << endl;
    return 0;
}



-**Time and Space Complexity:**
   Time Complexity ->  O(n^3)
   Space Complexity -> O(n)