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
    void util(TreeNode* root){
        if(root==NULL)
            return;
        TreeNode *templ=root->right;
        TreeNode *tempr=root->left;
        root->left=templ;
        root->right=tempr;
        if(root->left)
            util(root->left);
        if(root->right)
            util(root->right);
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return root;
        util(root);
        return root;
    }
};
