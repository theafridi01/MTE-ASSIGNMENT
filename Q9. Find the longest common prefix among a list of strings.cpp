#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(const vector<string>& strs) {
    if (strs.empty()) 
    return ""; 
    
    // Iterate through each character index
    for (int i = 0; i < strs[0].size(); i++) {
    
        for (int j = 1; j < strs.size(); j++) {
           
            if (i == strs[j].size() || strs[j][i] != strs[0][i]) {
                return strs[0].substr(0, i);           // Return the substring up to index i-1
            }
        }
    }
    
    return strs[0]; // If no mismatch is found, return the entire first string
}

int main() {
    vector<string> strs = {"flower", "flow", "flight"};
    cout << "Longest Common Prefix: " << longestCommonPrefix(strs) << endl;
    return 0;
}




- **Time Complexity and Space Complexity:**
    Time Complexity ->  O(n)
    Space Complexity -> O(1)
