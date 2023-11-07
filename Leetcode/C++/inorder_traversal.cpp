#include <iostream>
#include <algorithm>

using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
};

Node* newNode(int data) {
    Node* temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right = NULL;
    return temp;
}

void InorderTraversal(struct Node* node) {
    // Base Case for traversing
    if (node == NULL) {
        return;
    }
    Node *temp = new Node;
    temp = node -> left;
    node -> left = node -> right;
    node -> right = temp;
    InorderTraversal(node->left);
    InorderTraversal(node->right);
}

int main() {
    struct Node* root = newNode(30);
    root -> left = newNode(15);
    root -> right = newNode(40);
    root -> left -> left = newNode(4);
    root -> left -> right = newNode(16);

    cout << "INORDER TRAVERSAL: " << endl;
    InorderTraversal(root); 
    return 0;
}