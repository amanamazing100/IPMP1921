class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int num_op=0;
        int num_bit = pow(2,maximumBit)-1;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
            num_op^=nums[i];
        for(int i=nums.size()-1;i>=0;i--){
            ans.push_back(num_op^num_bit);
            num_op^=nums[i];
        }
        return ans;
    }
};
