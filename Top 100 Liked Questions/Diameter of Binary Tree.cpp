/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int height(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        return max(1+height(root->left),1+height(root->right));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int lh=height(root->left);
        int rh=height(root->right);
        int th=lh+rh;
        
        int ldia=diameterOfBinaryTree(root->left);
        int rdia=diameterOfBinaryTree(root->right);
        int maxdia=max(ldia,rdia);
        
        int res=max(th,maxdia);
        return res;
        
        
    }
};