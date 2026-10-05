class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        st.push(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')st.push(0);
            else{
                int t1=st.top();
                st.pop();
                int t2=st.top();
                st.pop();
                int ans=t2+max(2*t1,1);
                st.push(ans);
            }
        }
        return st.top();
    }
};