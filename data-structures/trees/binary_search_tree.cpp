#include <iostream>

struct Node {
    int data;
    Node* left;
    Node* right;
    explicit Node(int value) : data(value), left(nullptr), right(nullptr) {}
};

Node* insert(Node* root, int value) {
    if (root == nullptr) return new Node(value);
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}

void inorder(const Node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    std::cout << root->data << ' ';
    inorder(root->right);
}

void destroy(Node* root) {
    if (root == nullptr) return;
    destroy(root->left);
    destroy(root->right);
    delete root;
}

int main() {
    Node* root = nullptr;
    for (int value : {50, 30, 70, 20, 40, 60, 80})
        root = insert(root, value);
    std::cout << "BST inorder traversal: ";
    inorder(root);
    std::cout << '\n';
    destroy(root);
    return 0;
}