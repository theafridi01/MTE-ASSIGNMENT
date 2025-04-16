#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int longestSubstringWithoutRepeating(string s) {
    unordered_set<char> windowSet;  // To store characters in the current window
    int left = 0;                    // Left pointer of the window
    int maxLength = 0;               // Maximum length of substring without repeating characters

    // Iterate through the string
    for (int right = 0; right < s.length(); right++) {
        // Shrink the window from left if we find a duplicate
        while (windowSet.find(s[right]) != windowSet.end()) {
            windowSet.erase(s[left]);
            left++;
        }

        // Add the current character to the set
        windowSet.insert(s[right]);

        // Update the maximum length of substring
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "abcabcbb";
    cout << "Length of the longest substring without repeating characters: " 
         << longestSubstringWithoutRepeating(s) << endl;
    return 0;
}
