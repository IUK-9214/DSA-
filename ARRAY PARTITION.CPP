#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int arrayPairSum(vector<int>& nums) {
            int sum;
            for(int j=0;j<nums.size()-1;j++){
            for(int i=0;i<nums.size()-j-1;i++){
                if(nums[i]>nums[i+1]){
                    int t=nums[i];
                    nums[i]=nums[i+1];
                    nums[i+1]=t;
                }
            }
        }
            for(int i=0;i<nums.size();i+=2){
                
                sum+=nums[i];
            }
            return sum;
        }
    };
int main (){
Solution A;
vector <int>nums;
nums={1,3,4,2,6,5};
A.arrayPairSum(nums);
 return 0;
}