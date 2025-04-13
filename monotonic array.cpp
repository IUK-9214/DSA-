#include<iostream>
#include<vector>
class Solution {
    public:
        bool isMonotonic(vector<int>& nums) {
            bool increasing=true;
            bool decreasing=true;
            for(int i =1;i<nums.size();++i){
                if (nums[i]>nums[i-1]){
                    decreasing=false;
    
                }
                if (nums[i]<nums[i-1]){
                    increasing=false;
                }
    
            }
            return increasing ||decreasing;
        }
    };
    int main(){
        Solution ab;
       vector<int> nums={1,2,2,3};
isMonotonic(nums);
        return 0;
    }