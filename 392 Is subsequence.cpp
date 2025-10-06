// Given two strings s and t, return true if s is a subsequence of t, or false otherwise.

// A subsequence of a string i
// s a new string that is formed from the original string b
// y deleting some (can be none) of the characters
//  without disturbing the relative positions of the
//   remaining characters. (i.e., "ace" is a subsequence
//      of "abcde" while "aec" is not).






#include<iostream>
#include<vector>

using namespace std;




class Solution {
public:
    bool isSubsequence(string s, string t) {
  int n=s.size();
  int m=t.size();
  int j=0;
  for (int i=0;i<m&&j<n;i++){
    if (s[j]==t[i]) j++;
   
  }
return (j == n);
};
int main (){




    return 0;
}