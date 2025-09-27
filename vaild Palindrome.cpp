#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
if(s=="") return true ;
       string t="";
for (char c: s){
    if (isalnum(c)){
        t+=tolower(c);
    }
}
s=t;
reverse(s.begin(),s.end());
return s==t; 
    }
};


int main() {
    Solution sol;
    string s3 ="0P";
cout<<endl;

    cout << boolalpha; // print true/false instead of 1/0
    cout << sol.isPalindrome(s3) << endl; // false

    return 0;
}