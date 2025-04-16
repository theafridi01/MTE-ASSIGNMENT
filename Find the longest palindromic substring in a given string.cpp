#include <iostream>
#include <string>
using namespace std;

// Function to expand around center and find the longest palindrome
string expandAroundCenter(string s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    // Return the palindrome string
    return s.substr(left + 1, right - left - 1);
}

string longestPalindrome(string s) {
    if (s.length() < 1) return "";  // Edge case for empty string

    string longest = "";

    // Try every possible center (each character and each pair of adjacent characters)
    for (int i = 0; i < s.length(); i++) {
        // Odd length palindrome (center is at s[i])
        string oddPalindrome = expandAroundCenter(s, i, i);
        if (oddPalindrome.length() > longest.length()) {
            longest = oddPalindrome;
        }

        // Even length palindrome (center is between s[i] and s[i+1])
        string evenPalindrome = expandAroundCenter(s, i, i + 1);
        if (evenPalindrome.length() > longest.length()) {
            longest = evenPalindrome;
        }
    }

    return longest;
}

int main() {
    string s = "babad";
    cout << "Longest palindromic substring: " << longestPalindrome(s) << endl;
    return 0;
}
