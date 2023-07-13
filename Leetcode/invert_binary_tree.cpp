#include <iostream>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};

TreeNode* newNode(int data)
{
    TreeNode* temp = new TreeNode;
    temp->val = data;
    temp->left = temp->right = NULL;
    return temp;
}

void invert(TreeNode* root) {
    if (root == NULL) {
        return;
    }
    TreeNode* tempor = new TreeNode;
    tempor = root->left;
    root->left = root->right;
    root->right = tempor;
    invert(root->left);
    invert(root->right);
}

int main() {
    struct TreeNode* root = newNode(2);
    root->left = newNode(1);
    root->right= newNode(3);
    invert(root);
    cout << root << endl;
    return 0;
}