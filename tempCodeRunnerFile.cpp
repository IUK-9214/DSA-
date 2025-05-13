#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
      priority_queue<int> maxHeap;
      for (int gift : gifts){
        maxHeap.push(gift);
      }
      while(k--&&!maxHeap.empty()){
        int top =maxHeap.top();
        maxHeap.pop();
        int reduce =(int)sqrt(top);
        maxHeap.push(reduce);
      }
      long long total=0;
      while (!maxHeap.empty()){
        total+=maxHeap.top();
        maxHeap.pop();
      }
      return total;

      }
    
    
};

int main() {
    Solution sol;
    vector<int> gifts = {25, 64, 9, 4, 100};
    int k = 4;
    cout << sol.pickGifts(gifts, k) << endl;  // Example output
    return 0;
}
