#include<iostream>
#include<queue>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};


bool isSymmetric(TreeNode* root) {
    if (root == NULL) {
        return true;
    }
    queue<TreeNode*>nodes;
    nodes.push(root->left);
    nodes.push(root->right);
    while(!nodes.empty()) {
        TreeNode* leftNode = nodes.front();
        nodes.pop();
        TreeNode* rightNode = nodes.front();
        nodes.pop();
        if(leftNode == NULL && rightNode == NULL) {
            continue;
        }
        if(leftNode == NULL || rightNode == NULL || leftNode->val != rightNode->val) {
            return false;
        }
        nodes.push(leftNode->left);
        nodes.push(rightNode->right);
        nodes.push(leftNode->right);
        nodes.push(rightNode->left);
    }
    return true;
}

int main() {
    return 0;
}