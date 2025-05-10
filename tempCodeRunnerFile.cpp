#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       int n=nums.size();
       
      
        for(int i=0;i<n;i++){
            if (n==0 &&nums[n]==0){
        return false;
       }
       else{
        if (nums[i]==nums[n-1]){
                return true;
            }
            else{
                n--;
            }
       }
            
        }
        return false;
    }
};
int main (){
Solution sb;
vector <int>nums={0};
cout<<sb.containsDuplicate(nums);
    return 0;
}