class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        vector<int> ans(26,0);
        for(char c:s)ans[c-'a']++;
        for(char c:t)ans[c-'a']--;
        for(int c:ans){
            if(c!=0)return false;
        }
        return true;
    }
};