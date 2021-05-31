
class Solution {
public:
    int height(TreeNode* root){
           if(root==NULL)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        return max(lh, rh)+1;
    }
    
    int calc(TreeNode* root){
        if(root==NULL)
            return 0;
        int ld=diameterOfBinaryTree(root->left);
        int rd=diameterOfBinaryTree(root->right);
        int h = height(root->left)+height(root->right)+1;
        return max(max(ld,rd), h);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        return calc(root)-1;
    }
};
