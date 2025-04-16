#include <iostream>
#include <vector>
#include <string>
using namespace std;

// swap two characters in the string
void swap(string& str, int i, int j) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
}

// generate all permutations of a given string
void generatePermutations(string& str, int left, int right, vector<string>& result) {
    if (left == right) {
        result.push_back(str); 
        return;
    }
    
    for (int i = left; i <= right; i++) {
        swap(str, left, i); 
        generatePermutations(str, left + 1, right, result); 
        swap(str, left, i); 
    }
}

int main() {
    string str = "ABC";  
    vector<string> result;  

    generatePermutations(str, 0, str.length() - 1, result);

    cout << "Permutations of the string \"" << str << "\":\n";
    for (const string& perm : result) {
        cout << perm << endl;
    }

    return 0;
}



- **Time & Space Complexity:**
    Time Complexity ->  O(n!)
    Space Complexity -> O(n!)