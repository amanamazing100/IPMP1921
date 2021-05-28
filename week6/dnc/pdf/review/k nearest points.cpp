class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<int, int> table;
        for(int i=0;i<points.size();i++)
            table.insert(pair<int, int> (points[i][0]*points[i][0]+
                                         points[i][1]*points[i][1], 
                                        i));
        vector<vector<int>> ans;
        for(auto i=table.begin();i!=table.end();i++){
            ans.push_back(points[i->second]);
            k--;
            if(k==0)
                break;
        }
        return ans;
    }
};
