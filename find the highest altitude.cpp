#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
    
        int ha=0;
        int sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            if(sum>ha){
                ha=sum;
            }
        }
        return ha;
    }
};

int main() {
    vector<int> nums = {-5,1,5,0,-7};
    Solution ab;
  int result = ab.largestAltitude(nums);

    // print the result
    cout<<endl;
    cout<<result;
    cout << endl;
    return 0;
}