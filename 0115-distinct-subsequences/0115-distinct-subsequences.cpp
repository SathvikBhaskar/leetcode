class Solution {
public:
    int numDistinct(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<unsigned long long>curr(m+1,0);
        vector<unsigned long long>next(m+1,0);
        next[m]=1;
        for(int i=n-1;i>=0;i--){
            curr[m]=1;
            for(int j=m-1;j>=0;j--){
                if(s[i]==t[j])curr[j]=next[j]+next[j+1];
                else curr[j]=next[j];
            }
            next=curr;
        }
        return (int)next[0];
    }
};