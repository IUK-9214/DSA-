#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Manually creating the tree
int main() {
    // Creating root node
    Node* root = new Node;
    root->data = 50;
    root->left = nullptr;
    root->right = nullptr;

    // Manually inserting nodes
    Node* node1 = new Node;
    node1->data = 30;
    node1->left = nullptr;
    node1->right = nullptr;
    root->left = node1;

    Node* node2 = new Node;
    node2->data = 70;
    node2->left = nullptr;
    node2->right = nullptr;
    root->right = node2;

    Node* node3 = new Node;
    node3->data = 20;
    node3->left = nullptr;
    node3->right = nullptr;
    node1->left = node3;

    Node* node4 = new Node;
    node4->data = 40;
    node4->left = nullptr;
    node4->right = nullptr;
    node1->right = node4;

    Node* node5 = new Node;
    node5->data = 60;
    node5->left = nullptr;
    node5->right = nullptr;
    node2->left = node5;

    Node* node6 = new Node;
    node6->data = 80;
    node6->left = nullptr;
    node6->right = nullptr;
    node2->right = node6;

    // Binary Search in the tree
    int key;
    cout << "Enter number to search: ";
    cin >> key;

    Node* temp = root;
    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Element " << key << " found in BST." << endl;
            break;
        } else if (key < temp->data) {
            temp = temp->left;
        } else    
            temp = temp->right;
        }
    

    if (temp == nullptr) {
        cout << "Element " << key << " not found in BST." << endl;
    }

    return 0;
}
