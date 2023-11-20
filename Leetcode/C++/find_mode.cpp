#include<iostream>
#include<vector>
#include<stack>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};



void findMode(TreeNode* current, vector<int>& ans, int& currentVal, int& freq, int& maxFreq) {
    if(!current) return;
    findMode(current->left, ans, currentVal, freq, maxFreq);
    if(currentVal == current->val) {
        freq++;
    } else {
        currentVal = current->val;
        freq = 1;
    }

    if(freq > maxFreq) {
        maxFreq = freq;
        ans = {current->val};
    } else if (freq == maxFreq) {
        ans.push_back(current->val);
    }
    findMode(current->right, ans, currentVal, freq, maxFreq);
}

int main() {
    // uses inorder traversal for keep track of sorted binary search tree
    TreeNode b;
    b.val = 2;
    b.left = NULL;
    b.right = NULL;
    TreeNode c;
    c.val = 2;
    c.left = &b;
    c.right = NULL;
    TreeNode a;
    a.val = 1;
    a.left = &c;
    a.right = NULL;
    vector<int>ans;
    int currentVal = 0;
    int freq = INT_MIN;
    int maxFreq = 0;
    findMode(&a, ans, currentVal, freq, maxFreq);
    return 0;
}
