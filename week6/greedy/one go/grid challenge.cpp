bool cmp(string a, string b) {
    for(int i = 0; i < a.size(); i++)
        if(a[i] < b[i])
            return true;
    return false;
}
string gridChallenge(vector<string> grid) {
    for(auto &s : grid)
        sort(s.begin(), s.end());
    if(is_sorted(grid.begin(), grid.end(), cmp))
        return "YES";
    else
        return "NO";
}
