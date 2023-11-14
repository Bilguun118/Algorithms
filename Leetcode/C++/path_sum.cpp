#include<iostream>
#include<queue>

using namespace std;


struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};


bool hasPathSumDFS(TreeNode* root, int targetSum) {
    // DFS Solution
    if(!root) {
        return false;
    }
    int current_sum = root->val;
    if(root->left == NULL && root->right == NULL && current_sum == targetSum) {
        return true;
    }
    bool left = hasPathSumDFS(root->left, targetSum-current_sum);
    bool right = hasPathSumDFS(root->right, targetSum-current_sum);
    return left || right;
}

bool hasPathSumBFS(TreeNode* root, int targetSum) {
    // BFS Solution
    if(!root) {
        return false;
    }
    bool ans = false;
    queue<pair<TreeNode*, int>>q;
    q.push({root, root->val});
    while(!q.empty()){
        TreeNode* current = q.front().first;
        int currentVal = q.front().second;
        q.pop();
        if(current->left == NULL && current->right == NULL && currentVal == targetSum) {
            ans = true;
            break;
        }

        if(current->left) {
            q.push({current->left, currentVal + current->left->val});
        }
        if(current->right) {
            q.push({current->right, currentVal + current->right->val});
        }
    }
    return ans;
}

int main() {
    return 0;
}