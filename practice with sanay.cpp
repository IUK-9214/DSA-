#include <iostream>
using namespace std;

int main() {
    int arr[5] = {4,6,-9,3,7}; 
    int n = 5; // Number of elements in the array
    int index = 3; // Index of the element to delete (in this case, the 4th element)

    if (index >= n || index < 0) {
        cout << "Invalid index" << endl;
    } else {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
        cout << "Array after deletion: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

