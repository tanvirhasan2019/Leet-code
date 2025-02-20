
#include <iostream>
#include <queue>
using namespace std;

// Defination of binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};


//Find the minimum depth of tree
int minDepBinTree(TreeNode* root){
    if(!root) return 0;
    
    queue<TreeNode*>q;
    q.push(root);
    int depth = 1;
    
    while(!q.empty()){
        int levelSize = q.size();
        for(int i=0; i<levelSize; i++){
            TreeNode* node = q.front();
            q.pop();
            
            if(!node->left && !node->right) return depth;
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
            depth++;
        }
    }
    return depth;
}


int main()
{
    // Add sample data to Tree
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(22);
    
    cout<<"Minimum depth of the binary tree: "<<minDepBinTree(root)<<endl;

    return 0;
}
