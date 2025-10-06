// Given two strings s and t, 
// return true if t is an anagram of s,
//  and false otherwise.
// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true
// Example 2:
// Input: s = "rat", t = "car"
// Output: false

#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
       
        if (s.size()!=t.size()) return false ;
        
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
     return s==t; 
    }
};


// class Solution {
// public:
//     bool isAnagram(string s, string t) {
//         if (s.length() != t.length()) {
//             return false;
//         }

//         unordered_map<char, int> counter;

//         for (char ch : s) {
//             counter[ch] = counter[ch] + 1;
//         }

//         for (char ch : t) {
//             if (counter.find(ch) == counter.end() || counter[ch] == 0) {
//                 return false;
//             }
//             counter[ch] = counter[ch] - 1;
//         }

//         return true;        
//     }
// };