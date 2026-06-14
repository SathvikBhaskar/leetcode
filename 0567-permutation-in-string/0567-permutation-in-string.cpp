class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())return false;
        vector<int>f1(26,0);
        vector<int>f2(26,0);
        for(int i=0;i<s1.size();i++){
            f1[s1[i]-'a']++;
            f2[s2[i]-'a']++;
        }
        if(f1==f2)return true;
        int l=0;
        for(int r=s1.size();r<s2.size();r++){
            if(f1==f2)return true;
            else{
                f2[s2[r]-'a']++;
                f2[s2[l]-'a']--;
                l++;
            }
        }
        return f1==f2;
    }
};