#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
     
        int n=nums.size();
        vector<int> ans(2*n);
        for (int i=0;i<ans.size();i++){
           ans[i] = nums[i % n]; 
    }
    return ans;
}
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution ab;
    vector<int> result = ab.getConcatenation(nums);

    // print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}