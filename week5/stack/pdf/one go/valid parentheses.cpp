class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else if(s[i]==')'||s[i]=='}'||s[i]==']'){
                if(st.empty())
                    return 0;
                if(s[i]==')'){
                    if(st.top()=='('){
                        st.pop();
                        continue;
                    }
                    else return 0;
                }
                if(s[i]=='}'){
                    if(st.top()=='{'){
                        st.pop();
                        continue;
                    }
                    else return 0;
                }
                if(s[i]==']'){
                    if(st.top()=='['){
                        st.pop();
                        continue;
                    }
                    else return 0;
                }
            }
        }
        if(st.empty())
        return 1;
        return 0;
    }
};
