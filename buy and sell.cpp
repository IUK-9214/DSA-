#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int MinPrice=prices[0];
            int MaxProfit=0;
            for (int i=0;i<prices.size();i++){
                int cal=prices[i]-MinPrice;
              if ( MaxProfit<cal){
                MaxProfit=cal;
              }
              else{
                MinPrice=min(MinPrice,prices[i]);
              }
            }
       return MaxProfit;
        }
    };

int main (){
    vector<int> prices = {7, 1, 5, 3, 6, 4};  
    Solution sol;
    int result = sol.maxProfit(prices);

    cout << "Maximum Profit: " << result << endl;

    return 0;
}