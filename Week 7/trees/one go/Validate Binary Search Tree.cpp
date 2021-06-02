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
    bool util(TreeNode *root, double min, double max){
        if(root==NULL)
            return true;
        //cout<<min<<endl;
        if(root->val<min || root->val>max){//cout<<"x"<<endl;
            return false;}
        bool o=true, t=true;
        if(root->left)
        o= util(root->left, (double)min, (double)root->val-1);
        if(root->right)
        t= util(root->right, (double)root->val+1, (double)max);
        return o&&t;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        return util(root, INT_MIN, 2147483647);
    }
};
