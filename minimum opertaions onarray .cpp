#include<iostream>
#include<vector>
using namespace std;
class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int sum=0;
            for( int num : nums){
                sum+=num;
            }
            int rem;
            rem=sum%k;
            k=rem;
             return k;  
        }
    };
    int main (){

        Solution sol;
        vector<int> nums = {3,2};
        int k = 6;
    
        int result = sol.minOperations(nums, k);
        cout << "Minimum operations required: " << result << endl;
    
        return 0;
    }