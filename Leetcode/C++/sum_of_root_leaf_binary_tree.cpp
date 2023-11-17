#include<iostream>
#include<stack>

using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

void dfs(TreeNode* root, int& ans, int current_sum) {
    if(!root) {
        return;
    }
    current_sum = current_sum * 2 + root->val;
    if(!root->left && !root->right) {
        ans += current_sum;
        return;
    }
    if(root->left) dfs(root->left, ans, current_sum);
    if(root->right) dfs(root->right, ans, current_sum);
}

int main() {
    return 0;
}