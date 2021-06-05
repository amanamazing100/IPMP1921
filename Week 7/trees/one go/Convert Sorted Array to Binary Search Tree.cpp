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
    TreeNode* util(vector<int>& nums){
        if(nums.empty())
            return NULL;
        int size=nums.size()/2;
        TreeNode *temp=new TreeNode(nums[size]);
        vector<int>left;
        for(int i=0;i<size;i++)
            left.push_back(nums[i]);
        vector<int>right;
        for(int i=size+1;i<nums.size();i++)
            right.push_back(nums[i]);
        temp->left=util(left);
        temp->right=util(right);
        return temp;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *temp=util(nums);
        return temp;
    }
};
