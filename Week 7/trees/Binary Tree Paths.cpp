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
    void util(TreeNode* root, vector<string> &ans, string str){
        if(root==NULL)
            return;
        string temp;
        if(!str.empty())
            str+="->";
        temp+=to_string(root->val);
        str+=temp;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(str);
            return;
        }
        if(root->left){
            util(root->left, ans, str);}
        if(root->right){
            util(root->right, ans, str);}
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root==NULL) return ans;
        string temp;
        util(root, ans, temp);
        return ans;
    }
};
