#include <iostream>
using namespace std;

class ReverseArray {
public:
    void reversal(int size, int array[]) {
        int start = 0;
        int end = size - 1;
        while (start < end) {
            swap(array[start], array[end]);
            start++;
            end--; 
        }
    }

    void printArray(int size, int array[]) {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ReverseArray object;
    int s = 6;
    int arr[s] = {1, 2, 3, 4, 5, 6};

    object.reversal(s, arr);
    object.printArray(s, arr); // Output: 6 5 4 3 2 1

    return 0;
}
