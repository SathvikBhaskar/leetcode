class Solution {
public:
    int balancedStringSplit(string s) {
        int ans=0,x=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')x++;
            else x--;
            if(x==0)ans++;
        }
        return ans;
    }
};