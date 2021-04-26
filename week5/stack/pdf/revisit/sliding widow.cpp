class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int> Qi(k);
    int i, n=arr.size();
        vector<int>anss;
    for (i = 0; i < k; ++i) 
    {
        while ((!Qi.empty()) && arr[i] >= 
                            arr[Qi.back()])
            Qi.pop_back();
     Qi.push_back(i);
    }
    for (; i < n; ++i) 
    {    
        anss.push_back(arr[Qi.front()]);
        while ((!Qi.empty()) && Qi.front() <= 
                                           i - k)
            Qi.pop_front(); 
        while ((!Qi.empty()) && arr[i] >= 
                             arr[Qi.back()])
            Qi.pop_back();
        Qi.push_back(i);
    }
  
    anss.push_back(arr[Qi.front()]);

    return anss;
    }
};
