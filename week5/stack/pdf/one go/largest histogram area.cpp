class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
         int n =heights.size();
        stack<int> helper;
        vector<int> smallest_right(n);
        for(int i=0;i<n;i++){
            if(helper.empty()){
                helper.push(i);
                continue;
            }
            while(!helper.empty() && heights[helper.top()]>heights[i]){
                int x=helper.top();
                smallest_right[x]=i;
                helper.pop();
            }
            helper.push(i);
        }
        while(!helper.empty()){
            smallest_right[helper.top()]=heights.size();
            helper.pop();
        }
        reverse(heights.begin(), heights.end());
        
        stack<int> helper2;
        vector<int> smallest_left(n);
for(int i=0;i<n;i++){
            if(helper2.empty()){
                helper2.push(i);
                continue;
            }
            while(!helper2.empty() && heights[helper2.top()]>heights[i]){
                int x=helper2.top();
                smallest_left[x]=i;
                helper2.pop();
            }
            helper2.push(i);
        }
        while(!helper2.empty()){
            smallest_left[helper2.top()]=-1;
            helper2.pop();
        }
        reverse(heights.begin(), heights.end());
        reverse(smallest_left.begin(), smallest_left.end());
        for(int i=0;i<smallest_left.size();i++){
            if(smallest_left[i]>0){
                smallest_left[i]=smallest_left.size()-1-smallest_left[i];
            }
        }
        int largest=0;
        for(int i=0;i<smallest_right.size();i++){
            if(smallest_right[i]>-1)
                smallest_right[i]--;
        }
        for(int i=0;i<heights.size();i++){
            if((heights[i]*(i-smallest_left[i])+heights[i]*(smallest_right[i]-i))>largest)
                largest=(heights[i]*(i-smallest_left[i])+heights[i]*(smallest_right[i]-i));
        }
        
        return largest;
    }
};
