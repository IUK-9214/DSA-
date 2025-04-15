#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int i=0;
            int k=nums.size();
            while(i<k){
                if (val==nums[i]){
                    nums[i]=nums[k-1];
                    k--;
                }
                else{
                    i++;
                }
            }
            return k;      }
    };
    int main (){
Solution s;
vector<int>nums={1,2,4,3,2,5,2};
int cal=2;
cout<<"the answer should be 3 = "<<s.removeElement(nums,cal);

        return 0;
    }