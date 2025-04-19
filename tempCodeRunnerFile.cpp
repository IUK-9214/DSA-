#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        bool carry = true;

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] == 9 && carry) {
                digits[i] = 0;
            } else if (carry) {
                digits[i] += 1;
                carry = false;
                break;
            }
        }

        // If carry is still true, that means number was all 9s like [9,9,9]
        if (carry) {
            vector<int> result(n + 1);
            result[0] = 1;
            for (int i = 0; i < n; i++) {
                result[i + 1] = digits[i];
            }
            return result;
        }

        return digits;
    }
};

int main () {
    Solution sol;
    vector<int> digits = {3, 9, 9};

    vector<int> result = sol.plusOne(digits);  // Corrected type

    cout << "Result after plus one: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
