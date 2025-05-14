#include <iostream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
      priority_queue<int> maxHeap; //make a proity max queue
      for (int gift : gifts){
        maxHeap.push(gift);//push one by one from largest to smallest 
      }
      while(k--&&!maxHeap.empty()){
        int top =maxHeap.top();//create a top variable which contain the top value of the queue and give it to the top variable 
        maxHeap.pop();//then remove the element 
        int reduce =(int)sqrt(top); //take square of the top value which we stored in previous line
        maxHeap.push(reduce); //then add it back to the queue 
      }
      long long total=0;//now here we stored the sum of all the element present in the queue 
      while (!maxHeap.empty()){
        total+=maxHeap.top();
        maxHeap.pop();
      }
      return total; //return the total sum 

      }
    
    
};

int main() {
    Solution sol;
    vector<int> gifts = {25, 64, 9, 4, 100};
    int k = 4;
    cout << sol.pickGifts(gifts, k) << endl;  // Example output
    return 0;
}
