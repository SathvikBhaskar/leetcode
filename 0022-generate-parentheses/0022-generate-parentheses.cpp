class Solution {
public:
    void solve(int o,int c,int n,string& curr,vector<string>& ans){
        if(curr.length()==2*n){
            ans.push_back(curr);
            return;
        }
        if(o<n){
            curr.push_back('(');
            solve(o+1,c,n,curr,ans);
            curr.pop_back();
        }
        if(c<o){
            curr.push_back(')');
            solve(o,c+1,n,curr,ans);
            curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string curr="";
        solve(0,0,n,curr,ans);
        return ans;
    }
};