class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        vector<int>pos;
        for(int i=0;i<boxes.length();i++)
        {
            if(boxes[i]=='1')
                pos.push_back(i);
        }
        for(int i=0;i<boxes.length();i++){
            int tot =0;
            for(int j=0;j<pos.size();j++){
                tot+=abs(pos[j]-i);
            }
            ans.push_back(tot);
        }
        return ans;
    }
};
