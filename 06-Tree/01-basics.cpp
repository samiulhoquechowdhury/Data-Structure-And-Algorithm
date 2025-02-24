#include <iostream>
using namespace std;

// Structure for a tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor to create a new node
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

// Inorder traversal function
void inorderTraversal(Node* root) {
    if (root == nullptr) {
        return; // If there's no node, do nothing
    }

    // First, visit the left subtree
    inorderTraversal(root->left);

    // Then, visit the node itself (print its data)
    cout << root->data << " ";

    // Finally, visit the right subtree
    inorderTraversal(root->right);
}

int main() {
    // Create nodes of the tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Perform inorder traversal
    cout << "Inorder Traversal: ";
    inorderTraversal(root);  // Expected output: 4 2 5 1 3
    cout << endl;

    return 0;
}
