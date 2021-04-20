class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        
        vector<int> ans;
        for(int i=0;i<queries.size();i++){
            int count=0;
            int x_c=queries[i].at(0);
            int y_c=queries[i].at(1);
            int r_c=queries[i].at(2);
            for(int j=0;j<points.size();j++){
                int x_p=points[j].at(0);
                int y_p=points[j].at(1);
                if(
                    (x_c-x_p)*(x_c-x_p)+(y_c-y_p)*(y_c-y_p) <= r_c*r_c
                    )
                   count++;
            }
            ans.push_back(count);
        }
        return ans;
    }
};
