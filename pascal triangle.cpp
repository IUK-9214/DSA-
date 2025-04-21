#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;
        vector<int> prev, curr;

        for (int i = 0; i < numRows; i++) {
            curr = vector<int>(i + 1, 1);
            for (int j = 1; j < i; j++) {
                curr[j] = prev[j - 1] + prev[j];
            }
            triangle.push_back(curr);
            prev = curr;
        }

        return triangle;
    }
};

int main() {
    Solution sol;
    int num = 5;
    vector<vector<int>> result = sol.generate(num);
    for (const auto& row : result) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
