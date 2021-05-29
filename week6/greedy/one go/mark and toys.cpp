
int maximumToys(vector<int> prices, int k) {
    sort(prices.begin(), prices.end());
    int cnt=0, i=0;
    while(k>0){
        k-=prices[i++];
        if(k<0)
        break;
        cnt++;
    }
    return cnt;
}
