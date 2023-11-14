#include<iostream>
#include<queue>

using namespace std;

struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
};

int minDepthDFS(TreeNode* root) {
    // DFS Solution
    if(root == NULL) {
        return 0;
    }
    if(root->left == NULL) {
        return minDepthDFS(root->right) + 1;
    }
    if(root->right == NULL) {
        return minDepthDFS(root->left) + 1;
    }
    return min(minDepthDFS(root->left), minDepthDFS(root->right)) + 1;
}


int minDepthBFS(TreeNode* root) {
    // BFS Solution
    if (root == NULL) {
        return 0;
    }
    queue<pair<TreeNode*, int>>q;
    int count = 0;
    q.push({root,1});
    while(!q.empty()) {
        TreeNode* current = q.front().first;
        int depthcount = q.front().second;
        q.pop();
        if(current->left == NULL && current->right == NULL) {
            // this is the leaf node
            count = depthcount;
            break;
        }
        count++;
        if(current->left != NULL) {
            q.push({current->left, depthcount+1});
        }
        if (current->right != NULL) {
            q.push({current->right, depthcount+1});
        }
    }
    return count;
}

int main() {
    
    return 0;
}