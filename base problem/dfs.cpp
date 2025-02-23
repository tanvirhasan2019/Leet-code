// Dfs

#include <iostream>
#include <stack>

using namespace std;

// Define tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


// Display tree reverse order
void dfs(TreeNode* root){
    if(!root) return;
    
    stack<TreeNode*>s;
    s.push(root);
    int level = 1;
    
    while(!s.empty()){
        int levelSize = s.size();
        for(int i=0; i<levelSize; i++){
            TreeNode* node = s.top();
            s.pop();
            
            // Print node
            cout<<"Node: "<<node->val<<endl;
            if(node->left) s.push(node->left);
            if(node->right) s.push(node->right);
        }
    }
}

int main() {
    // Insert data on tree
    TreeNode* root = new TreeNode(3);
    
    root->left = new TreeNode(6);
    root->right = new TreeNode(1);
    
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(10);
    
    root->left->left->left = new TreeNode(12);
    root->left->left->right = new TreeNode(15);
    
    dfs(root);
    
    return 0;
}
