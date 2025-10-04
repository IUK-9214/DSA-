// Given two strings s and t, determine if they are isomorphic.

// Two strings s and t are isomorphic if the characters in s can be replaced to get t.

// All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

// Example 1:
// Input: s = "egg", t = "add"

// Output: true

// Explanation:

// The strings s and t can be made identical by:

// Mapping 'e' to 'a'.
// Mapping 'g' to 'd'.
// Example 2:

// Input: s = "foo", t = "bar"

// Output: false

// Explanation:

// The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.

// Example 3:

// Input: s = "paper", t = "title"

// Output: true






//my approch 

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         if (s.size()!=t.size()) return false;
//     string finalStr = "";
//     string finalStri = "";
//     unordered_set<char> seen;
//     unordered_set<char>seened;

//     for (char c : s) {
//         if (seen.find(c) == seen.end()) {
//             finalStr += c;
//             seen.insert(c);
//         }
//     }
//     for (char c : t) {
//         if (seened.find(c) == seened.end()) {
//             finalStri += c;
//             seened.insert(c);
//         }
//     }
//     return finalStr.size()==finalStri.size() ;
    
//     }
// };
//upto some extent my approach was good but some approch get false


// chat gpt approch 

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, char> mapST;  // s -> t
        unordered_map<char, char> mapTS;  // t -> s

        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            // If already mapped, check consistency
            if (mapST.count(a) && mapST[a] != b) return false;
            if (mapTS.count(b) && mapTS[b] != a) return false;

            // Otherwise, record new mapping
            mapST[a] = b;
            mapTS[b] = a;
        }

        return true;
    }
};
