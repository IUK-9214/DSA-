// Given an integer array nums sorted in non-decreasing order, 
// return an array of the squares of each number sorted in non-decreasing
//  order.
// problem no 997 on leetcode

#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for (int &x : nums) {
    x = x * x;   
}
sort(nums.begin(), nums.end());  
    return nums;
    }
};

int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution ab;
    vector<int> result = ab.sortedSquares(nums);

    // print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}