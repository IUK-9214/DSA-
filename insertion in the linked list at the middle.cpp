#include<iostream>
using namespace std;

struct s {
    int data;
    s* link;
};

int main() {
    // Create variables of structure data type
    s* data1 = new s;
    s* data2 = new s;
    s* data3 = new s;
    s* data4 = new s;

    // Assign values
    data1->data = 1;
    data2->data = 2;
    data3->data = 3;
    data4->data = 5;

    // Link the variables with the next variable
    data1->link = data2;
    data2->link = data3;
    data3->link = data4;
    data4->link = nullptr;

    // Display the original list
    s* current = data1;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->link;
    }
    cout << endl;

    // Add a value at the start
    cout << "After adding a value: 0 at the start" << endl;
    s* start = new s;
    start->data = 0;
    start->link = data1;

    s* curren = start;
    while (curren != nullptr) {
        cout << curren->data << " ";
        curren = curren->link;
    }
    cout << endl;

    // Add a value at the end
    cout << "After adding a value at the end of the list" << endl;
    s* end = new s;
    end->data = 4;
    data3->link = end;
    end->link = nullptr;

    s* curre = start;
    while (curre != nullptr) {
        cout << curre->data << " ";
        curre = curre->link;
    }
    cout << endl;

    // Calculate length of the linked list
    int l = 0;
    s* curr = start;
    while (curr != nullptr) {
        l++;
        curr = curr->link;
    }
    cout << "The length is " << l << endl;
    // Find middle position
    int mid = l / 2;
    s* cur = start;
    int x = 1;
    while (x < mid) {
        x++;
        cur = cur->link;
    }
    // Insert a value at the middle
    cout << "After adding a value at the middle" << endl;
    s* midNode = new s;
    midNode->data = 99; // Value to insert
    midNode->link = cur->link;
    cur->link = midNode;
    // Display the updated list
    s* updatedList = start;
    while (updatedList != nullptr) {
        cout << updatedList->data << " ";
        updatedList = updatedList->link;
    }
    cout << endl;

    return 0;
}
