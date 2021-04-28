class Solution {
public:
        int val(vector<string> &A){
    auto &ref=A;
    /*for(auto it:A)
        cout<<it<<" ";
    cout<<endl;*/
    string temp1=ref[ref.size()-1];
    ref.pop_back();
    if(!isalnum(temp1[0])&&temp1.size()==1){
        if(temp1=="+"){
            int a=val(ref);
            int b=val(ref);
            //cout<<a<<" "<<b<<endl;
            int te=a+b;
        return te;
        }
        if(temp1=="-"){
            int a=val(ref);
            int b=val(ref);
            //cout<<a<<" "<<b<<endl;
            int te=b-a;
        return te;
        }
        if(temp1=="/"){
            int a=val(ref);
            int b=val(ref);
            //cout<<a<<" "<<b<<endl;
            int te=b/a;
        return te;
        
        }
        if(temp1=="*"){
            int a=val(ref);
            int b=val(ref);
            //cout<<a<<" "<<b<<endl;
            int te=a*b;
        return te;
        }
        
    }
    else {
        int p=stoi(temp1);
        return p;
    }
    return 0;
}
    int evalRPN(vector<string>& A) {
    auto &ref=A;
    int ans=val(ref);
    return ans;

    }
};
