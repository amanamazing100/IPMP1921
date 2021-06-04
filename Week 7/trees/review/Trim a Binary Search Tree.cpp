
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int min, int max) {
     if (root == NULL)
      return NULL;     
   root->left =  trimBST(root->left, min, max);
   root->right =  trimBST(root->right, min, max);
        if (root->val < min)
   {
       TreeNode *rChild = root->right;
       return rChild;
   }
   if (root->val > max)
   {
       TreeNode *lChild = root->left;
       return lChild;
   }
   return root;
    }
};
