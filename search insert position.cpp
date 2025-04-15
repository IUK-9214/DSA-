#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int index;
            int i=0;//starting address
            int j=nums.size()-1;
            while (i<=j){
                int mid =(i+j)/2;
                if (nums[mid]==target){
                    index=mid;
                    return index;
                }
                else if (nums[mid]>target){
                      j=mid-1;
                }
                else{
                  i=mid+1;
                }

            }
            return i;
        }
    };

         
    int main(){
        Solution ab;
       vector<int> nums={1,2,3,4,5,6};
       int t=5;
      cout<<"thu r value "<< ab.searchInsert(nums,t);
        return 0;
    }