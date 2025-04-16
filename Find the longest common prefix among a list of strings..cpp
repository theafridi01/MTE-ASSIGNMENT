#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";

    // Iterate through each character of the first string
    for (int i = 0; i < strs[0].length(); i++) {
        char currentChar = strs[0][i];

        // Compare with the same character in the rest of the strings
        for (int j = 1; j < strs.size(); j++) {
            // Check if index is out of bounds or characters mismatch
            if (i >= strs[j].length() || strs[j][i] != currentChar) {
                return strs[0].substr(0, i); // Return prefix up to this point
            }
        }
    }

    // All characters matched for the entire first string
    return strs[0];
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    string lcp = longestCommonPrefix(strs);
    cout << "Longest Common Prefix: " << lcp << endl;
    return 0;
}
