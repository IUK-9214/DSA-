#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {

            if (nums.size()==0){
                return 0;
            }
            int k=1;
            for (int i=1;i<nums.size();i++){
                if (nums[i]!=nums[i-1]){
                    nums[k]=nums[i];
                    k++;
                }
                
            }
        return k;
        }
    };
int  main (){
    Solution ab;
    vector<int>nums={1,2,2,4,5,6,6,7};
    for (int i=0;i<nums.size();i++){
                cout<<nums[i]<<" ";}
    cout<<endl<<ab.removeDuplicates(nums);
    return 0;
}