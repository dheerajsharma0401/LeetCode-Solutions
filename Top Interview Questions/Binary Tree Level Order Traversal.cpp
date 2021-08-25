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
    vector<vector<int>> v;
    void helper(TreeNode* root,int dept)
    {
        if(root==NULL)
            return;
         if(v.size() == dept)
        v.push_back(vector<int>());
    
        v[dept].push_back(root->val);
        helper(root->left,dept+1);
        helper(root->right,dept+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        int dept=0;
        helper(root,dept);
        return v;
        
    }
};