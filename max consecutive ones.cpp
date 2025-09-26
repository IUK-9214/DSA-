
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1:

// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3.
// Example 2:

// Input: nums = [1,0,1,1,0,1]
// Output: 2

#include <iostream>
#include <vector>
#include <algorithm> // for std::max
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0, count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }
        return maxCount;
    }
};

int main() {
    Solution sol;

    // Example test case
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int result = sol.findMaxConsecutiveOnes(nums);

    cout << "The maximum number of consecutive 1s is: " << result << endl;

    return 0;
}
