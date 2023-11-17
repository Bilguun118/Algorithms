#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

void dfs(TreeNode* current, vector<int>& postorder) {
    if(!current) {
        return;
    }
    if(current->left) dfs(current->left, postorder);
    if(current->right) dfs(current->right, postorder);

    postorder.push_back(current->val);
}

int main() {
    return 0;
}