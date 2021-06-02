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
    bool isEvenOddTree(TreeNode* root) {
        int mark=0;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int cnt=q.size();
            vector<int>temp;
            while(cnt--){
                TreeNode *temp1=q.front();
                q.pop();
                temp.push_back(temp1->val);
                if(temp1->left)
                    q.push(temp1->left);
                if(temp1->right)
                    q.push(temp1->right);
            }
            if(mark%2==0)
            {
                int prev=temp[0];
                if(prev%2==0)
                    return false;
                int i=1;
                while(i<temp.size()){
                    if(temp[i]>prev && temp[i]%2==1){
                        prev=temp[i];i++;
                        continue;}
                    else return false;
                }
            }
            else
            {
                int prev=temp[0];
                if(prev%2==1)
                    return false;
                int i=1;
                while(i<temp.size()){
                    if(temp[i]<prev && temp[i]%2==0){prev=temp[i];i++;
                        continue;}
                    else return false;
                }
            }
            mark++;
        }
            return true;  
    }
};
