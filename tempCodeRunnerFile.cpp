#include <iostream>
using namespace std;

class Solution {
public:
    void applied_function(int arr[], int n) {
        // Step 1: Apply merging operation
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1] && arr[i] != 0) {
                arr[i] *= 2;
                arr[i + 1] = 0;
            }
        }

        int array[n]; 
        int index = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                array[index++] = arr[i];
            }
        }

        while (index < n) {
            array[index++] = 0;
        }

        for (int i = 0; i < n; i++) {
            arr[i] = array[i];
        }

        cout << "Final Array: ";
        for (int j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution o;

    int num[] = {2, 2, 0, 4, 4, 8}; 
    int n = sizeof(num) / sizeof(num[0]); 
    o.applied_function(num, n); 

    return 0;
}