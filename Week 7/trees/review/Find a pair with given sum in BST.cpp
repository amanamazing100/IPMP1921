class Solution {
public:
    bool util(TreeNode* root, int k, unordered_set<int> &ans){
        if(root==NULL)
            return false;
        if( util(root->left, k, ans))
           return true;
        if(ans.find(k-root->val)!=ans.end())
            return true;
        else {ans.insert(root->val);}
        return util(root->right, k, ans);
        
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> ans;
        return util(root, k, ans);
    }
};
