#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
       int final_result=0;
        for (int i=0;i<operations.size();i++){
          final_result+= operations[i]=="X++" || operations[i]=="++X" ?1 : -1 ;
        }
        return final_result;
    }
};

int main() {
    vector<string> nums = {"++X","++X","X++"};
    Solution ab;
 int result = ab.finalValueAfterOperations(nums);


    // print the result
    cout<<endl;
    cout<<result;
    cout << endl;
    return 0;
}