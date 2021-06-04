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

    
TreeNode *pruneUtil(TreeNode *root, int k, int *sum)
{
    if (root == NULL)  return NULL;
    int lsum = *sum + (root->val);
    int rsum = lsum;
    root->left = pruneUtil(root->left, k, &lsum);
    root->right = pruneUtil(root->right, k, &rsum);
    *sum = max(lsum, rsum);
    if (*sum < k)
    {
        root = NULL;
    }
    return root;
}
  

    TreeNode* sufficientSubset(TreeNode* root, int limit) {
            int sum = 0;
    return pruneUtil(root, limit, &sum);

    }
};
