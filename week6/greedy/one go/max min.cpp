int maxMin(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int diff= arr[arr.size()-1];
    for(int i=0;i<=arr.size()-k;i++){
        if(diff>arr[i+k-1]-arr[i])
            diff=arr[i+k-1]-arr[i];
    }
    return diff;
}
