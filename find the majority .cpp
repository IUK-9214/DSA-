#include<vector>
#include<iostream>
using namespace std;
class Solution {
    public:
        int majorityElement(vector<int>& nums) {
            int count = 0;
            int candidate = 0;
    
            for (int num : nums) {
                if (count == 0) {
                    candidate = num;
                    count=1;
                }
                else if(num == candidate) {
                    count += 1 ;
            }
            else{
                count-= 1;
            }
        }
            return candidate; }
    };
int main (){
Solution ab;
vector<int>nums={3,4,4,4,4,4,5,5,5,5,5,5};
cout<<ab.majorityElement(nums);

    return 0;
}