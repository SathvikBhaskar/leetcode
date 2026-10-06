class Solution {
public:
    int firstMatchingIndex(string s) {
        int l=0,r=s.size()-1;
        while(l<=r){
            if(s[l]==s[r])return l;
            l++;
            r--;
        }
        return -1;
    }
};