#include <bits/stdc++.h>
using namespace std;
#define ull long long

map<pair<ull, ull>, ull> m;
ull divide(ull n, vector<ull>& v, ull pos)
{
if (m.find(make_pair(n, pos))==m.end())
{
    ull my_best=0;
for (ull i=pos; i<v.size(); i++)
{
   if (n%v[i]==0 && n!=v[i])
      my_best = max(my_best, 1 + (n/v[i])*divide(v[i], v, i+1));
}
m[make_pair(n, pos)] = my_best;
}
return m[make_pair(n, pos)];
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
       ull n, ma; cin >> n >> ma;
       vector<ull> v(ma);
       m.clear();
       for (int i=0;i<ma;i++) cin >> v[i];
       sort(v.begin(), v.end(), greater<ull>());
       cout << divide(n, v, 0) << endl;
    }
}
