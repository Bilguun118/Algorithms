#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

vector<int> PreOrderTraversal(TreeNode* root) {
    vector<int>preorder;
    if(root == NULL) {
        return preorder;
    }
    stack<TreeNode*>st;
    st.push(root);

    while(!st.empty()) {
        TreeNode* current = st.top();
        st.pop();

        preorder.push_back(current->val);

        if(current->left) {
            st.push(current->left);
        }
        
        if(current->right) {
            st.push(current->right);
        }
    }
    return preorder;
}

int main() {
    return 0;
}