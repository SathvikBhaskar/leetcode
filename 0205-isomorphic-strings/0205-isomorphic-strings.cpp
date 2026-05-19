class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<int>m(256,0);
        vector<int>n(256,0);
        for(int i=0;i<s.size();i++){
            if(m[s[i]]!=n[t[i]])return false;
            m[s[i]]=i+1;
            n[t[i]]=i+1;
        }
        return true;
    }
};