 // You're given strings jewels representing the 
 // types of stones that are jewels,
// and stones representing the stones you have.
 // Each character in stones is a type of stone you have.
// You want to know how many of the stones you have
 //  are also jewels.

 // Letters are case sensitive, so "a" is considered a
 //  different type of stone from "A".
// Example 1:

// Input: jewels = "aA", stones = "aAAbbbb"
// Output: 3
// Example 2:

// Input: jewels = "z", stones = "ZZ"
// Output: 0

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(),jewels.end());
        int count=0;
        for(char stone:stones){
            if(jewelSet.count(stone)){
                count++;
            }
        }
        return count;
    }
};


int main() {
    Solution sol;
    
    string jewels = "aA";
    string stones = "aAAbbbb";
    
    cout << "Number of jewels in stones: " 
         << sol.numJewelsInStones(jewels, stones) << endl;

    return 0;
}