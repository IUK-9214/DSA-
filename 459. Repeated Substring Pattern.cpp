
// Solved
// Easy
// Topics
// premium lock icon
// Companies
// Given a string s, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

// Example 1:

// Input: s = "abab"
// Output: true
// Explanation: It is the substring "ab" twice.
// Example 2:

// Input: s = "aba"
// Output: false
// Example 3:

// Input: s = "abcabcabcabc"
// Output: true
// Explanation: It is the substring "abc" four times or the substring "abcabc" twice.



#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        string cut = doubled.substr(1, doubled.size() - 2); 
        return cut.find(s) != string::npos;
    }
};

int main() {
    Solution sol;

    cout << boolalpha;
    cout << sol.repeatedSubstringPattern("abab") << endl; // true
    cout << sol.repeatedSubstringPattern("aba") << endl;  // false
    cout << sol.repeatedSubstringPattern("abcabcabc") << endl; // true
    cout << sol.repeatedSubstringPattern("a") << endl;    // false

    return 0;
}
