// Online C++ compiler to run C++ program online
#include <iostream>
#include <queue>
using namespace std;


// Declare binary tree
struct TreeNode {
 int val;
 TreeNode* left;
 TreeNode* right;
 TreeNode(int x): val(x), left(nullptr), right(nullptr) {}
};

// Return the minimum depth of binary tree
int minDepth(TreeNode* root){
    if(!root) return 0;
    queue<TreeNode*>q;
    q.push(root);
    int depth = 1;
    
    while(!q.empty()){
        int level = q.size();
        for(int i=0; i<level; i++){
            TreeNode* node = q.front();
            q.pop();
            
            if(!node->left && !node->right) return depth;
            
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
            
            depth++; // Each iterate increase depth level
        }
    }
    return depth;
    
}

// Print the binary tree
void printBinaryTree(TreeNode* root){
 if(!root) cout<<"Tree is empty"<<endl;
 queue<TreeNode*>q;
 q.push(root);
 
 cout<<"Tree root value: "<<root->val<<endl;
 //Iterate the full tree
 while(!q.empty()){
    int level = q.size();
    for(int i=0; i<level; i++){
       TreeNode* node = q.front();
       q.pop();
       
       if(node->left) q.push(node->left);
       if(node->right) q.push(node->right);
       
       if(node->left && node->right){
        cout<<"Left: "<<node->left->val<<" |right: "<<node->right->val<<endl;    
       }
       
    }
 }
}

int maxDepth(TreeNode* root){
    if(!root) return 0;
    
    queue<TreeNode*>q;
    q.push(root);
    int level = 0;
    
    while(!q.empty()){
        int levelSize = q.size();
        ++level;
        for(int i=0; i<levelSize; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
    }
    return level;
}

int main() {
    // Insert data on binary tree
    TreeNode* root = new TreeNode(7);
    root->left = new TreeNode(3);
    root->right = new TreeNode(8);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(15);
    
    root->right->left->left = new TreeNode(4);
    root->right->left->right = new TreeNode(6);
    
    
    printBinaryTree(root);
    
    cout<<"\n\nMinimum depth: "<<minDepth(root)<<endl;
    cout<<"Maximum depth: "<<maxDepth(root)<<endl;
    return 0;
}
