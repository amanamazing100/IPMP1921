class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maj = nums.size()/2;
        if(nums.size()%2)
            maj++;
        
        unordered_map<int, int> count;
        for(int i=0;i<nums.size();i++){
            count[nums[i]]++;
            if(count[nums[i]]==maj)
                return nums[i];
        }
        return 0;
    }
};
