int toys(vector<int> w) {
    sort(w.begin(), w.end());
    int cnt=1;
    int min=w[0];
    for(int i=0;i<w.size();i++){
        if(w[i]-4>min){
            cnt++;
            min=w[i];
        }
    }
    return cnt;
}
