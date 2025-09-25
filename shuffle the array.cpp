class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;  // result array
        ans.reserve(2 * n); // pre-allocate size for efficiency
        
        for (int i = 0; i < n; i++) {
            ans.push_back(nums[i]);     // take xi
            ans.push_back(nums[i + n]); // take yi
        }
        
        return ans;
    }
};
