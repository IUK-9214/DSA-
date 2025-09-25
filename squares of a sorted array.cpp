// Given an integer array nums sorted in non-decreasing order, 
// return an array of the squares of each number sorted in non-decreasing
//  order.
// problem no 997 on leetcode

#include <iostream>
#include <vector>
using namespace std;




int main() {
    vector<int> nums = {1, 2, 3, 4};
    Solution ab;
    vector<int> result = ab.runningSum(nums);

    // print the result
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}