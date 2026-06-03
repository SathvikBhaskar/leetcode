class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int l=0,maxi=0,m=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]-'A']++;
            m=max(m,freq[s[r]-'A']);
            while(r-l+1-m>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxi=max(maxi,r-l+1);
        }
        return maxi;    
    }
};