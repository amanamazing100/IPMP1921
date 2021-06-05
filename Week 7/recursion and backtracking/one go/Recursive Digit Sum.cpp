int superDigit(string n, int k) {int ans=0;
string temp=n;
k--;
while(k--)
n+=temp;
while(1){
    ans=0;
    for(int i=0;i<n.length();i++){
        ans+=n[i]-'0';
    }
    n=to_string(ans);
    if(n.length()==1)
    return ans;
}
return ans;
}
