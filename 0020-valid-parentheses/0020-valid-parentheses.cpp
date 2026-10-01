class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char x:s){
            if(x=='(') st.push(')');
            else if(x=='{') st.push('}');
            else if(x=='[') st.push(']');
            else{
                if(st.empty()||st.top()!=x)return false;
                st.pop();
            }
        }
        return st.empty();
    }
};