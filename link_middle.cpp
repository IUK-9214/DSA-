#include <iostream>
#include <queue>
using namespace std;
int main() {
    queue<int> q;
    queue<int> temp;
    int x = 9;
    int max_size = 6;
    int mid = max_size / 2;
    // Inserting elements into the queue
    for (int i = 0; i < max_size; i++) {
        int y;
        cout << "Enter the number: ";
        cin >> y;
        q.push(y);
    }
    // Moving first half to temp
    for (int i = 0; i < mid; i++) {
        temp.push(q.front());
        q.pop();
    }
    // Inserting new element in the middle
    temp.push(x);
    // Moving the rest of the elements to temp
    while (!q.empty()) {
        temp.push(q.front());
        q.pop();
    }
    // Assigning temp queue to q
    q = temp;
    max_size++;

    // Displaying elements
    while (!q.empty()) {
        cout << q.front() << "  ";
        q.pop();
    }

    return 0;
}
