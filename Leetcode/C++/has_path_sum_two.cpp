#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

void dfsWithBackTrack(TreeNode* current, int targetSum, vector<int>bt, vector<vector<int>>& path) {
    if(!current) return;
    bt.push_back(current->val);
    if(!current->right && !current->left && targetSum == current->val) {
        path.push_back(bt);
    }
    cout << current->val;
    dfsWithBackTrack(current->left, targetSum-current->val, bt, path);
    dfsWithBackTrack(current->right, targetSum-current->val, bt, path);
}

void dfs() {
    return;
}

int main() {
    TreeNode t;
    t.val = 2;
    t.left = NULL;
    t.right = NULL;
    TreeNode b;
    b.val = 7;
    b.left = &t;
    b.right = NULL;
    TreeNode a;
    a.val = 5;
    a.left = &b;
    // a.right = 
    vector<int>bt;
    vector<vector<int>>ans;
    dfsWithBackTrack(&a, 14, bt, ans);
    return 0;
}