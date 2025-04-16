#include <iostream>
#include <string>
using namespace std;

// expand around the center and return the longest palindrome length
string expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return s.substr(left + 1, right - left - 1);
}

// find the longest palindromic substring
string longestPalindrome(string s) {
    if (s.length() < 1) return "";

    string longest = "";
    for (int i = 0; i < s.length(); i++) {
        // Check for odd-length palindromes centered at i
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

        // Check for even-length palindromes centered between i and i+1
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
    string s = "babad";
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}



- **Time and Space Complexity:**
    Time Complexity ->  O(n^2)
    Space Complexity -> O(1)
