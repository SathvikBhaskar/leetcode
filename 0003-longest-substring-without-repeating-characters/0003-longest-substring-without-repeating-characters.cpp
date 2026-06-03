class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int l=0,maxi=0;
        for(int r=0;r<s.size();r++){
            while(st.find(s[r])!=st.end()){
                st.erase(s[l]);
                l++;
            }
            st.insert(s[r]);
            maxi=max(maxi,r-l+1);
        }
        return maxi;
    }
};