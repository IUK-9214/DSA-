#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
       unordered_map<int, int> freq;  // store frequency of numbers
        int c = 0;

        for (int num : nums) {
            c += freq[num];   // each previous occurrence forms a pair
            freq[num]++;      // update frequency
        }

        return c;
    }
};


int main(){

   vector<int> nums = {1,2,3,1,1,3};
    Solution ab;
    int result = ab.numIdenticalPairs(nums);

    // print the result
    
    cout<<endl<<result<< endl;
    return 0;
}