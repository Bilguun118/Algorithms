#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

void dfs(TreeNode* current, string keeper, vector<string>& ans) {
    if(!current) return;
    if(!current->left && !current->right) {
        keeper += to_string(current->val);
        return;
    }
    keeper += to_string(current->val) + "->";
    dfs(current->left, keeper, ans);
    dfs(current->right, keeper, ans);
}

void dfsWithBackTrack(TreeNode* current, vector<int> bpath, vector<string>& ans) {
    if(!current) return;
    bpath.push_back(current->val);
    if(!current->left && !current->right) {
        string pathS;
        for(int i = 0; i < bpath.size(); i++) {
            pathS += to_string(bpath[i]);
            if(i < bpath.size() - 1) pathS += "->";
        }
    } else {
        dfsWithBackTrack(current->left, bpath, ans);
        dfsWithBackTrack(current->right, bpath, ans);
    }
}

int main() {
    return 0;
}


