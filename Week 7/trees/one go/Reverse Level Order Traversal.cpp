
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode *>q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            vector<int>temp;
            while(count--){
                TreeNode *temp1=q.front();
                q.pop();
                temp.push_back(temp1->val);
                if(temp1->left)
                    q.push(temp1->left);
                if(temp1->right)
                    q.push(temp1->right);
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
