class Solution {
public:
    string bit(int n){
        string st;
        while(n){
            int b=n&1;
            st.push_back(b+'0');
            n>>=1;
        }
        return st;
    }
    int minimumFlips(int n) {
        string s=bit(n);
        int l=0,r=s.size()-1;
        int count=0;
        while(l<r){
            if(s[l]!=s[r])count+=2;
            l++;
            r--;
        }
        return count;
    }
};