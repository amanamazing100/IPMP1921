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
    void util(TreeNode* root, int k, vector<int> *ans){
        if(ans->size()==k)
            return;
        if(root==NULL)
            return;
        util(root->left, k, ans);
        ans->push_back(root->val);
        util(root->right, k, ans);
        return;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        vector<int>anss;
        int ans;
        util(root, k, &anss);
        ans=anss[k-1];
        return ans;
    }
};
