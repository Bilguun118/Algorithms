#include<iostream>
#include<queue>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

bool isLeaf(TreeNode* current) {
    if(!current) return false;
    if(!current->left && !current->right) {
        return true;
    }
    return false;
}

void dfs(TreeNode* current, int& sum) {
    if(!current) return;
    if(isLeaf(current->left)) {
        sum += current->left->val;
    }
    dfs(current->left, sum);
    dfs(current->right, sum);
}


// BFS Method
int bfs(TreeNode* root) {
    int ans = 0;
    if(!root) return ans;
    queue<TreeNode*>qt;
    qt.push(root);
    while(!qt.empty()) {
        TreeNode* current  = qt.front();
        if(current->left) {
            TreeNode* nextleft = current->left;
            qt.push(nextleft);
            if(!nextleft->left && !nextleft->right) {
                ans += nextleft->val;
            }
        }

        if(current->right) {
            qt.push(current->right);
        }
    }
    return ans;
}

int main() {
    return 0;
}