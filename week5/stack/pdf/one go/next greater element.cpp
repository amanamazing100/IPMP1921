class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, 
                                   vector<int>& nums2)
    {
            int n =nums2.size();
        stack<int> helper;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            if(helper.empty()){
                helper.push(i);
                continue;
            }
            while(!helper.empty() && nums2[helper.top()]<nums2[i]){
                int x=helper.top();
                ans[x]=i;
                helper.pop();
            }
            helper.push(i);
        }
        while(!helper.empty()){
            ans[helper.top()]=-1;
            helper.pop();
        }
        vector<int>real_ans(nums1.size());
        for(int i=0;i<n;i++){
            if(ans[i]>-1){
                ans[i]=nums2[ans[i]];
            }
        }
        for(int i=0;i<nums1.size();i++){
            int y=0;
            while(nums2[y]!=nums1[i])
                y++;
            real_ans[i]=ans[y];
        }
        return real_ans;
    }
};
