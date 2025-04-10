#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
class Solution {
    public:
        int minimumOperations(vector<int>& nums) {
            int operations=0;
            while(true){
                unordered_set<int> e(nums.begin(),nums.end());
                if (e.size()==nums.size()){
                    break;
                }
                int remove=min(3, (int)nums.size());
                nums.erase(nums.begin(),nums.begin()+remove);
                operations++;
            }
           return operations;
        }
    };
int main (){
Solution a;
vector<int>nums ={1,2,3,4,2,3,3,5,7};
int op=a.minimumOperations(nums);
cout<<op;
    return 0;
}