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
    void util(TreeNode* root, int *ans){
        if(root==NULL)
            return;
        util(root->right, ans);
        root->val+=*ans;
        *ans=root->val;
        util(root->left, ans);
        return;
    }
    TreeNode* bstToGst(TreeNode* root) {
        //travel right root left, keep adding vals
        int ans=0;
        util(root, &ans);
        return root;
    }
};
